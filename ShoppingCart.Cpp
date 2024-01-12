#include "ShoppingCart.h"
#include "Product.h"

void ShoppingCart::addProduct(const std::shared_ptr<Product>& product) {
    products.push_back(product);
}

double ShoppingCart::calculateTotal() const {
    double total = 0.0;
    for (const auto& product : products) {
        total += product->getPrice();
    }
    return total;
}
