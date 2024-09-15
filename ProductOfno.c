#include<stdio.h>

int main(){

int num;
 int product = 1;
printf("Enter The number \n");
scanf("%d",&num);

while(num > 0){

int rem = num % 10;

product = product * rem;

num = num / 10;

}

printf("The product of the number is %d \n",product);

    return 0;
}