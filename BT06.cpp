#include<stdio.h>
#include<stdlib.h>
void checkNumber(int arr[], int size) {
    int count;
    bool checked[size];
    for (int i = 0; i < size; i++) {
        checked[i] = false;
    }
    for (int i = 0; i < size; i++) {
        if (!checked[i]) { 
            count = 1;
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    checked[j] = true; 
                }
            }
            if (count > 1) {
                printf("Phan tu %d xuat hien %d lan\n", arr[i], count);
            }
        }
    }
    bool hasDuplicates = false;
    for (int i = 0; i < size; i++) {
        if (checked[i]) {
            hasDuplicates = true;
            break;
        }
    }
    if (!hasDuplicates) {
        printf("Khong co phan tu nao lap lai\n");
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
	checkNumber(arr,size);
}

