#include<stdio.h>

int sum(int arr[],int n);

int main(){
	int n;
	printf("How Many Numbers: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Please Enter The Element Of the array:\n");
	float total=sum(arr,n);
	
	return 0;
}

int sum(int arr[],int n){
	
	int total;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n;i++){
		total=total+arr[i];
	}
}