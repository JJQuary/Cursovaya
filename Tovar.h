

#ifndef CURSOVAYA2_TOVAR_H
#define CURSOVAYA2_TOVAR_H


#include <string>

class Tovar
{
public:

    Tovar();

    Tovar(const std::string& title, int weight, char produce_date, int price);

    virtual ~Tovar(){}

    std::string GetTitle() const { return m_Title; }

    void SetTitle(const std::string& val) { m_Title = val; }

    int GetWeight() const { return m_Weight; }

    void SetWeight(int val) { m_Weight = val; }

    char GetProductionDate() const { return m_ProduceDate; }

    void SetProductionDate(const char val);

    int GetPrice() const { return m_price; }

    void SetPrice(int val) { m_price = val; }

    virtual std::string Info() const;

private:
    std::string m_Title;
    int m_Weight;
    char m_ProduceDate;
    int m_price;
};



#endif //CURSOVAYA2_TOVAR_H
