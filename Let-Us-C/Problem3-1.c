/* If cost price and selling price of an item is input through the keyboard, 
write a program to determine whether the seller has made profit or 
incurred loss. Also determine how much profit he made or loss he 
incurred. */
#include <stdio.h>
int main() {
    float cost_price, selling_price, profit_loss;
    printf("Enter cost price: ");
    scanf("%f", &cost_price);
    printf("Enter selling price: ");
    scanf("%f", &selling_price);
    profit_loss = selling_price - cost_price;
    if (profit_loss > 0) {
        printf("Profit: %f\n", profit_loss);
    } else if (profit_loss < 0) {
        printf("Loss: %f\n", -profit_loss);
    } else {
        printf("No profit, no loss.\n");
    }
    return 0;
}