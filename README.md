# online-shop
## Description
This project is a console-based C++ application simulating an online shopping cart system. Users can browse available products, add items to their cart, remove items, view cart details, and proceed to checkout.
### File Structure :
.  product.h: Defines the Product class, including attributes like name, price, and stock.<br>
.  item.h: Contains the Item class, representing a product and its quantity in the cart.<br>
.  shop.h: Implements the Shop class to manage cart operations, including adding, removing, and updating items.
### Features :
->Product Management: Display a list of available products (name, price, stock).<br>
-> Cart Operations: Add products to the cart with specified quantities, remove products, and update item quantities.<br>
-> Checkout Process: Calculate the total cost of items in the cart and display a summary.<br>
-> Interactive Menu: Navigate through the application with a simple text-based menu.<br>
### Tech Stack:
. C++ Standard Library: Utilizes vector and algorithm for efficient data management and processing.<br>
. Object-Oriented Design: Implements Product, Item, and Shop classes for modular and reusable code<br>
. File Separation: making the project organized and easier to extend<br>
### menu interface
┌───────────────────────────────────────────┐
│ Welcome to the Online Shopping Cart!      │
├───────────────────────────────────────────┤
│ 1. View Available P                       │
│ 2. Add Product to Cart                    │
│ 3. Remove Product from Cart                │
│ 4. View Cart                               │
│ 5. Checkout                                │
│ 0. Exit                                    │
├───────────────────────────────────────────┤
│ Enter your choice:                        │
└───────────────────────────────────────────┘


