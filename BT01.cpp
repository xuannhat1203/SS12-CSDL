#include<stdio.h>
#include<stdlib.h>
int findMax(int arr[],int size){
	int max = arr[0];
	for(int i=0;i<size;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	int size;
	printf("Nhap so luong phan tu: ");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Phan tu lon nhat la: %d",findMax(arr,size));
}

