#include <iostream>
#include <vector>

#include "Tovar.h"
#include "Shelf.h"
#include "Product.h"

using namespace std;
//using std::cout;
//using std::endl;

int main()
{
    Tovar b("Fairy tale", 0, 100);
    Tovar b2("Snowwhite", 0, 100);
    Product e("Mathpedia", 12, 200, 12);
    Shelf sh;
    sh.AddTovar(b);
    sh.AddTovar(b2);
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
