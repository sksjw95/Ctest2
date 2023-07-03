#include <stdio.h>

void main() {
	int score = 86;
	char grade;
	switch (score) {
	case 100:
		grade = 'A';
		break;
	case 90:
		grade = 'A';
		break;
	case 80:
		grade = 'B';
		break;
	case 70:
		grade = 'C';
		break;
	case 60:
		grade = 'D';
		break;
	default:
		grade = 'F';
		break;
	}
	printf("당신의 점수는 %d점이고 등급은 %c입니다. ", score, grade);
}
// 변수 값이 이미 정해져 있는 상수들과 비교할때는 switch 조건문이 유리하다.
// 원래 예상대로 진행된다면 등급은 b가 나와야 한다. 그렇지만 F가 나온다.
// case다음에 상수는 정해진 값이다. 그러므로 switch (score)안에 score는 86이므로 일치하는 값이 없어
// default까지 진행하게 된다.
// 해결방법: switch(비교대상 값) 이다. switch(score / 10) --> '/' 부호는 나눈후 몫을 구하는 것이므로  (score / 10)--> 8이 된다.
// 1. switch (score)를 switch (score/10) 변경 2.case 10, ..........case 6으로 변경