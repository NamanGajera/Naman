import 'dart:io';

void main() {
  print('eneter year : ');
  int y = int.parse(stdin.readLineSync()!);
  if (y % 4 == 0) {
    print('this year is leap year');
  } else {
    print('this year is not leap year');
  }
}
