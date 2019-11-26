#ifndef COMPUTER_H
#define COMPUTER_H

#include <Product.h>


class Computer : public Product
{
    public:
        int     ramSize;
        int     screenSize;
        bool    isLaptop = false;

        Computer();
        virtual ~Computer();

        void turnOnOff();


   protected:

    private:
        void Update();
};

#endif // COMPUTER_H
