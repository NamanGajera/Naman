import 'dart:io';

void main() {
  print('Enter Number:');
  int n = int.parse(stdin.readLineSync()!);
  switch (n) {
    case 1:
      print('Sunday');
    case 2:
      print('Monday');
    case 3:
      print('Tuesday');
    case 4:
      print('Wednesday');
    case 5:
      print('Thurday');
    case 6:
      print('Friday');
    case 7:
      print('Saturday');
    default:
      print('invalid input');
  }
}
