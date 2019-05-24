/*          Item.cpp        */

#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Item.h"
#include "Customer.h"

using namespace std;

Item::Item()
{
    code = 0;
    strcpy(description, " ");
    price = 0;
}
//---------------------------------------------------//
Item::Item(int code1, char description1[], float price1)
{
    code = code1;
    strcpy(description, description1);
    price = price1;
}
//---------------------------------------------------//
void Item::setData(int code1, char description1[], float price1)
{
    code = code1;
    strcpy(description, description1);
    price = price1;
}
//---------------------------------------------------//
void Item::printData()
{
    cout << "\n\t"<<code<<"\t"<<description<<"\t"<<price;
}
//---------------------------------------------------//
int Item::getCode()
{
    return code;
}
//---------------------------------------------------//
float Item::getPrice()
{
    return price;
}
//---------------------------------------------------//
