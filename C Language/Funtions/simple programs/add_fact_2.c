#include<stdio.h>

long int memory[100]={ 0 };

int factorial(int n){

    if(memory[n]!=0)
    return memory[n];
    else if(n==0 || n==1)
    return 1;

    memory[n] = factorial(n-1)*n;

    return memory[n];
}

int main(){
    int num1,num2,num3;

    printf("Enter Any Three Numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    // long sum = factorial(num1)+factorial(num2)+factorial(num3);
    int fact1=factorial(num1);
    int fact2=factorial(num2);
    int fact3=factorial(num3);
    long sum=fact1+fact2+fact3;

    printf("The Three Factorials are : %d %d %d \n",factorial(num1),factorial(num2),factorial(num3));
    printf("The addition of three factorial are %ld\n",sum);
}
// is using 
// fact1=factorial(num1)
// ........
// sum=fact1+fact2+fact3;
// .....
// is more beneficial

// https://chatgpt.com/share/66eb0979-1a40-800f-b701-043a813cd724