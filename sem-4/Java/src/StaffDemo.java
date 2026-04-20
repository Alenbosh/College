class Staff {
    int id;
    String name, phone;
    double salary;

    Staff(int id, String name, String phone, double salary) {
        this.id = id;
        this.name = name;
        this.phone = phone;
        this.salary = salary;
    }

    void display() {
        System.out.println(id + " " + name + " " + phone + " " + salary);
    }
}

class Teaching extends Staff {
    String domain;
    int publications;

    Teaching(int id, String name, String phone, double salary, String domain, int publications) {
        super(id, name, phone, salary);
        this.domain = domain;
        this.publications = publications;
    }

    void display() {
        super.display();
        System.out.println(domain + " " + publications);
    }
}

class Technical extends Staff {
    String skills;

    Technical(int id, String name, String phone, double salary, String skills) {
        super(id, name, phone, salary);
        this.skills = skills;
    }

    void display() {
        super.display();
        System.out.println(skills);
    }
}

class Contract extends Staff {
    int period;

    Contract(int id, String name, String phone, double salary, int period) {
        super(id, name, phone, salary);
        this.period = period;
    }

    void display() {
        super.display();
        System.out.println(period);
    }
}

public class StaffDemo {
    public static void main(String[] args) {
        Teaching t = new Teaching(1, "Alice", "12345", 50000, "AI", 10);
        Technical tech = new Technical(2, "Bob", "67890", 40000, "Networking");
        Contract c = new Contract(3, "Charlie", "11111", 30000, 12);

        t.display();
        tech.display();
        c.display();
    }
}
