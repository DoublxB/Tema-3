#include "Customer.h"
#include <iostream>



Customer::Customer(const std::string& name) : name(name), cart(std::make_shared<ShoppingCart>()) {}

void Customer::addToCart(const std::shared_ptr<Product>& product) {
    cart->addProduct(product);
}

void Customer::checkout() const {
    std::cout << name << "'s shopping cart total: $" << cart->calculateTotal() << std::endl;
}
