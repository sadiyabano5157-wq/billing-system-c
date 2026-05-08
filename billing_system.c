#include<stdio.h>

int main()
{
    float amount, discount, final_amount;

    printf("Enter amount\n");

    scanf("%f",&amount);

    if(amount>=5000)
    {
        discount = amount * 20 / 100;
    }
    else if(amount>=3000)
    {
        discount = amount * 10 / 100;
    }
    else
    {
        discount = 0;
    }

    final_amount = amount - discount;

    printf("Original Amount = %.2f\n",amount);

    printf("Discount Amount = %.2f\n",discount);

    printf("Final Amount = %.2f\n",final_amount);

    return 0;
}
