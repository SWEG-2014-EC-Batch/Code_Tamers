package project.user;

import project.storepackage.Cart;
import project.storepackage.Product;
import project.storepackage.Inventory;

public class Customer extends User{
    private Cart cart;
    private String usrname;
    private String passwd;

    public Customer(String usrname, String passwd) {
        super(usrname,passwd);
        cart = new Cart();
    }

    public String getName() {
        return usrname;
    }

    public String getPasswd() {
        return passwd;
    }

    public void setName(String name) {
        usrname=name;
    }

    
    //navigate through the list of product in the inventory
    public void viewProducts(Inventory i) {
        // View product logic
        /*
        Inventory view = new Inventory();
            private List<Product> items = view.getProducts(); 
            for(Product p:) {
                
            } 
            */
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
