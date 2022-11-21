#include <stdio.h>
#include <stdlib.h>

int main()
{

    int b;
    int r, d = 0, z = 1;
    int r1, d1 = 0, z1 = 1, ono[10], i1 = 0;
    int r2 = 0, d2 = 0, z2 = 1, x2, hex[10], i2 = 0;

    printf("\nEnter The Binary Number\n");
    scanf("\n%d", &b);

    int c;
    printf("\nInformation Menu\n1. Binary To Decimal \n2. Binary To Octal \n 3. Binary To Hexadecimal");
    printf("\nEnter Your Choice\n");
    scanf("\n%d", &c);

    switch (c)
    {
    case 1:
        while (b != 0)
        {
            r = b % 10;
            if (r > 1)
            {
                printf("\nInvalid Entry\n");
                return;
            }
            d = d + (r * z);
            z = z * 2;
            b = b / 10;
        }
        printf("\nThe Decimal Number Is ");
        printf("%d\n", d);
        break;

    case 2:
        while (b != 0)
        {
            r1 = b % 10;
            if (r1 > 1)
            {
                printf("\nInvalid Entry\n");
                return;
            }
            d1 = d1 + (r1 * z1);
            z1 = z1 * 2;
            b = b / 10;
        }

        while (d1 > 0)
        {
            r1 = d1 % 8;
            ono[i1] = r1;
            d1 = d1 / 8;
            i1++;
        }

        printf("\nThe Octal Number Is ");
        for (int j1 = i1 - 1; j1 >= 0; j1--)
        {
            printf("%d ", ono[j1]);
        }
        break;

    case 3:
        while (b != 0)
        {
            r2 = b % 10;
            if (r2 > 1)
            {
                printf("\nInvalid Entry\n");
                return;
            }
            d2 = d2 + (r2 * z2);
            z2 = z2 * 2;
            b = b / 10;
        }

        while (d2 > 0)
        {
            x2 = d2 % 16;
            hex[i2] = x2;
            d2 = d2 / 16;
            i2++;
        }

        for (int j = i2 - 1; j >= 0; j--)
        {
            switch (hex[j])
            {
            case 10:
                printf("\n%c", hex[j] + 55);
                break;

            case 11:
                printf("\n%c", hex[j] + 55);
                break;

            case 12:
                printf("\n%c", hex[j] + 55);
                break;

            case 13:
                printf("\n%c", hex[j] + 55);
                break;

            case 14:
                printf("\n%c", hex[j] + 55);
                break;

            case 15:
                printf("\n%c", hex[j] + 55);
                break;

            default:
                printf("\n%d", hex[j]);
                break;
            }
        }
        break;

    case 0:
        exit(0);
    }

    return 0;
}