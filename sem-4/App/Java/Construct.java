class first {
    Double aly;
    int n;

    first(Double aly, int n) {
        this.aly = aly;
    }

    first(Double aly) {
        this.aly = aly;
    }

    first(int n) {
        this.n = n;
    }
}

class second {
    int sub(int a, int b) {
        return a - b;
    }

    Double sub(Double a, Double b) {
        return a - b;
    }

    Double sub(Double a, Double b, Double c) {
        return a - b - c;
    }
}

public class Construct {
    public static void main(String[] args) {
        first f1 = new first(8.9, 9);
        first f2 = new first(9);
        first f3 = new first(8.9);
        second s1 = new second();
        s1.sub(45, 67);
        second s2 = new second();
        s2.sub(5.6, 7.7);
    }
}
