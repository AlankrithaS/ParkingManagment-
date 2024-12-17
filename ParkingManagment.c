#include <stdio.h> 
#include <stdlib.h>

int Menu();
void Bus();
void Cycle();
void Riksha();
void ShowDetail();
void DeleteData();

int nor = 0, nob = 0, noc = 0, amount = 0, count = 0;

void main()
{
    int choice;
    while (1) // Infinite loop to keep showing the menu
    {
        choice = Menu();
        switch (choice)
        {
            case 1:
                Bus();
                break;
            case 2:
                Cycle();
                break;
            case 3:
                Riksha();
                break;
            case 4:
                ShowDetail();
                break;
            case 5:
                DeleteData();
                break; 
            case 6:
                exit(0); 
            default:
                printf("\nInvalid Choice, try again between 1-6 !!!\n");}
    }
}

int Menu()
{
    int ch;
    printf("\n\n==== MENU ====");
    printf("\n 1. Enter Bus");
    printf("\n 2. Enter Cycle");
    printf("\n 3. Enter Auto");
    printf("\n 4. Show Status");
    printf("\n 5. Delete Data");
    printf("\n 6. Exit");
    printf("\n Enter Your Choice: ");
    scanf("%d", &ch);
    return ch;
}

void ShowDetail()
{
    printf("\n Number of Buses = %d", nob);
    printf("\n Number of Cycles = %d", noc);
    printf("\n Number of Autos = %d", nor);
    printf("\n Total number of vehicles = %d", nob + noc + nor);
    printf("\n Total gain amount = %d", amount);
}

void DeleteData()
{
    nob = 0;
    noc = 0;
    nor = 0;
    amount = 0;
    count = 0;
    printf("\n All data has been reset to zero.\n");
}

void Cycle()
{
    noc++;
    amount = amount + 20;
    count++;
    printf("\n Cycle entry recorded. Charge = 20\n");
}

void Riksha()
{
    nor++;
    amount = amount + 50;
    count++;
    printf("\n Auto entry recorded. Charge = 50\n");
}

void Bus()
{
    nob++;
    amount = amount + 100;
    count++;
    printf("\n Bus entry recorded. Charge = 100\n");
}
