#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product
{
    public:
        int     productId;
        int     productSize;
        float   productPrice;
        std::string productModel;

        Product();
        virtual ~Product();

        virtual void turnOnOff() = 0;

    protected:

    private:
};

#endif // PRODUCT_H
