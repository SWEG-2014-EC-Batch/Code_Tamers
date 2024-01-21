package project.user;

public class User {
    protected String name;
    protected int id;

    public User(String name, int id) {
        this.name=name;
        this.id=id;
    }

    public void login() {
        //login logic
    }

    public void logout() {
        //logout 
    }
}