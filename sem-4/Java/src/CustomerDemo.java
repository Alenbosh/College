import java.util.*;

class Customer {
    String name;
    String dob;

    void read() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter name: ");
        name = sc.nextLine();
        System.out.print("Enter DOB (dd/mm/yyyy): ");
        dob = sc.nextLine();
    }

    void display() {
        StringTokenizer st = new StringTokenizer(dob, "/");
        String dd = st.nextToken();
        String mm = st.nextToken();
        String yy = st.nextToken();

        System.out.println("Name: " + name);
        System.out.println("Day: " + dd);
        System.out.println("Month: " + mm);
        System.out.println("Year: " + yy);
    }
}

public class CustomerDemo {
    public static void main(String[] args) {
        Customer c = new Customer();
        c.read();
        c.display();
    }
}
