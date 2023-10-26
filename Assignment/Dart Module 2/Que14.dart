import 'dart:io';

void main() {
  double max, m;
  print('eneter number 1 : ');
  double n1 = double.parse(stdin.readLineSync()!);

  print('eneter number 2 : ');
  double n2 = double.parse(stdin.readLineSync()!);

  print('eneter number 3 : ');
  double n3 = double.parse(stdin.readLineSync()!);

  max = (n1 > n2) ? n1 : n2;
  m = (max > n3) ? max : n3;
  print('Mac Number is $m');
}
