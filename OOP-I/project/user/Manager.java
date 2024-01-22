package project.user;

import project.storepackage.Product;
import project.storepackage.Inventory;
import project.storepackage.Purchase;

public class Manager extends User{
    private Inventory inventory;

    public Manager(String name, String passwd)
    {
        super(name,passwd);
        inventory = new Inventory();
    }

    public void viewProduct(Product product) {
        System.out.println("Here are the list of products availavle in the Store: ");
        for(Product p:inventory.getProducts()) {
            System.out.println("Name: "+p.getName()+"Price: "+p.getPrice()+"Quantity: "+p.getQuantity());
        }
    }

    public void purchaseProduct(Product product) {

        Purchase purchase = new Purchase(product);
        double price = purchase.calculate_price(); //Calculate the price of the purchase
        purchase.payment(); // Process the payment to the supplier
        purchase.update_stock();  // Update the stock of the product
    }

    public void addProduct(Product product) {
        inventory.add_product(product);
    }

    public void removeProduct(Product product) {
        inventory.remove_product(product);
    }
}
