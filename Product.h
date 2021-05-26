

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
            int produced,
            int expires);

    int GetExpirationDate() const { return expires; }

    void SetExpirationDate(int val) { expires = val; }

    std::string Info() const override;

private:
    int expires;
};


#endif //CURSOVAYA2_PRODUCT_H
