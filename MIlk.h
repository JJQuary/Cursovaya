
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
            int produced,
            int expiration,
            int fat,
            std::string PackageType);

    int GetFat() const { return fat; }

    void SetFat(int val) { fat = val; }

    std::string GetPackageType() const {return PackageType; };

    void SetPackageType(std::string val){ PackageType = val; }

    std::string Info() const override;

private:
    int fat;
    std::string PackageType;
};


#endif //CURSOVAYA2_MILK_H