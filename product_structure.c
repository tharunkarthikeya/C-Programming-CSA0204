#include <stdio.h>
#include <string.h>

struct Product {
    char name[100];
    int quantity;
    float unitPrice;
};

int main(void)
{
    struct Product product;

    printf("Enter product name: ");
    if (fgets(product.name, sizeof(product.name), stdin) == NULL)
        return 0;
    size_t len = strlen(product.name);
    if (len > 0 && product.name[len - 1] == '\n')
        product.name[len - 1] = '\0';

    printf("Enter quantity: ");
    if (scanf("%d", &product.quantity) != 1)
        return 0;

    printf("Enter unit price: ");
    if (scanf("%f", &product.unitPrice) != 1)
        return 0;

    float totalCost = product.quantity * product.unitPrice;
    printf("\nProduct details:\n");
    printf("Name: %s\n", product.name);
    printf("Quantity: %d\n", product.quantity);
    printf("Unit price: %.2f\n", product.unitPrice);
    printf("Total cost: %.2f\n", totalCost);

    return 0;
}
