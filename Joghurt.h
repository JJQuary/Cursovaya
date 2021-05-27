

#ifndef CURSOVAYA2_JOGHURT_H
#define CURSOVAYA2_JOGHURT_H

#include <string>
#include "Tovar.h"
#include "Product.h"


class Joghurt : public Product
{
public:
    Joghurt();

    Joghurt(const std::string& title,
            int weight,
            int produced,
            int expiration,
            int fat,
            std::string insides);

    int GetFat() const { return fat; }

    void SetFat(int val) { fat = val; }

    std::string GetInsides() const {return insides; };

    void SetInsides(std::string val){ insides = val; }

    std::string Info() const override;

private:
    int fat;
    std::string insides;
};




#endif CURSOVAYA2_JOGHURT_H
