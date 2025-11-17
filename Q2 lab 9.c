#include <stdio.h>

#define ACC 5

void deposit(float *bal, int acc, float amount) {
    *(bal + acc) += amount;
}

void withdraw(float *bal, int acc, float amount) {
    *(bal + acc) -= amount;
}

float average(float *bal) {
    int i;
    float sum = 0;
    for(i=0;i<ACC;i++) sum += *(bal + i);
    return sum / ACC;
}

int main() {
    float balance[ACC];
    int i, choice, acc;
    float amount;

    for(i=0;i<ACC;i++){
        printf("Enter balance for account %d: ", i+1);
        scanf("%f", &balance[i]);
    }

    while(1){
        printf("\n1 Deposit\n2 Withdraw\n3 Show Average\n4 Exit\nEnter choice: ");
        scanf("%d", &choice);

        if(choice==4) break;

        if(choice==1 || choice==2){
            printf("Enter account number (1-5): ");
            scanf("%d", &acc);
            acc--;

            printf("Enter amount: ");
            scanf("%f", &amount);

            if(choice==1) deposit(balance, acc, amount);
            else withdraw(balance, acc, amount);
        }

        if(choice==3){
            printf("Average Balance: %.2f\n", average(balance));
        }
    }

    return 0;
}

