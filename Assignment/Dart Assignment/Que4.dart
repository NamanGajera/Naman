import 'dart:io';

void main() {
  print('enter the value of radius:');
  double a = double.parse(stdin.readLineSync()!);
  double area = 0.5 * (3.14 * a);
  print('Area of Circle is : $area');
}
