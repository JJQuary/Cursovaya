

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

    const std::vector<const Tovar*>& GetBooks() const { return m_Tovars; }

    void AddTovar(const Tovar* book);
    void AddTovar(const Tovar& book);

    void SortBooks();

    const Tovar* TakeTovar(int number);
    const Tovar* TakeTovar(const std::string& title);

protected:

private:
    int m_Capacity;
    std::vector<const Tovar*> m_Tovars;
};



#endif //CURSOVAYA2_SHELF_H
