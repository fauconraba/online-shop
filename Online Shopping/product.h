#ifndef PRODUCT_H
#define PRODUCT_H

#include<iostream>
#include<vector>
#include <string>

using namespace std;

class product {
private:
  string name;
  double price;
  int stock;
public:
  product(string name, double price, int stock)
  {
    this->name=name;
    this->price=price;
    this->stock=stock;
  }
  string getName(){
    return name;
  }
  double getPrice(){
    return price;
  }
  int getStock() {
    return stock;
  }
  void reduceStock(int quantity)
  {
    stock -=quantity;
  }
  void display()
  {
    cout<<"*******product details*******"<<endl;
    cout<<"name : "<<name<<endl;
    cout<<"price : "<<price<<" DH"<<endl;
    cout<<"stock : "<<stock<<endl;
    // cout<<"******************************"<<endl;
  }
};



#endif
