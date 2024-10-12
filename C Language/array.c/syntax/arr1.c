#include<stdio.h>

int main(){
    float sum=0;
    float cgpa[4]={5.0,8.5,8.0,8.0};

    for (int i = 0; i <=  3; i++)
    {
        sum=sum+cgpa[i];
    }
    printf("The total CGPA is: %.2f",sum/4.0);

    
    
}