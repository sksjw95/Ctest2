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
	printf("����� ������ %d���̰� ����� %c�Դϴ�. ", score, grade);
}
// ���� ���� �̹� ������ �ִ� ������ ���Ҷ��� switch ���ǹ��� �����ϴ�.
// ���� ������ ����ȴٸ� ����� b�� ���;� �Ѵ�. �׷����� F�� ���´�.
// case������ ����� ������ ���̴�. �׷��Ƿ� switch (score)�ȿ� score�� 86�̹Ƿ� ��ġ�ϴ� ���� ����
// default���� �����ϰ� �ȴ�.
// �ذ���: switch(�񱳴�� ��) �̴�. switch(score / 10) --> '/' ��ȣ�� ������ ���� ���ϴ� ���̹Ƿ�  (score / 10)--> 8�� �ȴ�.
// 1. switch (score)�� switch (score/10) ���� 2.case 10, ..........case 6���� ����