
#include "Shelf.h"
#include <string.h>
#include <iostream>
#include <stdexcept>
#include <algorithm>

using namespace std;



int DateToInt(const std::string& date)
{
    int d, m, y;
    sscanf(date.c_str(), "%d.%d.%d", &d, &m, &y);
    int IntDate = y*10000+m*100+d;
    return IntDate;
}

bool compare_by_title_ptr(const Product* p1, const Product* p2)
{
    return p1->Type() > p2->Type() || (p1->Type() == p2->Type() && p1->GetTitle() > p2->GetTitle());
}

Shelf::Shelf(){}

void Shelf::Sort()
{
    sort(m_Products.begin(), m_Products.end(), compare_by_title_ptr);
}

void Shelf::VectorPrint() {
    for (auto item : m_Products){
        cout <<     item->Info();
        cout << endl;
    }
}

void Shelf::AddTovar(const Product* item, int quantity)
{
    while (quantity > 0)
    {
        if (m_Products.size() >= GetCapacity())
        {
            throw length_error("No place for item!");
        }
        m_Products.push_back(item);
    quantity--;
    }

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

void Shelf::DeleteExpiredProducts(const string& date){
    int date_today=DateToInt(date);
    for (auto item_it = m_Products.begin(); item_it != m_Products.end();)
    {
        const Product *item = *item_it;
        int date_product = DateToInt(item->GetExpirationDate());
        if (date_today > date_product)
        {
            delete item;
            item_it=m_Products.erase(item_it);
        } else {
            ++item_it;
        }
    }
}