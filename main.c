#include <stdio.h>
#include <stdlib.h>
int a = 1, choice, sa, ds, te, co, sa1, ds1, te1, co1;

void menu()
{
    printf("\n");
    printf(":: Menu ::\n");
    printf("1. Samosa 20/-\n");
    printf("2. Dosa   35/-\n");
    printf("3. Tea    10/-\n");
    printf("4. Coffee  15/-\n");
    printf("0. Exit\n");
}
void order()
{
    int choice;
    menu();
    printf("enter choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("you have ordered Samosa.\n");
        quantity(choice);
        scanf("%d", &sa);
        sa1 += sa;
        printf("Ok ...anything else");
        break;

    case 2:
        printf("you have ordered Dosa.\n");
        quantity(choice);
        scanf("%d", &ds);
        ds1 += ds;
        printf("Ok ...anything else");

        break;
    case 3:
        printf("you have ordered Tea.\n");
        quantity(choice);
        scanf("%d", &te);
        te1 += te;
        printf("Ok ...anything else");
        break;
    case 4:
        printf("you have ordered Coffee.\n");
        quantity(choice);
        scanf("%d", &co);
        co1 += co;
        printf("Ok ...anything else");
        break;
    case 0:
        printf("Exit.\n");
        a = 0;
        break;
    default:
        printf("invalid option\n");
        break;
    }
}

void platesOrCups(int choice)
{
    switch (choice)
    {
    case 1:
    case 2:
        printf("Plates?\n");
        break;
    case 3:
    case 4:
        printf("Cups?\n");
    }
}
void quantity(int choice)
{

    printf("Enter how many ");
    platesOrCups(choice);
}

void Table()
{

    printf("Sr. | Item   | Qty  | Rate | Total    \n");
    printf("--------------------------------------\n");
    choices();
}
void choices()
{

    int totalBill, cash, rCash;
    if (sa1)
    {
        printf("1.  | Samosa | %d   | 20   | %d       \n", sa1, 20 * sa1);
    }
    if (ds1)
    {
        printf("2.  | Dosa   | %d   | 35   | %d       \n", ds1, 35 * ds1);
    }
    if (te1)
    {
        printf("3.  | Tea    | %d   | 10   | %d       \n", te1, 10 * te1);
    }

    if (co1)
    {
        printf("4.  | Coffee | %d   | 15   | %d       \n", co1, 15 * co1);
    }
    printf("--------------------------------------\n");
    totalBill = (20 * sa1) + (35 * ds1) + (10 * te1) + (15 * co1);
    printf("             GROSS TOTAL : %d         \n\n", totalBill);

    printf("enter your cash : ");
    scanf("%d", &cash);
    rCash = cash - totalBill;
    printf("return cash = %d\n\n", rCash);

    int b, c, d, e, f, g, h;
    // b=notes of 100,c=notes of 50, d=notes of 20; e=notes of 10,
    // f=notes of 5, g=notes of 2,h=notes of 1
    b = rCash / 100;
    c = (rCash % 100) / 50;
    d = ((rCash % 100) % 50) / 20;
    e = (((rCash % 100) % 50) % 20) / 10;
    f = ((((rCash % 100) % 50) % 20) % 10) / 5;
    g = (((((rCash % 100) % 50) % 20) % 10) % 5) / 2;
    h = (((((rCash % 100) % 50) % 20) % 10) % 5) % 2;
    if (b)
        printf("%d note(s) of 100.00\n", b);
    if (c)
        printf("%d note(s) of 50.00\n", c);
    if (d)
        printf("%d note(s) of 20.00\n", d);
    if (e)
        printf("%d note(s) of 10.00\n", e);
    if (f)
        printf("%d note(s) of 5.00\n", f);
    if (g)
        printf("%d note(s) of 2.00\n", g);
    if (h)
        printf("%d note(s) of 1.00\n", h);
}

int main()
{
    printf(":: Welcome To Asterisc Cafe ::\n");
    while (a)
    {
        order();
    }

    Table();
    return 0;
}
