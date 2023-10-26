import 'dart:io';

void main() {
  print('enter the number:');
  double a = double.parse(stdin.readLineSync()!);
  double s = a * a;
  double c = a * a * a;
  print('square of number is $s');
  print('Cube of number is $c');
}
