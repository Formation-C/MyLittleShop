#include <iostream>
#include "Computer.h"

using namespace std;

void displayProduct(Product& product)
{
    product.productModel += "2";
    cout << product.productModel << endl;
    cout << product.brand->GetName() << endl;
}

int main()
{
    Brands  smallSoft;
    smallSoft.SetName("Small Soft");

    Computer    myComputer(&smallSoft);

    myComputer.productPrice = 300.0;
    myComputer.isLaptop = true;
    myComputer.productModel = "Gamer";

    displayProduct(myComputer);

    return 0;
}
