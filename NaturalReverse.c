#include<stdio.h>

int main(){

int num;
printf("Enter the number \n");
scanf("%d",&num);
printf("The number is %d \n",num);



while(num >= 1){

printf("%d \n",num);

num--;
}

    return 0;
}