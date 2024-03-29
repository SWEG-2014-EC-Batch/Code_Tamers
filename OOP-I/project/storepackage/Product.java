package project.storepackage;

public class Product {
    private String name;
    private double price;
    private int quantity;
    private int amount;
    private String supplier;
    private String category;

    public Product(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public int getQuantity() {
        return quantity;
    }

    public String getSupplier() {
        return supplier;
    }

    public String getCategory() {
        return category;
    }

    public void setName(String newName) {
        name=newName;
    }

    public void setPrice(double newPrice) {
        price=newPrice;
    }

    public void setQuantity(int x) {
        quantity = x;
    }
    public void setAmount(int x) {
        amount = x;
    }
    public int getAmount() {
        return amount;
    }

    public void setSupplier(String s) {
        supplier=s;
    }

    public void setCategory(String s) {
        category=s;
    }

}
