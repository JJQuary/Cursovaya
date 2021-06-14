
#include "MIlk.h"

using namespace std;
Milk::Milk() : fat (0), PackageType("Carton")
{}

Milk::Milk(const string &title,
           int weight,
           char produced,
           char* expiration,
           int fat,
           std::string PackageType,
           int price)
        : Product(title, weight, produced, expiration, price), fat(fat), PackageType(PackageType)
{

}

std::string Milk::Info() const
{
    return Product::Info() + " Fat: " + to_string(GetFat()) + ";" + " Package Type : " + PackageType + " ";
}