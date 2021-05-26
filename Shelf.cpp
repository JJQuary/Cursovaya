
#include "Shelf.h"


#include <stdexcept>

using namespace std;

Shelf::Shelf()
{
    //ctor
}


void Shelf::AddTovar(const Tovar* book)
{
    if (m_Tovars.size() >= GetCapacity())
    {
        throw length_error("No place for book!");
    }
    m_Tovars.push_back(book);
}
void Shelf::AddTovar(const Tovar& book)
{
    AddTovar(&book);
}


const Tovar* Shelf::TakeTovar(int number)
{
    if (number < 0 || number >= m_Tovars.size())
    {
        return nullptr;
    }
    const Tovar * book = m_Tovars[number];
    m_Tovars.erase(m_Tovars.begin() + number);
    return book;
}

const Tovar* Shelf::TakeTovar(const std::string& title)
{
    for (auto book_it = m_Tovars.begin(); book_it != m_Tovars.end(); ++book_it)
    {
        const Tovar * book = *book_it;
        if (book->GetTitle() == title)
        {
            m_Tovars.erase(book_it);
            return book;
        }
    }
    return nullptr;
}