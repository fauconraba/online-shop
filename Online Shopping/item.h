#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include "product.h"

using namespace std;

class item{
private:
  product produit;
  int quantity;
public:
//bonne pratique est d'utiliser une liste d'initialisation 
  item(product produit, int quantity) :produit(produit),quantity(quantity){}
  product getProduct(){
    return produit;
  }
  int getQuantity(){
    return quantity;
  }
  void setQuantity(int quantity){
    this->quantity=quantity;
  }
  void displayItem(){
    cout<<"***************cart item***************"<<endl;
     cout<<"product name : "<<produit.getName()<<endl;
     cout<<"quantity : "<<quantity<<endl;
     cout<<"price by unity : "<<produit.getPrice()<<" DH"<<endl;
     cout<<"Total price : "<<quantity*produit.getPrice()<<" DH"<<endl;
     cout<<"***************************************"<<endl;
  }
};

#endif