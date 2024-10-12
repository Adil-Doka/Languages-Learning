#include <stdio.h>

void greater(int,int);
void display(int);
int sc();

int sc() {
    static int i = 1;
    int a;
    printf("Enter %d number: ", i++);
    scanf("%d", &a);
    return a;
}

void greater(int a, int b) {

    // c = (a > b) ? a : b;
    // display(return c);
    // not possible

    display( (a > b) ? a : b);

}

void display(int d) {
    printf("The greater number is %d\n", d);
}

int main() {
    greater(sc(),sc());

    return 0;
}