/*          Item.h        */

#ifndef ITEM_H
#define ITEM_H


class Item

{

    private:

            int code;                          //κωδικός προϊόντος

            char description[15];     //ονομασία προϊόντος

            float price;                      //τιμή μονάδος



    public:

           Item();

           Item(int code1, char description1[], float price1);

           void setData(int code1, char description1[], float price1);

           void printData();

           int getCode();        //επιστρέφει τον κωδικό προϊόντος

           float getPrice();     //επιστρέφει την τιμή μονάδος



};

#endif
