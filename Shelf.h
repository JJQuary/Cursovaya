

#ifndef CURSOVAYA2_SHELF_H
#define CURSOVAYA2_SHELF_H


#include <vector>
#include "Tovar.h"

class Shelf
{
public:
    Shelf();

    int GetCapacity() { return m_Capacity; }

    void SetCapacity(int val) { m_Capacity = val; }
    int GetTotalMoney() { return total_money; }
    void SumPrice(int val) { total_money += val; }
    const std::vector<const Tovar*>& GetItem() const { return m_Tovars; }

    void AddTovar(const Tovar* item, int quantity);
    void AddTovar(const Tovar& item, int quantity);

    void SortBooks();

    const Tovar* TakeTovar(int number);
    const Tovar* TakeTovar(const std::string& title);

protected:

private:
    int m_Capacity;
    int total_money = 0;
    std::vector<const Tovar*> m_Tovars;
};



#endif //CURSOVAYA2_SHELF_H
