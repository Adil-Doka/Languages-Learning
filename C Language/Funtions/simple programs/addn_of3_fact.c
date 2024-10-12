// problems in the code & i am too lazy to solve them
// 1. cant enter same numbers
// 2. num2 and num3 cant be one

#include <stdio.h>
int num1, num2, num3;
int n1, n2, n3;
long int fact1=0, fact2=0, fact3=0;

int factorial(int num);
void greatest();
void greater(int, int);
void sc();

int main()
{
    sc();
    int long sum = factorial(num1)+fact2+fact3;
    printf("factorials are %ld %ld %ld\n",fact1,fact2,fact3);
    printf("The addition of three factorial is :%ld", sum);

    return 0;
}

int factorial(int n)
{

    if (n == 0 || n == 1)
        return 1;

    fact1= factorial(n - 1) * n;

    if(n==num2)
    fact2=fact1;
    else if(n==num3)
    fact3=fact1;

    return fact1;



    
    
}

void sc()
{

    printf("Enter Any three Numbers: \n");
    scanf("%d%d%d", &n1, &n2, &n3);
    greatest();
    
}

void greatest()
{
    if (n1 > n2)
    {
        if(n1>n3){
        num1 = n1;
        greater(n2, n3);
        }
        else{
         num1 = n3;
        greater(n1, n2);
        }
    }
    else if(n2>n1){ 

        if(n2>n3){
        num1 = n2;
        greater(n1, n3);
        }
        else{
         num1 = n3;
        greater(n1, n2);
        }

    }
}

void greater(int a, int b)
{
    if (a > b)
    {
        num2 = a;
        num3 = b;
    }
    else
    {
        num2 = b;
        num3 = a;
    }
}