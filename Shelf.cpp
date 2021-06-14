
#include "Shelf.h"
#include <string.h>

#include <stdexcept>

using namespace std;

Shelf::Shelf()
{}


void Shelf::AddTovar(const Product* item, int quantity) {
    while (quantity > 0) {
        if (m_Products.size() >= GetCapacity()) {
            throw length_error("No place for item!");
        }
        m_Products.push_back(item);
    quantity--;
    }

}
void Shelf::AddTovar(const Product& item, int quantity)
{
    AddTovar(&item, quantity);
}


const Product* Shelf::TakeTovar(int number)
{
    if (number < 0 || number >= m_Products.size())
    {
        return nullptr;
    }
    const Product * item = m_Products[number];
    m_Products.erase(m_Products.begin() + number);
    SumPrice(item->GetPrice());
    return item;
}

const Product* Shelf::TakeTovar(const std::string& title)
{
    for (auto item_it = m_Products.begin(); item_it != m_Products.end(); ++item_it)
    {
        const Product * item = *item_it;
        if (item->GetTitle() == title)
        {
            m_Products.erase(item_it);
            SumPrice(item->GetPrice());
            return item;
        }
    }
    return nullptr;
}
const Product* Shelf::Out_Date_Tovar(int number)
{
    if (number < 0 || number >= m_Products.size())
    {
        return nullptr;
    }
    const Product * item = m_Products[number];
    m_Products.erase(m_Products.begin() + number);
    return item;
}
const Product* Shelf::Check_Date(char *today_day){
    for (auto item_it = m_Products.begin(); item_it != m_Products.end(); ++item_it)
    {
        int counter=0;
        const Product *item = *item_it;
        int d1,m1,y1;
        int d2,m2,y2;
        sscanf(today_day, "%d.%d.%d", &d1, &m1, &y1);
        sscanf(item->GetExpirationDate(), "%d.%d.%d", &d2, &m2, &y2);
        int date1 = y1*10000+m1*100+d1;
        int date2 = y2*10000+m2*100+d2;
        if (date1 >= date2){
            counter++;
            continue;
        } else{
            Out_Date_Tovar(counter);
            }

        }

    }