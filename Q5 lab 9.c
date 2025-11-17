#include <stdio.h>

void printData(void *ptr, char type) {
    if(type=='i')
        printf("Product ID: %d\n", *(int*)ptr);
    else if(type=='f')
        printf("Price: %.2f\n", *(float*)ptr);
    else if(type=='c')
        printf("Category Code: %c\n", *(char*)ptr);
}

int main() {
    int id;
    float price;
    char category;
    char type;

    printf("Enter Product ID (int): ");
    scanf("%d", &id);

    printf("Enter Price (float): ");
    scanf("%f", &price);

    printf("Enter Category code (char): ");
    scanf(" %c", &category);

    printf("\nEnter type to display (i/f/c): ");
    scanf(" %c", &type);

    if(type=='i')
        printData(&id, 'i');
    else if(type=='f')
        printData(&price, 'f');
    else if(type=='c')
        printData(&category, 'c');
    else
        printf("Invalid type\n");

    return 0;
}

