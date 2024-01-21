package project.storepackage;

public class Product {
    private String name;
    private double price;

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

    public void setName(String newName) {
        name=newName;
    }

    public void setPrice(double newPrice) {
        price=newPrice;
    }
}
