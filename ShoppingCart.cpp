#include <string>
#include <vector>
#include <iostream>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

ShoppingCart::ShoppingCart() {
   customerName = "none";
   currentDate = "January 1, 2016";
}
         
ShoppingCart::ShoppingCart(string name, string date) {
   customerName = name;
   currentDate = date;
}

string ShoppingCart::GetCustomerName() {
   return customerName;
}

string ShoppingCart::GetDate() {
   return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item) {
   cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string item) {
   bool found = false;
    for (auto it = cartItems.begin(); it != cartItems.end(); ++it) {
        if (it->GetName() == item) {
            cartItems.erase(it);
            found = true;
            break;
        }
    }

   if (!found) {
      cout << "Item not found in cart. Nothing removed." << endl;
   }
}

void ShoppingCart::ModifyItem(ItemToPurchase item) {
   bool found = false;
    for (auto& it : cartItems) {
        if (it.GetName() == item.GetName()) {
            found = true;
            if (item.GetDescription() != "none") {
                it.SetDescription(item.GetDescription());
            }
            if (item.GetPrice() != 0) {
                it.SetPrice(item.GetPrice());
            }
            if (item.GetQuantity() != 0) {
                it.SetQuantity(item.GetQuantity());
            }
            break;
        }
    }
   if (!found) {
      cout << "Item not found in cart. Nothing modified." << endl;
   }
}
         
int ShoppingCart::GetNumItemsInCart() {
   int itemCount = 0;
   for (auto& item : cartItems) {
      itemCount += item.GetQuantity();
   }
   return itemCount;
}

int ShoppingCart::GetCostOfCart() {
   int totalCost = 0;
    for (auto& item : cartItems) {
        totalCost += item.GetQuantity() * item.GetPrice();
    }
    return totalCost;
}

void ShoppingCart::PrintTotal() {
   if (cartItems.empty()) {
      cout << "SHOPPING CART IS EMPTY" << endl;
   } else {
      cout << customerName << "'s Shopping Cart - " << currentDate << endl;
      cout << "Number of Items: " << GetNumItemsInCart() << endl;
      cout << endl;
      
      for (auto& item : cartItems) {
            item.PrintItemCost();
        }
      cout << endl;
      cout << "Total: $" << GetCostOfCart() << endl;
   }
}

void ShoppingCart::PrintDescriptions() {
   if (cartItems.empty()) {
        cout << "SHOPPING CART IS EMPTY" << endl;
    } else {
        cout << customerName << "'s Shopping Cart - " << currentDate << endl;
        cout << endl;
        cout << "Item Descriptions" << endl;
        for (auto& item : cartItems) {
            item.PrintItemDescription();
        }
    }
}
