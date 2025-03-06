#include <stdio.h>

long long int Sum(int n){
    long long int sum = 0;
    int loop = 1;

    long long int Arr[n+1];

    for(int i = 0; i <= n; i++){
        //Count reverse
        for(int j = i; j >= 0; --j){
            //first or end element of array
            if(j == i || j==0){
                Arr[j] = 1;
                continue;
            }
            //K_new = K_old + K_previous
            if(j != 0){
                Arr[j] = Arr[j]+Arr[j-1];
            }

        }
    }
    //Print the array and calculate the sum
    for (int i = 0; i <= n; i++){
        printf("%d ", Arr[i]);
        sum += Arr[i];
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("\n%lld", Sum(n));

    return 0;
}
