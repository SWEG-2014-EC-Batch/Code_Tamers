package project.storepackage;

// Transaction class
public abstract class Transaction {
    // common attributes
    private int id;
    private String date;
    private double amount;
    
    // constructor
    public Transaction(int id, String date, double amount) {
        this.id = id;
        this.date = date;
        this.amount = amount;
    }
    
    // getter methods
    public int getId() {
        return id;
    }
    
    public String getDate() {
        return date;
    }
    
    public double getAmount() {
        return amount;
    }
    
    // abstract methods
    public abstract double calculate_price();
    public abstract void payment();
    public abstract void update_stock();
    }
    
    
    
