
#include "Product.h"
#include <string>

using namespace std;
Product::Product()
{}

Product::Product(const std::string& title, int weight, char produced, char* expires, int price)
    : Tovar(title, weight, produced, price), expires (expires)
{}

std::string Product::Info() const
{
    return Product::Info() + " Expires: " + GetExpirationDate() + ";";
}