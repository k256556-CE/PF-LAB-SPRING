#include<stdio.h>

int main(){
    int category, item, quantity, price = 0, total;

    printf("Main Category:\n1.Fast Food\n2.Desi Food\nSelect Option: ");
    scanf("%d",&category);

    switch(category){

        case 1:
            printf("\nFast Food Menu:\n1.Burger (500 Rs)\n2.Pizza (1200 Rs)\nSelect Item: ");
            scanf("%d",&item);

            switch(item){
                case 1:
                    price = 500;
                    printf("You selected Burger\n");
                    break;
                case 2:
                    price = 1200;
                    printf("You selected Pizza\n");
                    break;
                default:
                    printf("Invalid Item");
                    return 0;
            }
            break;

        case 2:
            printf("\nDesi Food Menu:\n1.Biryani (350 Rs)\n2.Karahi (1500 Rs)\nSelect Item: ");
            scanf("%d",&item);

            switch(item){
                case 1:
                    price = 350;
                    printf("You selected Biryani\n");
                    break;
                case 2:
                    price = 1500;
                    printf("You selected Karahi\n");
                    break;
                default:
                    printf("Invalid Item");
                    return 0;
            }
            break;

        default:
            printf("Invalid Category");
            return 0;
    }

    printf("Enter Quantity: ");
    scanf("%d",&quantity);

    total = price * quantity;

    printf("Total Bill: %d Rs", total);

    return 0;
}
