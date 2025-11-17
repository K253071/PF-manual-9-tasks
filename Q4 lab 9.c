#include <stdio.h>

#define ROW 3
#define COL 4

int main() {
    int arr[ROW][COL];
    int i, j, key;
    int found = 0;

    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", (*(arr+i)+j));
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            if(*(*(arr+i)+j) == key){
                printf("Element found at row %d, column %d\n", i, j);
                found = 1;
            }
        }
    }

    if(!found) printf("Element not found\n");

    return 0;
}

