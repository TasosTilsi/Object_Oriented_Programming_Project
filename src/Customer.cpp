/*          Customer.cpp        */

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include "Item.h"
#include "Customer.h"

using namespace std;

Customer::Customer()
{
    id = 0;
    strcpy(name, " ");
    amountOwing = 0;
}
//---------------------------------------------------//
Customer::Customer(int id1, char name1[])
{
    id = id1;
    strcpy(name, name1);
    amountOwing = 0;
}
//---------------------------------------------------//
void Customer::setData(int id1, char name1[])
{
    id = id1;
    strcpy(name, name1);
    amountOwing = 0;
}
//---------------------------------------------------//
void Customer::readData()
{
    char tempName1[15],tempName2[15];
    cout << "\nGive Customer's ID: ";
    cin >> id;
    cout << "\nGive Customer's Name: ";
    cin >> tempName1 >> tempName2;
    strcpy(name,tempName1);
    strcat(name," ");
    strcat(name,tempName2);
    amountOwing = 0;
}
//---------------------------------------------------//
void Customer::printData()
{
    cout << "\n\nCustomer ID: " << id;
    cout << "\nCustomer Name: " << name;
    cout << "\nAmount Owing: " << amountOwing;
}
//---------------------------------------------------//
void Customer::buyItem(Item ant)
{
    amountOwing = amountOwing + ant.getPrice();
}
//---------------------------------------------------//
