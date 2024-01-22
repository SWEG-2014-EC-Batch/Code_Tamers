package project.storepackage;
import java.util.ArrayList;
import java.util.List;

public class Cart {
    public List<Product> items;

   
   public Cart(){
        items = new ArrayList<>();
    }

   
    //adding product into the cart
    public void addProduct(Product prod) {
        items.add(prod);
    }

    //removing from the cart
    public void removeProduct(Product prod) {
        items.remove(prod);
        prod.setAmount(0);
    }
    //to access the products on the cart
    public void getProducts(){
        return items;
    }

    //checking out what is in the cart
    public void checkout() {
        System.out.println("Here are the list of product in the cart:");
        for(Product p:items) {
            System.out.println(p.getName());
        }
    }
}
