#include<stdio.h>
#include<stdlib.h>
void findIndex(int arr[],int size,int value){
	int low = 0;
	int high = size - 1;
	while(low <= high){
		int mid = (low + high)/2;
		if(arr[mid] == value){
			printf("Phan tu %d nam o vi tri %d",value,mid);
			return ;
		}else if(arr[mid] > value){
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	}
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
	int value;
	printf("Nhap gia tri can tim: ");
	scanf("%d",&value);
	findIndex(arr,size,value);
}

