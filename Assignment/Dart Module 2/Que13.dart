import 'dart:io';

void main() {
  print('eneter number 1 : ');
  double n1 = double.parse(stdin.readLineSync()!);

  print('eneter number 2 : ');
  double n2 = double.parse(stdin.readLineSync()!);

  print('eneter number 3 : ');
  double n3 = double.parse(stdin.readLineSync()!);

  if (n1 > n2) {
    if (n1 > n3) {
      print('Number 1 $n1 is max');
    } else {
      print('Number 3 $n3 is max');
    }
  } else {
    if (n2 > n3) {
      print('Number 2 $n2 is max');
    } else {
      print('Number 3 $n3 is max');
    }
  }
}
