import java.util.*;

class Student {
    String usn;
    String name;
    String branch;
    String phone;

    Student(String usn, String name, String branch, String phone) {
        this.usn = usn;
        this.name = name;
        this.branch = branch;
        this.phone = phone;
    }

    void display() {
        System.out.println(usn + "\t" + name + "\t" + branch + "\t" + phone);
    }
}

public class StudentDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of students: ");
        int n = sc.nextInt();
        sc.nextLine();

        Student[] s = new Student[n];

        for (int i = 0; i < n; i++) {
            System.out.println("Enter details of student " + (i + 1));
            System.out.print("USN: ");
            String usn = sc.nextLine();
            System.out.print("Name: ");
            String name = sc.nextLine();
            System.out.print("Branch: ");
            String branch = sc.nextLine();
            System.out.print("Phone: ");
            String phone = sc.nextLine();

            s[i] = new Student(usn, name, branch, phone);
        }

        System.out.println("\nUSN\tName\tBranch\tPhone");
        for (Student st : s) {
            st.display();
        }
    }
}
