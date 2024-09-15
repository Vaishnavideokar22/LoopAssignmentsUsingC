#include<stdio.h>

int main(){

    int n;
int sum = 0;

    printf("Enter The Number \n");
    scanf("%d",&n);

    while(n > 0){

        int rem = n % 10;
        sum = sum + rem ;
        
        n = n / 10;

    }

    printf("The sum of the number is %d \n",sum);

    return 0;
}