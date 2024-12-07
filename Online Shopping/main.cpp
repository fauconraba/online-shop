#include <iostream>
#include<vector>
#include <string>
#include "item.h"
#include "product.h"
#include "shop.h"

using namespace std;

int main()
{
 vector <product> products = {
  product("phone",500, 26),
  product("laptop",900,11),
  product("playstation",800,23),
  product("tablette",899.2,11)
 };

 shop cart;
 int i;
 int choice;
 int productindex;
 int quantity;
 string productName;
 bool buy=false;

 do
 {
  cout<<"  Welcome to the Online Shopping cart!"<<endl;
  cout<<"1. View Available Products"<<endl;
  cout<<"2. Add Product to cart"<<endl;
  cout<<"3. Remove Product from Cart"<<endl;
  cout<<"4. View cart"<<endl;
  cout<<"5. Checkout"<<endl;
  cout<<"0. Exit"<<endl;
  cout<<"Enter your choice:";
   cin>>choice;
    switch (choice)
    {
     case 1 :
        cout<< " \n products available : \n";
      for( i=0; i<products.size();i++)
      {
         cout<<i+1 <<". ";
         products[i].display();
      }break;
   
     case 2:
      cout<<"\n __________________________________ \n";
      cout<<"enter the proDuct number";
        cin>>productindex;
      cout<<"add the quantity :";
        cin>>quantity;
      if( productindex > 0 && productindex <= products.size() )
      {
       if(quantity<products[productindex].getStock() && quantity >0 )
       { // quantity disponible
          cart.addItem(products[productindex-1],quantity);
          cout << "Added to cart!" << endl;
       }
       else
       { //quantity indisponible
          cout<<"quantity invalid ! try again"<<endl;
       }
      }
      else
      {
        cout<<"product number invalid , try again !" <<endl;
      }
      break;
   
     case 3:
       cout<<"product name : " ;
        cin>>productName;
       cart.removeItem(productName);
      break;
   
     case 4 :
       cart.displayItems();
      break;
   
     case 5:
        cout<<"Total cost : ";
        cout<<quantity*products[productindex].getPrice(); // total price = quantity * price 
        cout<<" DH";
      buy=true; //check if just a visite or buy something
      choice = 0; //exit
      break;
   
     case 0 :
       if(buy)
       {
          cout<<"Thank you for shopping with us, Goodbye!"<<endl;
       }
       else
       {
          cout << "thank you for ur viste ,Goodbye!"<<endl;
       }
      break;
     default :
      cout << "Invalid choice. Please try again!" << endl;
      break;
    }
  }while(choice != 0);


  return 0;

}
