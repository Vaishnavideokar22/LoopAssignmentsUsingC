#include<stdio.h>

int main(){

int n;
printf("Enter the number \n");
scanf("%d",&n);


int sum = 0;

for(int i = 1; i <= n; i++){

printf("%d \n",i);
  sum = sum+i;

}
printf(" The Sum is :%d \n",sum);




    return 0;
}