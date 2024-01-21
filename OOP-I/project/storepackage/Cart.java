package project.storepackage;
import java.util.ArrayList;
import java.util.List;

public class Cart {
    private ArrayList<Product> items;

   
   public Cart(){
        items = new ArrayList<>();
    }
   


    public void addProduct(Product prod) {
        items.add(prod);
    }

    public void removeProduct(Product prod) {
        items.remove(prod);
    }

    public void checkout() {
        
    }
}
