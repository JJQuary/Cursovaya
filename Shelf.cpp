
#include "Shelf.h"


#include <stdexcept>

using namespace std;

Shelf::Shelf()
{}


void Shelf::AddTovar(const Tovar* item, int quantity) {
    while (quantity > 0) {
        if (m_Tovars.size() >= GetCapacity()) {
            throw length_error("No place for item!");
        }
        m_Tovars.push_back(item);
    quantity--;
    }

}
void Shelf::AddTovar(const Tovar& item, int quantity)
{
    AddTovar(&item, quantity);
}


const Tovar* Shelf::TakeTovar(int number)
{
    if (number < 0 || number >= m_Tovars.size())
    {
        return nullptr;
    }
    const Tovar * item = m_Tovars[number];
    m_Tovars.erase(m_Tovars.begin() + number);
    return item;
}

const Tovar* Shelf::TakeTovar(const std::string& title)
{
    for (auto item_it = m_Tovars.begin(); item_it != m_Tovars.end(); ++item_it)
    {
        const Tovar * item = *item_it;
        if (item->GetTitle() == title)
        {
            m_Tovars.erase(item_it);
            SumPrice(item->GetPrice());
            return item;
        }
    }
    return nullptr;
}