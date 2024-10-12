#include <stdio.h>
int num;
int factorial(int);


int main(){
    
    printf("Enter any Number: ");
    scanf("%d",&num);

    int fact=factorial(1);
    printf("%d",fact);

return 0;
}

int factorial(int n) {

    if(n==num){
    return n;
    }
    
    return factorial(n+1)*n;
    
}
