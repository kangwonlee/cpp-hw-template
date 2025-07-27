// begin main.c
// Please work on this file and submit your changes.
// 이 파일을 수정하여 제출하시오.
// Do not add extra includes or change function signatures
//  this may break grading.

// Include necessary header for input/output
#include <stdio.h>

// Function prototypes: Declare the functions with their return types
//  and parameters
// 함수 프로토타입: 함수의 반환 형식과 매개변수를 선언함.
int add_int(const int a, const int b);
int sub_int(const int a, const int b);
int mul_int(const int a, const int b);

float add_float(const float c, const float d);
float sub_float(const float c, const float d);
float mul_float(const float c, const float d);

int main() {
  // Declare variables to store user inputs
  // 사용자 입력을 저장할 변수를 선언하시오
  int a, b;
  float c, d;

  // Prompt for and read two integers
  // 두 정수를 입력받기 위한 프롬프트와 읽기
  printf("Enter two integers (a b): ");
  // Use scanf("%d %d", &a, &b); here
  //    (or scanf_s on Windows)
  // 여기에 scanf("%d %d", &a, &b); 사용
  //    (Windows에서는 scanf_s)

  // Prompt for and read two floats
  // 두 실수를 입력받기 위한 프롬프트와 읽기
  printf("Enter two floats (c d): ");
  // Use scanf("%f %f", &c, &d); here
  //    (or scanf_s on Windows)
  // 여기에 scanf("%f %f", &c, &d); 사용
  //    (Windows에서는 scanf_s)

  // Print the first separator
  // 첫 번째 구분자 출력
  printf("##########\n");

  // Print integer values and results
  //    using the functions
  // 정수 값과 함수를 사용한 결과를 출력하시오
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("a + b = %d\n", add_int(a, b));
  printf("a - b = %d\n", sub_int(a, b));
  printf("a * b = %d\n", mul_int(a, b));

  // Print the second separator
  // 두 번째 구분자 출력
  printf("##########\n");

  // Print float values and results
  //    using the functions (with %.2f for formatting)
  // 실수 값과 함수를 사용한 결과를 출력하시오 (%.2f 형식 사용)
  printf("c = %.2f\n", c);
  printf("d = %.2f\n", d);
  printf("c + d = %.2f\n", add_float(c, d));
  printf("c - d = %.2f\n", sub_float(c, d));
  printf("c * d = %.2f\n", mul_float(c, d));

  return 0;
}

// Implement the arithmetic functions below
// 아래에 산술 함수를 구현하시오
// Consider edge cases like negative numbers or zero.

// Returns the sum of two integers (a + b)
// 두 정수의 합을 반환하시오
int add_int(const int a, const int b) {
  // TODO: Implement the addition
  // TODO: 덧셈 구현

  // Placeholder; replace with your code
  // 아래 행을 수정하여 연산 결과를 반환하시오
  return 0;
}

// Returns the difference of two integers (a - b)
// 두 정수의 차를 반환하시오
int sub_int(const int a, const int b) {
  // TODO: Implement the subtraction
  // TODO: 뺄셈 구현

  // Placeholder; replace with your code
  // 아래 행을 수정하여 연산 결과를 반환하시오
  return 0;
}

// Returns the product of two integers (a * b)
// 두 정수의 곱을 반환하시오
int mul_int(const int a, const int b) {
  // TODO: Implement the multiplication
  // TODO: 곱셈 구현

  // Placeholder; replace with your code
  // 아래 행을 수정하여 연산 결과를 반환하시오
  return 0;
}

// Returns the sum of two floats (c + d)
// 두 실수의 합을 반환하시오
float add_float(const float c, const float d) {
  // TODO: Implement the addition
  // TODO: 덧셈 구현

  // Placeholder; replace with your code
  // 아래 행을 수정하여 연산 결과를 반환하시오
  return 0.0f;
}

// Returns the difference of two floats (c - d)
// 두 실수의 차를 반환하시오
float sub_float(const float c, const float d) {
  // TODO: Implement the subtraction
  // TODO: 뺄셈 구현

  // Placeholder; replace with your code
  // 아래 행을 수정하여 연산 결과를 반환하시오
  return 0.0f;
}

// Returns the product of two floats (c * d)
// 두 실수의 곱을 반환하시오
float mul_float(const float c, const float d) {
  // TODO: Implement the multiplication
  // TODO: 곱셈 구현

  // Placeholder; replace with your code
  // 아래 행을 수정하여 연산 결과를 반환하시오
  return 0.0f;
}

// end main.c
