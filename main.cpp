#include "Product.h"
#include "ShoppingCart.h"
#include "Customer.h"
#include <iostream>
#include <memory>

int main() {
    // Creare produse
    auto product1 = std::make_shared<Product>("Laptop", 1200.0);
    auto product2 = std::make_shared<Product>("Headphones", 150.0);
    auto product3 = std::make_shared<Product>("Mouse", 30.0);

    // Creare coșuri de cumpărături
    ShoppingCart cart1;
    cart1.addProduct(product1);
    cart1.addProduct(product2);

    ShoppingCart cart2;
    cart2.addProduct(product2);
    cart2.addProduct(product3);

    // Creare clienți
    Customer customer1("Alice");
    Customer customer2("Bob");

    // Adăugare produse în coșurile clienților
    customer1.addToCart(product1);
    customer1.addToCart(product3);

    customer2.addToCart(product2);

    // Checkout clienți
    customer1.checkout();
    customer2.checkout();

    return 0;
}
