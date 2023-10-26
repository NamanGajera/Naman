import 'dart:io';

void main() {
  print('Enter First value : ');
  double a = double.parse(stdin.readLineSync()!);
  print('Enter second value');
  double b = double.parse(stdin.readLineSync()!);
  double add = a + b;
  double sub = a - b;
  double mul = a * b;
  double div = a / b;
  print('Addition is : $add');
  print('Subtraction is : $sub');
  print('Multiplication is : $mul');
  print('Division is : $div');
}
