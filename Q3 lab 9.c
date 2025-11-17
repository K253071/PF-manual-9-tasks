#include <stdio.h>

#define ROW 3
#define COL 20

void replaceVowels(char arr[ROW][COL]) {
    int i, j;
    for(i=0;i<ROW;i++){
        for(j=0;arr[i][j] != '\0';j++){
            char ch = arr[i][j];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                arr[i][j] = '*';
            }
        }
    }
}

void display(char arr[ROW][COL]) {
    int i;
    for(i=0;i<ROW;i++){
        printf("%s\n", arr[i]);
    }
}

int main() {
    char text[ROW][COL];
    int i;

    for(i=0;i<ROW;i++){
        printf("Enter string %d: ", i+1);
        scanf("%s", text[i]);
    }

    replaceVowels(text);

    printf("\nUpdated Array:\n");
    display(text);

    return 0;
}

