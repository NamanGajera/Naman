import 'dart:io';

void main() {
  print('eneter number : ');
  double a = double.parse(stdin.readLineSync()!);
  if (a >= 0) {
    print('Number is Positive');
  } else {
    print('Number is Nagative');
  }
}
