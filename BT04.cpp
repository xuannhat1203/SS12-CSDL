#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
typedef struct {
    char name[50]; 
    float score;   
} Student;
float findScore(Student students[], int count, const char *name) {
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, name) == 0) { 
            return students[i].score; 
        }
    }
    return -1; 
}

int main() {
    int n;
    Student students[MAX_STUDENTS];
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar(); 
    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien thu %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;
        printf("Nhap diem so cua %s: ", students[i].name);
        scanf("%f", &students[i].score);
        getchar(); 
    }
    char searchName[50];
    printf("\nNhap ten cua sinh vien can tim: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = 0;
    float result = findScore(students, n, searchName);
    if (result != -1) {
        printf("Diem cua sinh vien %s la: %.2f\n", searchName, result);
    } else {
        printf("Khong tim thay sinh vien %s.\n", searchName);
    }

    return 0;
}

