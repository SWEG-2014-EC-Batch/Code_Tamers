package project.storepackage;

import java.util.List;
import java.util.ArrayList;
import project.storepackage.Transaction;
import project.storepackage.Purchase;

// Inventory class
public class Inventory {
    // attributes
    private List<Sale> salesData;
    private List<Purchase> purchaseData;
    private List<Product> products;
  
    // constructor
    public Inventory() {
      salesData = new ArrayList<Sale>();
      purchaseData = new ArrayList<Purchase>();
      products = new ArrayList<Product>();
    }
  
    // getter methods
    public List<Sale> getSalesData() {
      return salesData;
    }
  
    public List<Purchase> getPurchaseData() {
      return purchaseData;
    }
  
    public List<Product> getProducts() {
      return products;
    }
  
    // methods
    public void add_product(Product p) {
      // add a product to the inventory
      products.add(p);
    }
  
    public void remove_product(Product p) {
      // remove a product from the inventory
      products.remove(p);
    }
  
    public void update_stock(Transaction t) {
      // update the stock based on the type of transaction
      if (t instanceof Sale) {
        // cast the transaction to a Sale object
        Sale s = (Sale) t;
        // reduce the stock of the products in the cart
        for (Product p : s.getCart().items) {
          p.setQuantity(p.getQuantity() - 1);
        }
      } else if (t instanceof Purchase) {
        // cast the transaction to a Purchase object
        Purchase p = (Purchase) t;
        // increase the stock of the product
        p.getProduct().setQuantity(p.getProduct().getQuantity() + 1);
      }
    }
  
    public void record_transaction(Transaction t) {
      // record the transaction in the salesData or purchaseData
      if (t instanceof Sale) {
        // cast the transaction to a Sale object
        Sale s = (Sale) t;
        // add the sale to the salesData
        salesData.add(s);
      } else if (t instanceof Purchase) {
        // cast the transaction to a Purchase object
        Purchase p = (Purchase) t;
        // add the purchase to the purchaseData
        purchaseData.add(p);
      }
    }
  }




