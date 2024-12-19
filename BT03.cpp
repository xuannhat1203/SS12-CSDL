#include<stdio.h>
#include<stdlib.h>
void laycapdoiXung(int A[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (A[i] == A[n - i - 1]) {
            printf("Cap doi xung: (%d, %d)\n", A[i], A[n - i - 1]);
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
	laycapdoiXung(arr,size);
}

