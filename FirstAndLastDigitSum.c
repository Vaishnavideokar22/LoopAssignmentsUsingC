#include<stdio.h>

int main(){


int n;

int lastdigit;




printf("Enter the number \n");
scanf("%d",&n);

lastdigit = n % 10;

while(n > 10){

    n = n / 10;


}

printf("the Sum of the first and last digit of the number is: %d \n",lastdigit + n);




    return 0;

}