#include <iostream>
#include <vector>
#include <string.h>

#include "Tovar.h"
#include "Shelf.h"
#include "Product.h"
#include "Joghurt.h"
#include "MIlk.h"

using namespace std;

int main()
{

    Joghurt e("Joghurt Burya", 12,
              '2012.09.13', '2012.09.13',
              32, "Peach", 123);
    Milk f("Milk", 412,
           '2012.09.13', '2012.09.13',
           41, "Carton", 342);
    Shelf sh;
    sh.SetCapacity(354);
    sh.AddTovar(e, 32);
    sh.AddTovar(f, 12);


    sh.TakeTovar(11);
    string title;
    char * date_today = "2021.06.14";
    cout << "Enter today date in format : YYYY.MM.DD " << endl;
    sh.Check_Date(date_today);
    cout << "Enter name of tovar:" << endl;
    getline(cin , title);
    auto tovar = sh.TakeTovar(title);
    if (tovar == nullptr) {
        cout << "Product not found!" << endl;
    } else {
        cout << tovar->Info() << endl;
    }
    cout << sh.GetTotalMoney();
    return 0;
}
