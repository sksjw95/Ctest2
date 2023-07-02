/*#include <stdio.h>

void main() {
	// 숫자를 논리연산자로 비교할때 숫자가 0이면 false, 0이 아닌 나머지 숫자는 true
	int data1 = 5, data2 = 3;

	int result1 = 0 || 1; //   || (or)논리 연산자는 둘중 하나면 참이어도 참이다. --> 1
	int result2 = 3 && -1; // && (and)논리 연산자는 둘 모두 참이어야 참이다. 하나라도 거짓이 있으면 거짓이다. --> 1
	int result3 = data1 == 3 || data2 == 3; // --> 1
	int result4 = data1 == 3 && data2 == 3; // --> 0
	int result5 = !data1; // -->0
	
	printf("result : %d, %d, %d, %d,%d\n", result1, result2, result3, result4, result5);
} */