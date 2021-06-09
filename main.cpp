#include <iostream>
#include <vector>


#include "Tovar.h"
#include "Shelf.h"
#include "Product.h"
#include "Joghurt.h"
#include "MIlk.h"

using namespace std;

int main()
{

    Joghurt e("Joghurt Burya", 12, 200, 12, 32, "Peach", 123);
    Milk f("Milk Burenka", 412, 255, 4521, 41, "Carton", 342);
    Shelf sh;
    sh.SetCapacity(354);
    sh.AddTovar(e, 32);
    sh.AddTovar(f, 12);
    sh.GetTotalMoney();

    string title;
    int n;
//    cout << "Enter amount";
//    cin >> n;
//    while (n > 0) {
        cout << "Enter name of tovar:" << endl;
        getline(cin, title);
        auto tovar = sh.TakeTovar(title);
        if (tovar == nullptr) {
            cout << "Tovar not found!" << endl;
        } else {
            cout << tovar->Info() << endl;
        }
//        n--;
//    }

    cout << sh.GetTotalMoney();
    return 0;
}
