#include <stdio.h>

void main() {
	int score = 86;
	char grade;

	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
		
		else if (score >= 70) grade = 'c';
			else if (score >= 60) grade = 'D';
				else grade = 'F';

	printf("����� ������ %d���̰� ����� %c�Դϴ�. \n", score, grade);
}