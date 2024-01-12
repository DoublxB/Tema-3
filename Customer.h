#pragma once

#include <string>
#include <memory>
#include "ShoppingCart.h"

class Customer {
public:
   
    Customer(const std::string& name);

    void addToCart(const std::shared_ptr<Product>& product);
    void checkout() const;

private:
    std::string name;
    std::shared_ptr<ShoppingCart> cart;
};
