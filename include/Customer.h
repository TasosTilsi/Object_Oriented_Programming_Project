/*          Customer.h        */

#ifndef CUSTOMER_H
#define CUSTOMER_H


class Customer

{

    private:

            int id;

            char name[30];

            float amountOwing;         //συνολικό ποσό χρέωσης

    public:

           Customer();

           Customer(int id1, char name1[]);

           void setData(int id1, char name1[]);

           void readData();

           void printData();

           void buyItem(Item ant);      //αθροίζει την τιμή του προϊόντος στο συνολικό ποσό  χρέωσης

};


#endif
