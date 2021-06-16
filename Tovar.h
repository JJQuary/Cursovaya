

#ifndef CURSOVAYA2_TOVAR_H
#define CURSOVAYA2_TOVAR_H


#include <string>

class Tovar
{
public:

    Tovar();

    Tovar(const std::string& title, int weight, std::string produce_date, int price);

    virtual ~Tovar(){}

    std::string GetTitle() const { return m_Title; }

    int GetWeight() const { return m_Weight; }

    std::string GetProductionDate() const { return m_ProduceDate; }

    int GetPrice() const { return m_price; }

    virtual std::string Info() const;

private:
    std::string m_Title;
    int m_Weight;
    std::string m_ProduceDate;
    int m_price;

};

#endif //CURSOVAYA2_TOVAR_H
