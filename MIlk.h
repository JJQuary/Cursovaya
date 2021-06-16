
#ifndef CURSOVAYA2_MILK_H
#define CURSOVAYA2_MILK_H


#include <string>
#include "Tovar.h"
#include "Product.h"


class Milk : public Product
{
public:
    Milk();

    Milk(const std::string& title,
            int weight,
            std::string produced,
            std::string expiration,
            int fat,
            std::string PackageType,
            int price);

    int GetFat() const { return fat; }

    std::string GetPackageType() const {return PackageType; };

    std::string Type() const override {
        return "Milk";
    }

    std::string Info() const override;

private:
    int fat;
    std::string PackageType;
};


#endif CURSOVAYA2_MILK_H
