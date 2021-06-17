#include <iostream>
#include <vector>
#include <string.h>
#include "Tovar.h"
#include "Shelf.h"
#include "Product.h"
#include "Joghurt.h"
#include "MIlk.h"

using namespace std;





int main() {

    string Title, insides, package;
    int weight, fat, price, amount;
    string produced, date_today;
    string expiration;
    char selection;
    Shelf sh;
    Joghurt *j;
    Milk *m;

    do {
        cout << "  Welcome to the hypermarket\n";
        cout << "  ====================================\n";
        cout << "  1.  Add Joghurt on the shelf\n";
        cout << "  2.  Add Milk on the shelf\n";
        cout << "  3.  Sell Product\n";
        cout << "  4.  Check Expired products\n";
        cout << "  5.  Sort tovars\n";
        cout << "  6.  Get total earned money\n";
        cout << "  7.  Print Shelf\n";
        cout << "\n";
        cout << "  8.  Exit\n";
        cout << "  ====================================\n";
        cout << "  Enter your selection: ";
        cin >> selection;
        cout << endl;

        switch (selection) {
            case '1':
                cout << "  You have selected Add Joghurt on the shelf\n";
                cout << "Enter title\n";
                cin >> Title;
                cout << "Enter weight\n";
                cin >> weight;
                cout << "Enter fat\n";
                cin >> fat;
                cout << "Enter Production Date\n";
                cin >> produced;
                cout << "Enter Expiration Date\n";
                cin >> expiration;
                cout << "Enter price\n";
                cin >> price;
                cout << "Enter insides";
                cin >> insides;
                cout << "Enter amount of product\n";
                cin >> amount;
                j = new Joghurt(Title, weight, produced, expiration, fat, insides, price);
                sh.AddTovar(j, amount);

                cout << "\n";
                break;
            case '2':
                cout << "  You have selected Add Milk on the shelf\n";
                cout << "Enter title\n";
                cin >> Title;
                cout << "Enter weight\n";
                cin >> weight;
                cout << "Enter fat\n";
                cin >> fat;
                cout << "Enter Production Date\n";
                cin >> produced;
                cout << "Enter Expiration Date\n";
                cin >> expiration;
                cout << "Enter price\n";
                cin >> price;
                cout << "Enter package type";
                cin >> package;
                cout << "Enter amount of product\n";
                cin >> amount;
                m = new Milk(Title, weight, produced, expiration, fat, package, price);
                sh.AddTovar(m, amount);
                cout << "\n";
                break;
            case '3':
                cout << "  You have selected Sell Product\n";
                cout << "Enter title\n";
                cin >> Title;
                sh.TakeTovar(Title);

                cout << "\n";
                break;

            case '4':
                cout << "  Check Expired products\n";
                cout << "Enter today day\n";
                cin >> date_today;
                sh.DeleteExpiredProducts(date_today);
                cout << "\n";
                break;

            case '5':
                cout << "  Sort tovars\n";
                sh.Sort();
                break;

            case '6':
                cout << sh.GetTotalMoney();
                break;
            case '7':
                sh.VectorPrint();
                break;
            default:
                cout << selection << "is not a valid menu item.\n";
                cout << endl;
        }

    } while (selection != 0);

    return 0;
}

