import 'dart:io';

void main() {
  // print('Enter number 1:');
  // double n1 = double.parse(stdin.readLineSync()!);

  // print('Enter number 2:');
  // double n2 = double.parse(stdin.readLineSync()!);
  print(
      '1: Find araea of Triangle \n2: Find araea of Rectangle \n3: Find araea of Circle ');

  print('Enter your choise:');
  int n = int.parse(stdin.readLineSync()!);
  double area;

  if (n == 1) {
    print('enter the value of base : ');
    double b = double.parse(stdin.readLineSync()!);
    print('enter the value of height : ');
    double h = double.parse(stdin.readLineSync()!);
    area = 0.5 * (b * h);
    print('The are of Triangle is : $area');
  } else if (n == 2) {
    print('enter the value of Width : ');
    double w = double.parse(stdin.readLineSync()!);
    print('enter the value of height : ');
    double h = double.parse(stdin.readLineSync()!);
    area = (h * w);
    print('The are of Ractangle is : $area');
  } else if (n == 3) {
    print('enter the value of Radius : ');
    double r = double.parse(stdin.readLineSync()!);
    area = (3.14 * r * r);
    print('The are of Ractangle is : $area');
  } else {
    print('Invalid input');
  }
}
