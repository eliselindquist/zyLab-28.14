#include <iostream>
#include <string>
#include "ItemToPurchase.h"

using namespace std;


void ItemToPurchase::SetDescription(string desc) {
   itemDescription = desc;
}

string ItemToPurchase::GetDescription() const {
   return itemDescription;
}

void ItemToPurchase::PrintItemCost() {
   cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemPrice * itemQuantity) << endl;
}

void ItemToPurchase::PrintItemDescription() {
   cout << itemName << ": " << itemDescription << endl;
}

void ItemToPurchase::SetName(string name) {
      itemName = name; 
}

string ItemToPurchase::GetName() const {
   return itemName;
}

void ItemToPurchase::SetPrice(int price) {
      itemPrice = price;
}
   
int ItemToPurchase::GetPrice() const {
   return itemPrice;
}

void ItemToPurchase::SetQuantity(int quant) {
   itemQuantity = quant;
}

int ItemToPurchase::GetQuantity() const {
   return itemQuantity;
}

ItemToPurchase::ItemToPurchase(string name, string desc, int price, int quant) {
   this->itemName = name;
   this->itemDescription = desc;
   this->itemPrice = price;
   this->itemQuantity = quant;
}

ItemToPurchase::ItemToPurchase() {
   this->itemName = "none";
   this->itemDescription = "none";
   this->itemPrice = 0;
   this->itemQuantity = 0;
}
   
