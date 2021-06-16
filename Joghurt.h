

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
            std::string produced,
            std::string expiration,
            int fat,
            std::string insides,
            int price);

    int GetFat() const { return fat; }

    std::string GetInsides() const {return insides; };

    std::string Info() const override;

    std::string Type() const override {
        return "Joghurt";
    }

private:
    int fat;
    std::string insides;
};




#endif CURSOVAYA2_JOGHURT_H
