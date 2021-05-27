#include <iostream>
#include <vector>

#include "Tovar.h"
#include "Shelf.h"
#include "Product.h"
#include "Joghurt.h"

using namespace std;

int main()
{

    Joghurt e("Burya", 12, 200, 12, 32, "Peach");
    Shelf sh;
    sh.AddTovar(e);

    string title;
    cout <<"Enter name of tovar:" <<endl;
    getline(cin, title);

    auto tovar = sh.TakeTovar(title);

    if (tovar == nullptr)
    {
        cout <<"Tovar not found!" <<endl;
    }
    else
    {
        cout << tovar->Info() << endl;
    }


    return 0;
}
