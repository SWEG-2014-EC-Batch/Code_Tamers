package project.storepackage;

import project.user.Customer;

// Sale class
public class Sale extends Transaction {
    // additional attributes
    private Customer customer;
    private Cart cart;
  
    // constructor
    public Sale(int id, String date, double amount, Customer customer, Cart cart) {
      super(id, date, amount); // call the superclass constructor
      this.customer = customer;
      this.cart = cart;
    }
  
    // getter methods
    public Customer getCustomer() {
      return customer;
    }
  
    public Cart getCart() {
      return cart;
    }
  
    // override the abstract methods
    @Override
    public double calculate_price() {
      // calculate the total price of the items in the cart
      double price = 0.0;
      for (Product p : cart.getProducts()) {
        price += p.getPrice() * p.getQuantity();
      }
      return price;
    }
  
    @Override
    public void payment() {
      // process the payment from the customer
      System.out.println("Payment received from " + customer.getName());
    }
  
    @Override
    public void update_stock() {
      // reduce the stock of the products in the cart
      for (Product p : cart.getProducts()) {
        p.setQuantity(p.getQuantity() - 1);
      }
    }
  }
