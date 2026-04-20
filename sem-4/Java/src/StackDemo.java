import java.util.*;

class Stack {
    int max = 5;
    int[] arr = new int[max];
    int top = -1;

    void push(int x) {
        if (top == max - 1) {
            System.out.println("Stack Overflow");
        } else {
            arr[++top] = x;
            System.out.println("Pushed: " + x);
        }
    }

    void pop() {
        if (top == -1) {
            System.out.println("Stack Underflow");
        } else {
            System.out.println("Popped: " + arr[top--]);
        }
    }

    void display() {
        if (top == -1) {
            System.out.println("Stack is empty");
        } else {
            System.out.println("Stack elements:");
            for (int i = top; i >= 0; i--) {
                System.out.println(arr[i]);
            }
        }
    }
}

public class StackDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stack s = new Stack();

        while (true) {
            System.out.println("\n1.Push 2.Pop 3.Display 4.Exit");
            System.out.println("Enter Choice: ");
            int ch = sc.nextInt();

            switch (ch) {
                case 1:
                    System.out.print("Enter element: ");
                    s.push(sc.nextInt());
                    break;
                case 2:
                    s.pop();
                    break;
                case 3:
                    s.display();
                    break;
                case 4:
                    System.exit(0);
            }
        }
    }
}
