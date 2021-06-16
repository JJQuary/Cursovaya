

#include "Tovar.h"

using namespace std;

Tovar::Tovar() : m_Title("None"), m_Weight(0), m_ProduceDate (), m_price(0)
{
}

Tovar::Tovar(const std::string& title, int weight, std::string produce_date, int price)
        : m_Title(title), m_Weight(weight), m_ProduceDate (produce_date), m_price(price)
{
}

std::string Tovar::Info() const
{
    return "Product: "+ GetTitle() +";"
    + " Weight: " + to_string(GetWeight()) +";" +
    " Produced " + GetProductionDate() +";"+
    " Price " + to_string(GetPrice()) +";";
}
