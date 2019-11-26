#include <iostream>
#include "Computer.h"

using namespace std;

void displayProduct(Product& product)
{
    product.productModel += "2";
    cout << product.productModel << endl;
}

int main()
{
    Computer    myComputer;

    myComputer.productPrice = 300.0;
    myComputer.isLaptop = true;
    myComputer.productModel = "Gamer";

    displayProduct(myComputer);

    return 0;
}
