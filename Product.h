

#ifndef CURSOVAYA2_PRODUCT_H
#define CURSOVAYA2_PRODUCT_H


#include <string>
#include "Tovar.h"


class Product : public Tovar
{
public:
    Product();

    Product(const std::string& title,
            int weight,
            char produced,
            char* expires,
            int price);

    const char *const GetExpirationDate() const { return expires; }

    std::string Info() const override;

private:
    const char *expires;
};


#endif //CURSOVAYA2_PRODUCT_H
