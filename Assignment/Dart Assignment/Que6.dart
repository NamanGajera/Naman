import 'dart:io';

void main() {
  print('enter the value of P:');
  double P = double.parse(stdin.readLineSync()!);
  print('enter the value of R:');
  double R = double.parse(stdin.readLineSync()!);
  print('enter the value of T:');
  double T = double.parse(stdin.readLineSync()!);

  double I = (P * R * T) / 100;
  print('square of number is $I');
}
