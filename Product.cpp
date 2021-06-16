
#include "Product.h"
#include <string>

using namespace std;
Product::Product()
{}

Product::Product(const std::string& title, int weight, const std::string& produced,
                 const std::string& expires, int price)
    : Tovar(title, weight, produced, price), expires (expires)
{}

std::string Product::Info() const
{
    return Tovar::Info() + " Expires: " + GetExpirationDate() + ";";
}
