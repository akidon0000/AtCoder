class A {
  int test1
  int test2

  A(int num1, int num2) {
    test1 = num1
    test2 = num2
  }

}

class B extends A {

  B(int num1, int num2) {
    test1 = num1
    test2 = num2
  }
}

class Main {
  public static void main(String[] args) {
    B b = new B(10,10)
  }
}

