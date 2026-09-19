#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

void deleteItem(struct Item items[], int *count, int id) {
    int i, found = 0;

    for (i = 0; i < *count; i++) {
        if (items[i].id == id) {
            found = 1;
          int j;
            for (j = i; j < *count - 1; j++) {
                items[j] = items[j + 1];
            }

            (*count)--;
            printf("Item deleted and stock cleared successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Item not found.\n");
    }
}

int main() {
    struct Item items[10] = {
        {1, "Rice", 50, 60.0},
        {2, "Sugar", 30, 45.0},
        {3, "Oil", 20, 120.0}
    };

    int count = 3;
    int id;

    printf("Enter Item ID to delete: ");
    scanf("%d", &id);

    deleteItem(items, &count, id);

    return 0;
}
