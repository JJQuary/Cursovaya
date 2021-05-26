

#ifndef CURSOVAYA2_TOVAR_H
#define CURSOVAYA2_TOVAR_H


#include <string>

class Tovar
{
public:
    /** Default constructor */
    Tovar();
    /** Constructor with parameters*/
    Tovar(const std::string& title, const int weight, int produce_date);
    /** Default destructor */
    virtual ~Tovar(){}

    std::string GetTitle() const { return m_Title; }

    void SetTitle(const std::string& val) { m_Title = val; }

    int GetWeight() const { return m_Weight; }

    void SetWeight(int val) { m_Weight = val; }

    int GetProductionDate() const { return m_ProduceDate; }

    void SetProductionDate(int val);

    virtual std::string Info() const;

private:
    std::string m_Title;
    int m_Weight;
    int m_ProduceDate;
};



#endif //CURSOVAYA2_TOVAR_H
