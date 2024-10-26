#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

#define SLEEP 5

sem_t main_process, region_print;
sem_t sub_pro_A_1, sub_pro_A_2, sub_pro_1_A, sub_pro_2_A,\
        sub_pro_B_1, sub_pro_B_2, sub_pro_1_B, sub_pro_2_B;

int indexA = 0;
volatile int indexB = 0;

#pragma region Process
#pragma region RegionPrint
void * PROCESS_RegionPrint(){
    while(1){
        sem_wait(&region_print);
        printf("-----------------------------------------\n");
        sem_post(&main_process);
    }
}
#pragma endregion RegionPrint
#pragma region ProcessA
void* PROCESSA_1(){
    while (1){
        sem_wait(&sub_pro_A_1);
        printf("Print from A_1: %d\n",indexA);
        indexA++;
        sem_post(&sub_pro_1_A);
    }
}

void* PROCESSA_2(){
    while(1){
        sem_wait(&sub_pro_A_2);
        printf("Print from A_2: %d\n",indexA);
        indexA++;
        sem_post(&sub_pro_2_A);
    }
}

void* PROCESSA(){

    pthread_t thA_1, thA_2;

    pthread_create(&thA_1, NULL, &PROCESSA_1, NULL);
    pthread_create(&thA_2, NULL, &PROCESSA_2, NULL);
    while(1){
        sem_wait(&main_process);


        printf("Process A Run\n");
        sem_post(&sub_pro_A_1);
        sem_post(&sub_pro_A_2);
        sem_wait(&sub_pro_1_A);
        sem_wait(&sub_pro_2_A);
        printf("Process A End\n");
        sem_post(&region_print);
        sleep(SLEEP);
    }
}
#pragma endregion ProcessA
#pragma region ProcessB
void* PROCESSB_1(){
    while (1){
        sem_wait(&sub_pro_B_1);
        printf("Print from B_1: %d\n",indexB);
        indexB++;
        sem_post(&sub_pro_1_B);
        sem_post(&sub_pro_B_2);
    }
}

void* PROCESSB_2(){
    while(1){
        sem_wait(&sub_pro_B_2);
        printf("Print from B_2: %d\n",indexB);
        indexB++;
        sem_post(&sub_pro_2_B);
    }
}

void* PROCESSB(){

    pthread_t thB_1, thB_2;

    pthread_create(&thB_1, NULL, &PROCESSB_1, NULL);
    pthread_create(&thB_2, NULL, &PROCESSB_2, NULL);
    while(1){
        sem_wait(&main_process);


        printf("Process B Run\n");
        sem_post(&sub_pro_B_1);
        sem_wait(&sub_pro_1_B);
        sem_wait(&sub_pro_2_B);
        printf("Process B End\n");
        sem_post(&region_print);
        sleep(SLEEP);
    }
}
#pragma endregion ProcessB
#pragma endregion Process

void Init_semaphore(){
    /*-----------Main---------*/
    sem_init(&main_process,0,1);
    sem_init(&region_print,0,0);

    /*-----------Sub----------*/
    sem_init(&sub_pro_A_1,0,0);
    sem_init(&sub_pro_A_2,0,0);
    sem_init(&sub_pro_1_A,0,0);
    sem_init(&sub_pro_2_A,0,0);
    sem_init(&sub_pro_B_1,0,0);
    sem_init(&sub_pro_B_2,0,0);
    sem_init(&sub_pro_1_B,0,0);
    sem_init(&sub_pro_2_B,0,0);
}

void Init_thread(){
    pthread_t thReP,thA, thB;

    pthread_create(&thReP,NULL,&PROCESS_RegionPrint,NULL);

    pthread_create(&thA, NULL, &PROCESSA, NULL);
    pthread_create(&thB, NULL, &PROCESSB, NULL);
}

int main(){

    Init_semaphore();
    Init_thread();

    while(1);
    return 0;
}
