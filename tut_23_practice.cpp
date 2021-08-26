#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayprice(void);
};

void Shop::setPrice(void)
{
    cin >> itemId[counter];
    cin >> itemPrice[counter];
    counter++;
}
void Shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << itemId[i] << endl;
        cout << itemPrice[i] << endl;
    }
}

int main()
{
    Shop Dukan;
    Dukan.setPrice();
    Dukan.setPrice();
    Dukan.setPrice();
    Dukan.setPrice();
    Dukan.displayprice();


    return 0;
}