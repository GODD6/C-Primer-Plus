#include<stdio.h>
int Compare(int a, int b, int c);
int main() {
	int T,A[10][3];
	printf("���������ݵ�������");
	scanf("%d",&T);
	printf("������ÿ�����ݵ�ֵ��");
	for (int i = 0; i <T; i++) {
		scanf("%d %d %d\n", &A[i][0], &A[i][1], &A[i][2]);
	}
	for (int i = 0; i <T; i++) {
		printf("%d,%d,%d\n", A[i][0], A[i][1], A[i][2]);
	}

	
	return 0;
}