#include <stdio.h>

#define PLAYERS 11
int i;
void inputRuns(int arr[]) {
    for(i=0;i<PLAYERS;i++){
        printf("Enter runs for player %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void totalAndAverage(int *arr, int *total, float *avg) {
    *total = 0;
    for(i=0;i<PLAYERS;i++){
        *total += *(arr + i);
    }
    *avg = *total / (float)PLAYERS;
}

void highestScorer(int *arr, int *maxRun, int *index) {
    *maxRun = *arr;
    *index = 0;

    for( i=1;i<PLAYERS;i++){
        if(*(arr + i) > *maxRun){
            *maxRun = *(arr + i);
            *index = i;
        }
    }
}

int main() {
    int runs[PLAYERS];
    int total, highest, idx;
    float average;

    inputRuns(runs);
    totalAndAverage(runs, &total, &average);
    highestScorer(runs, &highest, &idx);

    printf("\nTotal Score: %d\n", total);
    printf("Average Score: %.2f\n", average);
    printf("Highest Scorer: Player %d with %d runs\n", idx + 1, highest);

    return 0;
}

