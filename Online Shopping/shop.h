#ifndef SHOP_H
#define SHOP_H

#include <vector>
#include <string>
#include <algorithm> // for function find_if 
#include "item.h"
// #include "product.h"


using namespace std;

class shop{
private:
  vector <item> items;
public:
  void addItem(product produit, int quantity)
  {
    //cree un obj item et lajoute au vector items
    items.push_back(item(produit,quantity));
  }

  void removeItem(string productName)
  {
   //find the item with the matching prdt name
   auto nom= find_if(items.begin(),items.end(),[productName](item itm){
    return itm.getProduct().getName() == productName;
   });
   if( nom != items.end() )
   {
    items.erase(nom);//supprimer
    cout<<"item removed successefuly : "<<productName<<endl;
   }
   else{
     cout<<"iem not found : "<<productName<<endl;
   }
  }
  void updateItemQuantity(string productName, int Quantity)
  {
    auto nom= find_if(items.begin(),items.end(),[productName](item itm){
    return itm.getProduct().getName() == productName;
   });
   if( nom != items.end() )
   {
    //nom is an iterator pointing to the matching item in the vector
    nom->setQuantity(Quantity);
    cout<<"Item quantity updated successfully!"<<endl;
   }
   else{
     cout<<"Item quantity updated successfully!"<<endl;
   }
  }
  void displayItems(){
    if (items.empty())
    {
      cout<<"no items in !"<<endl;
      return;
    }
  for(auto itm:items){
      itm.displayItem();
  }
  }
};

#endif