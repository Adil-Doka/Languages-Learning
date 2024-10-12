#include<stdio.h>

int fibo(int n){
if(n==0 || n==1)
	return 1;

return fibo(n-1)+n;
}

int main(){
int num;
printf("Please Enter The Number");
scanf("%d",&num);
printf("The Fibince Number IS: %d",fibo(num));

return 0;
}