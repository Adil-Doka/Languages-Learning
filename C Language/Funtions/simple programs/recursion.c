#include <stdio.h>

int factorial(int);
void display(int);

int main(){
    int num;

    printf("Enter Any No: ");
    scanf("%d",&num);

    display(factorial(num));


return 0;
}

int factorial(int n ) {

    if (n==0 || n==1)
    {
        return 1;
    }
    
    return factorial(n-1)*n;
    // factorial(4-1)*4;
    // factorial(3)*4;=6x4=24
    // factorial(2)*3;=2x3=6
    // factorial(1)*2;=1x2=2

    // return fact*factorial(n-1); 
    // fact=fact*factorial(3-1)=1 & 4
    // fact=fact*factorial(2)=1 & 2
    // fact=fact*factorial(1)=1 & 1
}


void display (int fact) {
    printf("The factorial is %d",fact);
}