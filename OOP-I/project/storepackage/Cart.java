package project.storepackage;
import java.util.ArrayList;

public class Cart {
    private ArrayList<Product> items;

   
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
    }

    //checking out what is in the cart
    public void checkout() {
        System.out.println("Here are the list of product in the cart:");
        for(Product p:items) {
            System.out.println(p.getName());
        }
    }
}
