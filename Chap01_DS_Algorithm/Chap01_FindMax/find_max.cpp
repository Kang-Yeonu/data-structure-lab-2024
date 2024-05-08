#include <cstdio>

int findArrayMax(int score[], int n) /*배열을 매개변수로 사용시 길이도 같이*/
{
	int tmp = score[0];
	for (int i = 1; i < n; i++) {
		if (score[i] > tmp) {
			tmp = score[i];
		}
	}
	return tmp;
}

void main()
{
	int score[5] = { 1, 10, 2, 4, 5 };
	int out;
	out = findArrayMax(score, 5);
	printf("result=%d", out);
}
