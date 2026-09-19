#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item;

    printf("Enter Item ID: ");
    scanf("%d", &item.id);

    printf("Enter Item Name: ");
    scanf("%s", item.name);

    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter Price: ");
    scanf("%f", &item.price);

    printf("\nItem added successfully!\n");
    printf("ID: %d\n", item.id);
    printf("Name: %s\n", item.name);
    printf("Quantity: %d\n", item.quantity);
    printf("Price: %.2f\n", item.price);

    return 0;
}
