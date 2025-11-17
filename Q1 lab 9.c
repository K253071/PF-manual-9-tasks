#include <stdio.h>

#define WARDS 3
#define BEDS 5

void recordStatus(int arr[WARDS][BEDS]) {
    int i,j;
    for(i=0;i<WARDS;i++){
        for(j=0;j<BEDS;j++){
            printf("Ward %d Bed %d (1=occupied,0=empty): ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}

void countBeds(int arr[WARDS][BEDS], int *occ, int *empty) {
    int i,j;
    *occ=0;
    *empty=0;
    for(i=0;i<WARDS;i++){
        for(j=0;j<BEDS;j++){
            if(*(*(arr+i)+j)==1) (*occ)++;
            else (*empty)++;
        }
    }
}

void displayStatus(int arr[WARDS][BEDS]) {
    int i,j;
    printf("\nWard Status:\n");
    for(i=0;i<WARDS;i++){
        printf("Ward %d: ",i+1);
        for(j=0;j<BEDS;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int beds[WARDS][BEDS];
    int occ, empty;

    recordStatus(beds);
    countBeds(beds,&occ,&empty);
    displayStatus(beds);

    printf("\nOccupied Beds: %d\n",occ);
    printf("Available Beds: %d\n",empty);

    return 0;
}

