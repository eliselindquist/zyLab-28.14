#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
   public:
      void SetDescription(string desc); 
      string GetDescription(); 
      void SetName(string name); 
      string GetName();
      void SetPrice(int price);
      int GetPrice();
      void SetQuantity(int quant);
      int GetQuantity();
      void PrintItemCost();
      void PrintItemDescription();
      ItemToPurchase(string name, string desc, int price, int quant);
      ItemToPurchase();
   private:
      string itemDescription;
      string itemName;
      int itemPrice;
      int itemQuantity;
};

#endif
