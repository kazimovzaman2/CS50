#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // Get credit card number
    long long ccNum;
    do
    {
        ccNum = get_long_long("Please, enter your card number: ");
    }
    while(ccNum <= 0);



    // Find length of the card number
    int len = 0;
    long long variable = ccNum;

    while (variable > 0)
    {
        variable /= 10;
        len += 1;
    }



    // Print INVALID
    if (len != 13 && len != 15 && len != 16){
        printf("INVALID\n");
    }

    int digit1 = (((ccNum %100) / 10) * 2);
    int digit2 = (((ccNum % 10000) / 1000) * 2);
    int digit3 = (((ccNum % 1000000) / 100000) * 2);
    int digit4 = (((ccNum % 100000000) / 10000000) * 2);
    int digit5 = (((ccNum % 10000000000) / 1000000000) * 2);
    int digit6 = (((ccNum % 1000000000000) / 100000000000) * 2);
    int digit7 = (((ccNum % 100000000000000) / 10000000000000) * 2);
    int digit8 = (((ccNum % 10000000000000000) / 1000000000000000) * 2);


    int sum = ((digit1 % 10) + ((digit1 % 100) / 10));
    sum += ((digit2 % 10) + ((digit2 % 100) / 10));
    sum += ((digit3 % 10) + ((digit3 % 100) / 10));
    sum += ((digit4 % 10) + ((digit4 % 100) / 10));
    sum += ((digit5 % 10) + ((digit5 % 100) / 10));
    sum += ((digit6 % 10) + ((digit6 % 100) / 10));
    sum += ((digit7 % 10) + ((digit7 % 100) / 10));
    sum += ((digit8 % 10) + ((digit8 % 100) / 10));







    int digit9 = ccNum % 10;
    int digit10 = ((ccNum % 1000) / 100);
    int digit11 = ((ccNum % 100000) / 10000);
    int digit12 = ((ccNum % 10000000) / 1000000);
    int digit13 = ((ccNum % 1000000000) / 100000000);
    int digit14 = ((ccNum % 100000000000) / 10000000000);
    int digit15 = ((ccNum % 10000000000000) / 1000000000000);
    int digit16 = ((ccNum % 1000000000000000) / 100000000000000);




    sum += ((digit9 % 10) + ((digit9 % 100) / 10));
    sum += ((digit10 % 10) + ((digit10 % 100) / 10));
    sum += ((digit11 % 10) + ((digit11 % 100) / 10));
    sum += ((digit12 % 10) + ((digit12 % 100) / 10));
    sum += ((digit13 % 10) + ((digit13 % 100) / 10));
    sum += ((digit14 % 10) + ((digit14 % 100) / 10));
    sum += ((digit15 % 10) + ((digit15 % 100) / 10));
    sum += ((digit16 % 10) + ((digit16 % 100) / 10));


    if (sum % 10 != 0)
    {
        printf("INVALID\n");
    }




    long long AmEX = (ccNum / 10000000000000);


    if (len == 15)
    {
        if (AmEX != 34 && AmEX != 37)
        {
            printf("INVALID\n");
        }
        else
        {
            printf("AMEX\n");
        }
    }


    if (len == 13)
    {
        printf("VISA\n");
    }


    if (len == 16)
    {
        if ((digit8 / 2) == 4)
        {
            printf("VISA\n");
        }
        else
        {
            long long mastercard = (ccNum / 100000000000000);

            if (mastercard != 51 && mastercard != 52 && mastercard != 53 && mastercard != 54 && mastercard != 55)
            {
                printf("INVALID\n");
            }
            else
            {
                printf("MASTERCARD\n");
            }
        }
    }
}