#include <stdio.h>

#define STUDENTS 4
#define CLASSES 5

void inputAttendance(int arr[STUDENTS][CLASSES]) {
    int i, j;
    for(i=0;i<STUDENTS;i++){
        for(j=0;j<CLASSES;j++){
            printf("Student %d, Class %d (1=present,0=absent): ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
}

void calculatePercentage(int arr[STUDENTS][CLASSES], float percent[]) {
    int i, j;
    for(i=0;i<STUDENTS;i++){
        int present = 0;
        for(j=0;j<CLASSES;j++){
            present += arr[i][j];
        }
        percent[i] = (present * 100.0) / CLASSES;
    }
}

void displayWarnings(float percent[]) {
    int i;
    for(i=0;i<STUDENTS;i++){
        printf("Student %d Attendance: %.2f%%", i+1, percent[i]);
        if(percent[i] < 75)
            printf("  --> WARNING: Below 75%%");
        printf("\n");
    }
}

int main() {
    int attendance[STUDENTS][CLASSES];
    float percent[STUDENTS];

    inputAttendance(attendance);
    calculatePercentage(attendance, percent);
    displayWarnings(percent);

    return 0;
}

