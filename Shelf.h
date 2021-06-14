

#ifndef CURSOVAYA2_SHELF_H
#define CURSOVAYA2_SHELF_H


#include <vector>
#include "Tovar.h"
#include "Product.h"
class Shelf
{
public:
    Shelf();

    int GetCapacity() { return m_Capacity; }

    void SetCapacity(int val) { m_Capacity = val; }
    int GetTotalMoney() { return total_money; }
    void SumPrice(int val) { total_money += val; }
    const std::vector<const Product*>& GetItem() const { return m_Products; }

    void AddTovar(const Product* item, int quantity);
    void AddTovar(const Product& item, int quantity);

    void SortBooks();

    const Product* TakeTovar(int number);
    const Product* TakeTovar(const std::string& title);
    const Product* Out_Date_Tovar(int number);
    const Product* Check_Date(char* today_date);

protected:

private:
    int m_Capacity;
    int total_money = 0;
    std::vector<const Product*> m_Products;
};



#endif //CURSOVAYA2_SHELF_H
