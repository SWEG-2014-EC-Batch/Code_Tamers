package project.user;

import project.storepackage.Cart;
import project.storepackage.Product;

public class Customer extends User{
    private Cart cart;

    public Customer(String usrname, String passwd) {
        super(usrname,passwd);
        cart = new Cart();
    }

    //navigate through the list of product in the inventory
    public void viewProduct(Product product) {
        // View product logic
    }

    public void addToCart(Product product) {
        cart.addProduct(product);
    }

    public void removeFromCart(Product product) {
        cart.removeProduct(product);
    }

    public void checkout() {
        cart.checkout();
    }
}
