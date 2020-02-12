/**
 * Inventory.h
 * Summary:
 * A small class that allows us to track the name of a specified item
 * in stock, the price per unit of that item, and the amount of units in stock
 * of that item.
 * 
 * @member m_name: name of the item in this inventory
 * @member m_price: price per unit of this inventory
 * @member m_in_stock: stock count of the number of units in this inventory
 */

#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif