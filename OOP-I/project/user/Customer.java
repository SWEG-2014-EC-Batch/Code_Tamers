package project.user;

import project.storepackage.Cart;
import project.storepackage.Product;
import project.storepackage.Inventory;
import project.storepackage.Sale;;

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
        System.out.println("Here are the list of products availavle in the Store: ");
        for(Product p:i.getProducts()) {
            System.out.println("Name: "+p.getName()+"Price: "+p.getPrice()+"Quantity: "+p.getQuantity());
        }
    }

    public void addToCart(Product product) {
        cart.addProduct(product);
    }

    public void removeFromCart(Product product) {
        cart.removeProduct(product);
    }

    //see what the customer has added to the cart so far
    public void checkout() {
        cart.checkout();
    }


    //here is where the sales is done after the 
    public void checkout(Inventory inventory) {
        Sale sale = new Sale(this, cart); // Create a new Sale instance with the current customer and cart
        double totalPrice = sale.calculate_price(); // Calculate the total price of the items in the cart
        sale.payment(); // Process the payment from the customer
        sale.update_stock(); // Update the stock of the products in the inventory
    
        inventory.record_transaction(sale); // Record the sale transaction in the inventory
    
        // Clear the cart after successful checkout
        cart.getProducts().clear();
    }
}
