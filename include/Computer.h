#ifndef COMPUTER_H
#define COMPUTER_H

#include <Product.h>


class Computer : public Product
{
    using Product::Product;

    public:
        int     ramSize;
        int     screenSize;
        bool    isLaptop = false;

        virtual ~Computer();

        void turnOnOff();


   protected:

    private:
        void Update();
};

#endif // COMPUTER_H
