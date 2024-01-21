package project.storepackage;

import project.user.Manager;

// Purchase class
public class Purchase extends Transaction {
    // additional attributes
    private Manager manager;
    private Product product;
    
    // constructor
    public Purchase(int id, String date, double amount, Manager manager, Product product) {
        super(id, date, amount); // call the superclass constructor
        this.manager = manager;
        this.product = product;
    }
    
    // getter methods
    public Manager getManager() {
        return manager;
    }
    
    public Product getProduct() {
        return product;
    }
    
    // override the abstract methods
    @Override
    public double calculate_price() {
        // calculate the cost of buying the product
        return product.getPrice() * product.getQuantity();
    }
    
    @Override
    public void payment() {
        // process the payment to the supplier
        System.out.println("Payment made to " + product.getSupplier()); //this error is because of no getSupplier 
    }
    
    @Override
    public void update_stock() {
        // increase the stock of the product
        product.setQuantity(product.getQuantity() + 1);
    }
    }
