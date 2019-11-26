#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include "Brands.h"

class Product
{
    public:
        int     productId;
        int     productSize;
        float   productPrice;
        std::string productModel;

        Brands* brand;

        Product(Brands* brand);
        virtual ~Product();

        virtual void turnOnOff() = 0;

    protected:

    private:
};

#endif // PRODUCT_H
