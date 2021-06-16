

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
            const std::string& produced,
            const std::string& expires,
            int price);

    virtual std::string Type() const = 0;

    std::string Info() const override;

    const std::string& GetExpirationDate() const {return expires;}

private:
    std::string expires;
};


#endif //CURSOVAYA2_PRODUCT_H
