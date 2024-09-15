#include<stdio.h>

int main(){

int num ;
printf("Enter the number \n");
scanf("%d",&num);

int sum = 0;

for(int i = 1; i <= num ; i++){
    if(i % 2 != 0){
        sum = sum + i;
    }
}
printf("The Sum is %d \n",sum);

    return 0;
}