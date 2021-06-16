

#ifndef CURSOVAYA2_SHELF_H
#define CURSOVAYA2_SHELF_H


#include <vector>
#include "Tovar.h"
#include "Product.h"
class Shelf
{
public:
    Shelf();
    void VectorPrint(std::vector<const Product*> m_Products);

    std::vector<const Product*> GetVector(){return m_Products;}

    int GetCapacity() { return m_Capacity; }

    void SetCapacity(int val) { m_Capacity = val; }

    int GetTotalMoney() { return total_money; }

    void SumPrice(int val) { total_money += val; }

    const std::vector<const Product*>& GetItem() const { return m_Products; }

    void Sort();

    void AddTovar(const Product* item, int quantity);

    const Product* TakeTovar(int number);

    const Product* TakeTovar(const std::string& title);

    void DeleteExpiredProducts(const std::string& date);

protected:
    std::vector<const Product*> m_Products;
private:
    int m_Capacity;
    int total_money = 0;

};

int DateToInt(const std::string& date);
void VectorPrint(std::vector<const Product*> m_Products);

#endif //CURSOVAYA2_SHELF_H
