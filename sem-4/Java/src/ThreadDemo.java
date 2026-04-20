import java.util.Random;

class NumberGenerator extends Thread {
    public void run() {
        Random r = new Random();

        while (true) {
            int num = r.nextInt(100);
            System.out.println("\nGenerated: " + num);

            new Square(num).start();
            new Cube(num).start();

            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {}
        }
    }
}

class Square extends Thread {
    int num;

    Square(int num) {
        this.num = num;
    }

    public void run() {
        System.out.println("Square: " + (num * num));
    }
}

class Cube extends Thread {
    int num;

    Cube(int num) {
        this.num = num;
    }

    public void run() {
        System.out.println("Cube: " + (num * num * num));
    }
}

public class ThreadDemo {
    public static void main(String[] args) {
        new NumberGenerator().start();
    }
}
