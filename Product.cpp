
#include "Product.h"
#include <string>

using namespace std;
Product::Product() : expires (0)
{}

Product::Product(const std::string& title, int weight, int produced, int expires, int price)
    : Tovar(title, weight, produced, price), expires (expires)
{}

std::string Product::Info() const
{
    return Tovar::Info() + " Expires: " + to_string(GetExpirationDate()) + ";";
}