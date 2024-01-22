package project.storepackage;


// Purchase class
public class Purchase extends Transaction {
    // additional attributes
    private Product product;
    
    
    // constructor
    public Purchase(Product product) {
        this.product = product;
    
}
    
    public Product getProduct() {
        return product;
    }
    
    // override the abstract methods
    @Override
    public double calculate_price() {
        // calculate the cost of buying the product
        return product.getPrice() * product.getAmount();
    }
    
    @Override
    public void payment() {
        // process the payment to the supplier
        System.out.println("Payment made to " + product.getSupplier());
    }
    
    @Override
    public void update_stock() {
        // increase the stock of the product
        product.setQuantity(product.getQuantity() + product.getAmount());
    }
    }
