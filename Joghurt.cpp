
#include "Joghurt.h"
#include <string>

using namespace std;
Joghurt::Joghurt() : fat (0), insides("Peach")
{}

Joghurt::Joghurt(const string &title, int weight, int produced, int expiration, int fat, std::string insides)
        : Product(title, weight, produced, expiration), fat(fat), insides(insides)
{

}

std::string Joghurt::Info() const
{
    return Product::Info() + " Fat: " + to_string(GetFat()) + ";" + " Insides " + insides + " ";
}


