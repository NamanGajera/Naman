import 'dart:io';

void main() {
  print('enter the temperature in degree:');
  double d = double.parse(stdin.readLineSync()!);
  double s = (d * 1.8) + 32;
  print('Fahrenheit is $s');
}
