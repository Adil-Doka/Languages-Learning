#include <stdio.h>

int main(){
    int num[]={1,2,3,4,5};
    // int* ptr=&num[0];
    int* ptr=num;//same as above

    for (int i = 0; i < 5; i++,ptr++)
    {
        printf("Value at %d is: %d\n",i+1,*ptr);
        // ptr++;
    }
        


return 0;
}