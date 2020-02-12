#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

/**
 * Inventory::constructor
 * @param name: name of the item that this inventory tracks
 * @param price: price per unit item of this inventory
 * @param count: number of units in this inventory
 */
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/**
 * Inventory::sell
 * Sells an item from this inventory if units are in stock.
 * Else, prints an error.
 */
void Inventory::sell()
{
  if (m_in_stock <= 0){
    std::cout << "Sorry, that item is out of stock" << std::endl;  
    return;
  }
  else { m_in_stock--; }
}

/**
 * Inventory::operator<<
 * Prints out the price of a unit.
 */
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}