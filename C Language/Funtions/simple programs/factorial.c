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
}


void display (int fact) {
    printf("The factorial is %d",fact);
}