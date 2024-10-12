#include <stdio.h>

void bubble_sort(int n, int array[n]);
void sc(int n, int array[n]);
void display(int n, int array[n]);

int main()
{

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];
    sc(n, array);
    printf("Array Before sorting: \n");
    display(n, array);

    bubble_sort(n, array);
    printf("\nArray after sorting: \n");
    display(n, array);

    return 0;
}

void sc(int n, int array[n])
{
    printf("Enter The Elements of Array :");
    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&array[i]);
    }
}
void display(int n, int array[n])
{

    for (int i = 0; i < n ; i++)
    {
        printf("%d ",array[i]);
    }
}

void bubble_sort(int n, int array[n]){
    int temp;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(array[j]<array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
        

    }
    

}
