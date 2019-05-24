/*         main.cpp        */

#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>
#include <assert.h>
#include "Item.h"
#include "Customer.h"

using namespace std;

void readItems(FILE *fin, Item  list[]);
int searchValidCode(Item  list[],int  kodikos);


int main()
{
    int i,code,flag;
    FILE *fp;
    Item lst[5];
    Customer pelatis;


    cout << "Project on Object Oriented Programming!!!\n\n\n";

    fp = fopen("items.txt","r");
    //assert(fp != NULL);

    pelatis.readData();
    readItems(fp,lst);

    do
    {
        cout << "\n\tCode: \tDescription: \tPrice: ";
        cout << "\n________________________________________";
        for (i=0;i<5;i++)
            lst[i].printData();


        cout << "\n\nGive me one code from the list above!\tCode: ";
        cin >> code;
        flag = searchValidCode(lst,code);
        while (flag == -1 && code != 0)
        {
            if (flag == -1)
            {
                if (code == 0)
                    cout << "\nYou have finish your purchases!\nThanks a lot!";
                else
                    cout << "This Item is not on the List!\nTry Again with the Items above!\n";
            }
            cout << "\n\nGive me one code from the list above!\tCode: ";
            cin >> code;
            flag = searchValidCode(lst,code);
        }

        pelatis.buyItem(lst[flag-1]);
        cout << "\nThe purchase is done!\n";

    }while(flag != -1);

    pelatis.printData();



    fclose(fp);

    cout << "\n\n-----------------------------------\n";
    cout << "Tilsizoglou Anastasios 3878\n";
    cout << "End of the Project on Object Oriented Programming!!!\n\n\n";
    system("Pause");
    return 0;
}
//---------------------------------------------------//
void readItems(FILE *fin, Item list[])
{
    int i=0,code1;
    char description1[15];
    float price1;

    for (i=0;i<5;i++)
    {
        fscanf(fin ,"%d",&code1);
        fgets(description1, sizeof(description1) ,fin);
        fscanf(fin ,"%f",&price1);
        list[i].setData(code1,description1,price1);
    }
}
//---------------------------------------------------//
int searchValidCode(Item list[],int kodikos)
{
    if (list[0].getCode() == kodikos)
        return 1;
    else if (list[1].getCode() == kodikos)
        return 2;
    else if (list[2].getCode() == kodikos)
        return 3;
    else if (list[3].getCode() == kodikos)
        return 4;
    else if (list[4].getCode() == kodikos)
        return 5;
    else
        return -1;
}
