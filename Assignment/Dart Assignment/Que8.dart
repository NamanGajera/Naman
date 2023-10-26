import 'dart:io';

void main() {
  print('enter Subject 1 mark:');
  double s1 = double.parse(stdin.readLineSync()!);
  print('enter Subject 2 mark:');
  double s2 = double.parse(stdin.readLineSync()!);
  print('enter Subject 3 mark:');
  double s3 = double.parse(stdin.readLineSync()!);
  print('enter Subject 4 mark:');
  double s4 = double.parse(stdin.readLineSync()!);
  print('enter Subject 5 mark:');
  double s5 = double.parse(stdin.readLineSync()!);

  double per = (s1 + s2 + s3 + s4 + s5) / 5;
  print('Percentage is: $per');
}
