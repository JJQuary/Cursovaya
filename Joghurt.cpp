
#include "Joghurt.h"

using namespace std;
Joghurt::Joghurt() : fat (0), insides("Peach")
{}

Joghurt::Joghurt(const string &title,
                 int weight,
                 std::string produced,
                 std::string expiration,
                 int fat,
                 std::string insides,
                 int price)
        : Product(title, weight, produced, expiration, price), fat(fat), insides(insides)
{

}

std::string Joghurt::Info() const
{
    return Product::Info() + " Fat: " + to_string(GetFat()) + ";" + " Insides " + GetInsides() + " ";
}


