import 'dart:io';

void main() {
  print('enter the value of base:');
  double b = double.parse(stdin.readLineSync()!);
  print('enter the value of height:');

  double h = double.parse(stdin.readLineSync()!);
  double a = 0.5 * (h * b);
  print('square of number is $a');
}
