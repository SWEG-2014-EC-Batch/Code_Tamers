package project.storepackage;

// Transaction class
public abstract class Transaction {
    // common attributes
    private String date;
    
    
    
    // abstract methods
    public abstract double calculate_price();
    public abstract void payment();
    public abstract void update_stock();
    }
    
    
    
