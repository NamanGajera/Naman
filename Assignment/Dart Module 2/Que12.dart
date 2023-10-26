import 'dart:io';

void main() {
  int f = 0;
  print('eneter number : ');
  int n = int.parse(stdin.readLineSync()!);
  if (n == 0 || n == 1) {
    f = 1;
  }
  for (int i = 2; i <= n; i++) {
    if (n % i == 0) {
      f = 1;
    }
  }
  if (f == 1) {
    print('Number is prime');
  } else {
    print('Number is not prime');
  }
}
