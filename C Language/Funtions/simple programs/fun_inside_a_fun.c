#include <stdio.h>

int greater(int, int);
void display(int);
int sc();

int sc() {
    static int i = 1;
    int a;
    printf("Enter %d number: ", i++);
    scanf("%d", &a);
    return a;
}

int greater(int a, int b) {
    return (a > b) ? a : b;
}

void display(int d) {
    printf("The greater number is %d\n", d);
}

int main() {
    display(greater(sc(), sc()));
    return 0;
}