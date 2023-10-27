import 'dart:io';

void main() {
  //Write a program to print the 1 to 10 using For loop
  // for (int i = 1; i <= 10; i++) {
  //   print(i);
  // }

  // //Write a Program to print the 51 to 60 using while loop
  // int j = 51;
  // while (j <= 60) {
  //   print(j);
  //   j++;
  // }

  // //Write a program to print the 100 to 81 using do while loop
  // int k = 100;
  // do {
  //   print(k);
  //   k--;
  // } while (k >= 81);

  // //Write a program you have to find the factorial of given number.
  // print('Enter the number:');
  // int d = int.parse(stdin.readLineSync()!);
  // int fact = 1;
  // for (int g = 1; g <= d; g++) {
  //   fact = fact * g;
  // }
  // print('Factorial of given numer is : $fact');

  // // Write a program you have to print the Fibonacci series up to user given number
  // print('Enter the number:');
  // int f = int.parse(stdin.readLineSync()!);
  // int n1 = 0, n2 = 1, sum = 0;
  // stdout.write(' $n1 , $n2 ');
  // for (int a = 2; a < f; a++) {
  //   sum = n1 + n2;
  //   n1 = n2;
  //   n2 = sum;
  //   stdout.write(', $sum ');
  // }
  // print('');

  // //Write a program you have to print the table of given number
  // print('Enter the number:');
  // int t = int.parse(stdin.readLineSync()!);
  // for (int a = 1; a <= 10; a++) {
  //   int mul = t * a;
  //   print('$t  *  $a  =   $mul');
  // }

  // //Write a program to print the number in reverse order.
  // print('Enter the number:');
  // int r = int.parse(stdin.readLineSync()!);
  // int len = r.toString().length;
  // int rev = 0;
  // for (int i = 1; i <= len; i++) {
  //   int m = r % 10;
  //   rev = rev * 10 + m;
  //   r = r ~/ 10;
  // }
  // print(rev);

  // //Write a program to find out the max from given number

  // //Write a program make a summation of given number
  // print('Enter the number:');
  // int n = int.parse(stdin.readLineSync()!);
  // int lent = n.toString().length;
  // int sums = 0;
  // for (int i = 1; i <= lent; i++) {
  //   int j = n % 10;
  //   sums = sums + j;
  //   n = n ~/ 10;
  // }
  // print(sums);

  //Create Below Patterns:
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      stdout.write(' * ');
    }
    print('');
  }

  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      stdout.write(' $j ');
    }
    print('');
  }

  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      stdout.write(' $i ');
    }
    print('');
  }

  for (int i = 1; i <= 5; i++) {
    for (int k = 4; k >= i; k--) {
      stdout.write('   ');
    }
    for (int j = i; j >= 1; j--) {
      stdout.write(' * ');
    }
    print('');
  }

  for (int i = 1; i <= 5; i++) {
    for (int k = 4; k >= i; k--) {
      stdout.write('   ');
    }
    for (int j = i; j >= 1; j--) {
      stdout.write(' $j ');
    }
    print('');
  }

  for (int i = 1; i <= 5; i++) {
    for (int k = 4; k >= i; k--) {
      stdout.write('   ');
    }
    for (int j = 1; j <= (2 * i) - 1; j++) {
      stdout.write(' * ');
    }
    print('');
  }

  for (int i = 1; i <= 5; i++) {
    for (int k = 4; k >= i; k--) {
      stdout.write('   ');
    }
    for (int j = 1; j <= (2 * i) - 1; j++) {
      stdout.write(' $j ');
    }
    print('');
  }

  for (int i = 1; i <= 5; i++) {
    for (int k = 4; k >= i; k--) {
      stdout.write('   ');
    }
    for (int j = 1; j <= (2 * i) - 1; j++) {
      stdout.write(' $i ');
    }
    print('');
  }

  int l = 1;
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      stdout.write(' $l ');
      l++;
    }
    print('');
  }

  int h = 1;
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      if (h % 2 == 0) {
        stdout.write(' 0 ');
        h++;
      } else {
        stdout.write(' 1 ');
        h++;
      }
    }
    print('');
  }

  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      int a = i * i;
      stdout.write(' $a ');
    }
    print('');
  }
}
