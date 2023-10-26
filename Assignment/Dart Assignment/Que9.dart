void main() {
  int a = 40;
  int b = 10;
  print('Value of a&b before swap is : a = $a, b = $b');
  a = a + b;
  b = a - b;
  a = a - b;
  print('Value of a&b before swap is : a = $a, b = $b');
}
