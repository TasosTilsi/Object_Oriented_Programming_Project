# Object-Oriented Programming - Project 

## Description

This repo contains my project on Object-Oriented Programming course at TEI of Central Macedonia

---

### Project Description

To write an object-oriented program for purchasing products from customers. More specifically, a project should be created where the following two classes will be implemented:

```c
class Item 
{
    private: 
        int code; // product code 
        char description [15]; // product name 
        float price; // value unit 

    public: 
        Item (); 
        Item (int code1, char description1 [], float price1); 
        void setData (int code1, char description1 [], float price1); 
        void printData (); 
        int getCode (); // returns the product code 
        float getPrice (); // returns the unit value
};
```

```c
class Customer 
{
    private: 
        int id; 
        char name [30]; 
        float amountOwing; // total amount of charge

    public: 
        Customer (); 
        Customer (int id1, char name1 []); 
        void setData (int id1, char name1 []); 
        void readData (); 
        void printData (); 
        void buyItem (Item ant); // adds the product price to the total amount of charge
};
```

Each class has to be implemented in two files as it was presented in the workshops (class.h and class.cpp).

Also, the following two functions should be implemented:
```c
void readItems (FILE * fine, Item list []);
```
It reads product information from a text file and stores them in a product table (object table). To enter the object table use setData.
```c
int searchValidCode (Item list [], int kodikos);
```
Accepts the product table, a code and checks whether the code is on the table or not. If the search is successful, it returns the position of the table where the product is registered, otherwise it returns -1.

---

**_Program mode:_**
1. Read the text file and save it in the product table.
2. Typing the elements of a customer.
3. Show the list of products.
4. Type a product code.
5. Check the validity of the code and, if successful, the customer will proceed to the purchase of the product (buyItem call).
6. The process will be repeated from step 3 until the customer has given a 0 code.
7. It will display customer information and will terminate.

---
_items.txt_

```
100 Office Chair 127.95 
200 Office Desk 230.0 
300 Computer Desk 75.49 
400 Desk Light 25.95 
500 BookShelves 115.5
```