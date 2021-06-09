

#include "Tovar.h"
#include <stdexcept>

using namespace std;

Tovar::Tovar() : m_Title("None"), m_Weight(0), m_ProduceDate (0), m_price(0)
{
    //ctor
}

Tovar::Tovar(const std::string& title, int weight, int produce_date, int price)
        : m_Title(title), m_Weight(weight), m_ProduceDate (produce_date), m_price(price)
{
    if (produce_date <= 0)
    {
        throw invalid_argument("Wrong date");
    }
}

void Tovar::SetProductionDate(int val)
{
    if (val <= 0)
    {
        throw invalid_argument("Wrong date");
    }
    m_ProduceDate = val;
}

std::string Tovar::Info() const
{
    return "Tovar: "+ GetTitle() +";"
    + " Weight: " + to_string(GetWeight()) +";" +
    " Produced " + to_string(GetProductionDate()) +";"+
    " Price " + to_string(GetPrice()) +";";
}
