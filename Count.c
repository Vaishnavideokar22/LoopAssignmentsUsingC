#include<stdio.h>

int main(){

int n ;
int count = 0;

printf("Enter The Number \n");
scanf("%d",&n);

while(n > 0){

    n = n /10;
    count ++;

}

printf("The count of the number is %d \n",count);

 



    return 0;
}