#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include "ItemToPurchase.h"
#include <string>
#include <vector>
using namespace std;

class ShoppingCart {
   public:
      ShoppingCart();
      ShoppingCart(string name, string date);

      string GetCustomerName();
      string GetDate();

      void AddItem(ItemToPurchase item);
      void RemoveItem(string ItemToPurchase);
      void ModifyItem(ItemToPurchase item);

      int GetNumItemsInCart();
      int GetCostOfCart();

      void PrintTotal();
      void PrintDescriptions();
   private:
      string customerName;
      string currentDate;
      vector <ItemToPurchase> cartItems;
};

#endif
