// ----------FOOD BILLING SYSTEME---------
#include <stdio.h>
//create function for display the food menu card
int Menucard(){
    printf("!!!!!!!!!Menu Card!!!!!!!!!\n");
    printf("FOOD               Prices\n");
    printf("1.Pizza            180/-\n");
    printf("2.Burger           180/-\n");
    printf("3.Dosa             120/-\n");
    printf("4.Idli             50/-\n");
    printf("5.Sandwich         150/-\n");

}
int main () {
    int choice,Quantity,total_quantity=0;
    char againorder;
    float price=0,total_bill=0;
    
    printf("!!!Welcome To Fast Food Hub!!!\n");
    do
    {
        Menucard();
        printf("\n");
        printf("Please Enter your choice...:");
        scanf("%d",&choice);
        printf("\n");
    switch (choice)
    {
    case 1:
        printf("---You Selected Pizza---\n");
        printf("Enter the Quantity:");
        scanf("%d",&Quantity);
        price=180*Quantity;
        break;
    case 2:
        printf("---You Selected Burger---\n");
        printf("Enter the Quantity:");
        scanf("%d",&Quantity);
        price=180*Quantity;
        break;
    case 3:
        printf("---You Selected Dosa---\n");
        printf("Enter the Quantity:");
        scanf("%d",&Quantity);
        price=120*Quantity;
        break;
    case 4:
        printf("---You Selected Idli---\n");
        printf("Enter the Quantity:");
        scanf("%d",&Quantity);
        price=50*Quantity;
        break;
    case 5:
        printf("---You Selected Sandwich---\n");
        printf("Enter the Quantity:");
        scanf("%d",&Quantity);
        price=150*Quantity;
        break;
    default:
        printf("Invalid choice....\n");
        break;
    }
    total_quantity+=Quantity;
    total_bill+=price;
    printf("\n");
    printf("Do You want place more orders?\n");
    printf("Press 'y' for yes || Press 'n' for No:");
    scanf(" %c",&againorder);
    printf("\n");
    } while (againorder=='y'|| againorder=='Y');

    printf("-----Total Bill-----\n");
    printf("Your Total Quantity Of Food is:-%d\n",total_quantity);
    printf("Your total bill is:%f/-",total_bill);

    printf("\n!!!Visit Again!!!");
    return 0;
}