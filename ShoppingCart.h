#pragma once

#include <memory>
#include <vector>
#include "Product.h"  

class ShoppingCart {
public:
    void addProduct(const std::shared_ptr<Product>& product);
    double calculateTotal() const;

private:
    std::vector<std::shared_ptr<Product>> products;
};
