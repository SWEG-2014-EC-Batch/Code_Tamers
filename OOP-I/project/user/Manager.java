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
        //view product logic
    }

    public void purchaseProduct(Product product) {

        //Purchase purchase = new Purchase(); //due to constructor yumi
        //purchase.buyProduct(product);  
    }

    public void addProduct(Product product) {
        //inventory.addProduct(product);
    }

    public void removeProduct(Product product) {
        //inventory.removeProduct(product);
    }
}
