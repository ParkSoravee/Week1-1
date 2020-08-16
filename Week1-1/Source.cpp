#include <stdio.h>

int main() {

	int m, n;
	//input m*n	
	scanf("%d%d", &m, &n);
	int matrix1[m][n], matrix2[m][n];
	//input matrix1
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d",matrix1[i][j]);
		}
	}
	//intput matrix2
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", matrix2[i][j]);
		}
	}
	//out put
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", matrix1[i][j] + matrix2[i][j]);
		}
		printf("\n");
	}
	return 0;
}