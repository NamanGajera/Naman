import 'dart:io';

void main() {
  print('Enter number 1:');
  double n1 = double.parse(stdin.readLineSync()!);

  print('Enter number 2:');
  double n2 = double.parse(stdin.readLineSync()!);
  print('1: Addition \n2: Subtraction \n3: Multiplication \n4: Division');

  print('Enter your choise:');
  int n = int.parse(stdin.readLineSync()!);

  double add = n1 + n2;
  double sub = n1 - n2;
  double mul = n1 * n2;
  double div = n1 / n2;

  switch (n) {
    case 1:
      print('Addition is : $add');
    case 2:
      print('Subtraction is : $sub');
    case 3:
      print('Multiplication is : $mul');
    case 4:
      print('Division is : $div');
    default:
      print('invalid input');
  }
}
