#include <stdio.h>
#include <stdlib.h>
/* shopping bill calculator*/
int main()
{
 float price;
 float qty;
 int count=1;
 float tpc;
 float tp = 0.0;
 float discount;
 printf("enter price of commodity:\n");
 printf("enter the quantity of commodity being purchased in Kgs:\n\n");
 printf("if you do not want to purchase anything enter 0\n\n");
       do {
            scanf("%f %f", &price, &qty);
       printf("the price of commodity %d is %f and quantity purchased is %fKgs\n= ", count, price, qty);
       tpc = price*qty;
       printf("total price of commodity %d is =%f\n\n",count, tpc);
       printf("enter price of commodity:\n");
       printf("enter the quantity of commodity being purchased in Kgs:\n\n");
       printf("if you are done shopping enter 0\n\n");
       tp = tp + tpc;
count++;
 }while(price && qty != 0);
    if (tp >= 1000) {
        discount= tp/10;
        tp = tp - discount;
        printf("you have to pay Rs.%f\n", tp);
        printf("your savings are Rs.%f\n", discount);
    }
    else {
        printf("you have to pay Rs.%f\n", tp);
    }
    printf("Hope you had a happy shopping with us");
    return 0;
}
