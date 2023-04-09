//Stan Andreea-Cristina 313 CA
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void free_matrix(int n, int **mat)
{
	for (int i = 0; i < n; i++)
		free(mat[i]);

	free(mat);
}

void free_matrix2(int y1, int y2, int **mat2)
{
	for (int i = 0; i < (y2 - y1); i++)
		free(mat2[i]);
	free(mat2);
}

void free_matrix3(int m, int **mat2)
{
	for (int i = 0; i < m; i++)
		free(mat2[i]);

	free(mat2);
}

void free_matrix4(int m, int **mat)
{
	for (int i = 0; i < m; i++)
		free(mat[i]);

	free(mat);
}

void alloc_matrix0(int n, int m, int ***mat, int p)
{
	if (p == 0) {
		int **a = (int **)malloc(m * sizeof(int *));
		if (!a) {
			*mat = NULL;
			return;
		}

		*mat = a;

		for (int i = 0; i < m; i++) {
			a[i] = (int *)malloc(n * sizeof(int));
			if (!a[i]) {
				for (int j = 0; j < n; j++)
					free(a[j]);
				free(a);
				*mat = NULL;
				return;
			}
		}
	} else if (p == 1) {
		int **a = (int **)malloc(m * sizeof(int *));
			if (!a) {
				*mat = NULL;
				return;
			}

		*mat = a;

		for (int i = 0; i < m; i++) {
			a[i] = (int *)malloc(3 * n * sizeof(int));
			if (!a[i]) {
				for (int j = 0; j < 3 * n; j++)
					free(a[j]);
				free(a);
				*mat = NULL;
				return;
			}
		}
	}
}

void alloc_matrix1(int *n, int *m, int ***mat, int p)
{
	if (p == 0) {
		int **a = (int **)malloc(*n * sizeof(int *));
		if (!a) {
			*mat = NULL;
			return;
		}

		*mat = a;

		for (int i = 0; i < *n; i++) {
			a[i] = (int *)malloc(*m * sizeof(int));
			if (!a[i]) {
				for (int j = 0; j < *m; j++)
					free(a[j]);
				free(a);
				*mat = NULL;
				return;
			}
		}
	} else if (p == 1) {
		int **a = (int **)malloc(*n * sizeof(int *));
		if (!a) {
			*mat = NULL;
			return;
		}

		*mat = a;

		for (int i = 0; i < *n; i++) {
			a[i] = (int *)malloc(3 * *m * sizeof(int));
			if (!a[i]) {
				for (int j = 0; j < 3 * *m; j++)
					free(a[j]);
				free(a);
				*mat = NULL;
				return;
			}
		}
	}
}

void alloc_matrix2(int n, int m, int ***mat2, int p)
{
	if (p == 0) {
		int **a = (int **)malloc(m * sizeof(int *));
		if (!a) {
			*mat2 = NULL;
			return;
		}

		*mat2 = a;

		for (int i = 0; i < m; i++) {
			a[i] = (int *)malloc(n * sizeof(int));
			if (!a[i]) {
				for (int j = 0; j < n; j++)
					free(a[j]);
				free(a);
				*mat2 = NULL;
				return;
			}
		}
	} else if (p == 1) {
		int **a = (int **)malloc(m * sizeof(int *));
		if (!a) {
			*mat2 = NULL;
			return;
		}

		*mat2 = a;

		for (int i = 0; i < m; i++) {
			a[i] = (int *)malloc(3 * n * sizeof(int));
			if (!a[i]) {
				for (int j = 0; j < 3 * n; j++)
					free(a[j]);
				free(a);
				*mat2 = NULL;
				return;
			}
		}
	}
}

void alloc_matrix3(int x1, int x2, int y1, int y2, int ***mat2, int p)
{
	if (p == 0) {
		int **a = (int **)malloc((y2 - y1) * sizeof(int *));
		if (!a) {
			*mat2 = NULL;
			return;
		}

		*mat2 = a;

		for (int i = 0; i < (y2 - y1); i++) {
			a[i] = (int *)malloc((x2 - x1) * sizeof(int));
			if (!a[i]) {
				for (int j = 0; j < (x2 - x1); j++)
					free(a[j]);
				free(a);
				*mat2 = NULL;
				return;
			}
		}
	} else if (p == 1) {
		int **a = (int **)malloc((y2 - y1) * sizeof(int *));
		if (!a) {
			*mat2 = NULL;
			return;
		}

		*mat2 = a;

		for (int i = 0; i < (y2 - y1); i++) {
			a[i] = (int *)malloc((3 * (x2 - x1)) * sizeof(int));
			if (!a[i]) {
				for (int j = 0; j < (3 * (x2 - x1)); j++)
					free(a[j]);
				free(a);
				*mat2 = NULL;
				return;
			}
		}
	}
}

void alloc_matrix4(int x1, int x2, int y1, int y2, int ***mat, int p)
{
	if (p == 0) {
		int **a = (int **)malloc((y2 - y1) * sizeof(int *));
		if (!a) {
			*mat = NULL;
			return;
		}

		*mat = a;

		for (int i = 0; i < (y2 - y1); i++) {
			a[i] = (int *)malloc((x2 - x1) * sizeof(int));
			if (!a[i]) {
				for (int j = 0; j < (x2 - x1); j++)
					free(a[j]);
				free(a);
				*mat = NULL;
				return;
			}
		}
	} else if (p == 1) {
		int **a = (int **)malloc((y2 - y1) * sizeof(int *));
		if (!a) {
			*mat = NULL;
			return;
		}

		*mat = a;

		for (int i = 0; i < (y2 - y1); i++) {
			a[i] = (int *)malloc((3 * (x2 - x1)) * sizeof(int));
			if (!a[i]) {
				for (int j = 0; j < (3 * (x2 - x1)); j++)
					free(a[j]);
				free(a);
				*mat = NULL;
				return;
			}
		}
	}
}

int **read(char *file1, int *n, int *m, int *p, char *magic_word,
		   int *max)
{
	int **mat;
	unsigned char binary;
	FILE *file = fopen(file1, "rtb");
	if (!file)
		return NULL;

	fgets(magic_word, sizeof(magic_word), file);
	fscanf(file, "%d", m);
	fscanf(file, "%d", n);

	if (magic_word[1] == '2') {
		*p = 0; //daca e poza grayscale p e 0
		fscanf(file, "%d", max);
		alloc_matrix1(n, m, &mat, *p);
		if (!mat)
			return NULL;
		for (int i = 0; i < *n; i++) {
			for (int j = 0; j < *m; j++)
				fscanf(file, "%d ", &mat[i][j]);
		}
	} else if (strncmp(magic_word, "P3", strlen(magic_word) - 1) == 0) {
		*p = 1; //daca e poza color p e 1
		char lin;
		fscanf(file, "%d%c", max, &lin);
		alloc_matrix1(n, m, &mat, *p);
		if (!mat)
			return NULL;
		for (int i = 0; i < *n; i++) {
			for (int j = 0; j < 3 * *m; j++)
				fscanf(file, "%d ", &mat[i][j]);
		}
	} else if (strncmp(magic_word, "P5", strlen(magic_word) - 1) == 0) {
		*p = 0;
		char lin;
		fscanf(file, "%d%c", max, &lin);
		alloc_matrix1(n, m, &mat, *p);
		if (!mat)
			return NULL;
		for (int i = 0; i < *n; i++) {
			for (int j = 0; j < *m; j++) {
				fread(&binary, 1, 1, file);  //parcurg bit cu bit
											//cu un char fara semn
				mat[i][j] = binary; //copiez bit cu bit in matrice
			}
		}
	} else if (strncmp(magic_word, "P6", strlen(magic_word) - 1) == 0) {
		*p = 1;
		fscanf(file, "%d", max);
		alloc_matrix1(n, m, &mat, *p);
		if (!mat)
			return NULL;
		fscanf(file, "\n");
		for (int i = 0; i < *n; i++) {
			for (int j = 0; j < 3 * *m; j++) {
				fread(&binary, 1, 1, file);  //parcurg bit cu bit
											//cu un char fara semn
				mat[i][j] = binary; //copiez bit cu bit in matrice
			}
		}
	}

	if (file)
		fclose(file);
	for (int i = 2; i > 0; i--) {
		magic_word[i] = '\0'; //elimin \n din magic_word
		break;
	}

	return mat;
}

void load(char *file1, int *cnt, int n, int **mat)
{
	FILE *file = fopen(file1, "rt");
	if (!file) {
		printf("Failed to load %s\n", file1);
		if (*cnt == 0) { //verific daca a fost incarcata deja o matrice
			*cnt = 2;
			free_matrix(n, mat);
		} else {
			*cnt = 2;
		}
	} else {
		if (*cnt != 0) {
			*cnt = 0;
		} else if (*cnt == 0) { //verific daca a fost incarcata deja o matrice
			free_matrix(n, mat);
			*cnt = 0;
		}
		printf("Loaded %s\n", file1);
	}

	if (file)
		fclose(file);
}

int **rot_all_gr(int angle, int **mat, int n, int m, int p, int *cnt2)
{
	int **mat2;
	alloc_matrix2(n, m, &mat2, p);
		if (!mat2)
			return NULL;
	if (angle == 90 || angle == -270) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				mat2[j][(n - 1) - i] = mat[i][j]; //copiez in matricea copie
		}								//valorile coresp. din matricea initiala
	} else if (angle == 180 || angle == -180) {
		*cnt2 = 1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				mat2[j][(n - 1) - i] = mat[i][j]; //copiez in matricea copie
		}								//valorile coresp. din matricea initiala
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++)
				mat[j][(m - 1) - i] = mat2[i][j]; //copiez in matricea initiala
		}								//valorile coresp. din matricea copie
	} else if (angle == -90 || angle == 270) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				mat2[j][(n - 1) - i] = mat[i][j]; //copiez in matricea copie
		}								//valorile coresp. din matricea initiala
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++)
				mat[j][(m - 1) - i] = mat2[i][j]; //copiez in matricea initiala
		}								//valorile coresp. din matricea copie
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				mat2[j][(n - 1) - i] = mat[i][j]; //copiez in matricea copie
		}								//valorile coresp. din matricea initiala
	}

	if (*cnt2 != 1) { //verific daca rotirea nu a fost de 180
		free_matrix(n, mat);
		alloc_matrix0(n, m, &mat, p);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++)
				mat[i][j] = mat2[i][j]; //copiez in matricea initiala
		}							//valorile coresp. din matricea copie
	}
		free_matrix3(m, mat2);
		return mat;
}

int **rot_gr(int x1, int x2, int y1, int y2, int angle, int **mat,
			 int n, int m, int p)
{
	int **mat2, cnt1 = 0, cnt2 = 0, cnt3 = 2;
	alloc_matrix4(x1, x2, y1, y2, &mat2, p);
	if (!mat2)
		return NULL;
	if (angle == 90 || angle == -270) {
		for (int i = y1; i < y2; i++) { //parcurg matricea initiala
			for (int j = x1; j < x2; j++) { //in intervalul cerut
				mat2[cnt1][(y2 - y1) - 1 - cnt2] = mat[i][j]; //iau in matricea
				cnt1++;			//copie valorile coresp. din matricea initiala
			}
			cnt2 = cnt2 + 1, cnt1 = 0;
		}
		cnt1 = 0, cnt2 = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (i >= y1 && i < y2 && j >= x1 && j < x2) {
					mat[i][j] = mat2[cnt1][cnt2]; //inlocuiesc in interval
					cnt2++;						 //noile valori dupa rotire
				}
			}
			if (i >= y1 && i < y2) {
				cnt1++;
				cnt2 = 0;
			}
		}
	} else if ((p == 0) && ((angle == 180) || (angle == -180))) {
		while (cnt3 != 0) {
			cnt1 = 0, cnt2 = 0;
			for (int i = y1; i < y2; i++) { //parcurg matricea initiala
				for (int j = x1; j < x2; j++) { //in intervalul cerut
					mat2[cnt1][(y2 - y1) - 1 - cnt2] = mat[i][j]; //iau in matr.
					cnt1++;		//copie valorile coresp. din matricea initiala
				}
				cnt2 = cnt2 + 1, cnt1 = 0;
			}
			cnt1 = 0, cnt2 = 0;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (i >= y1 && i < y2 && j >= x1 && j < x2) {
						mat[i][j] = mat2[cnt1][cnt2]; //inlocuiesc in interval
						cnt2++;						 //noile valori dupa rotire
					}
				}
				if (i >= y1 && i < y2)
					cnt1 = cnt1 + 1, cnt2 = 0;
			}
			cnt3--;
		}
	} else if ((p == 0) && ((angle == -90) || (angle == 270))) {
		cnt3 = 3;
		while (cnt3 != 0) {
			cnt1 = 0, cnt2 = 0;
			for (int i = y1; i < y2; i++) { //parcurg matricea initiala
				for (int j = x1; j < x2; j++) { //in intervalul cerut
					mat2[cnt1][(y2 - y1) - 1 - cnt2] = mat[i][j]; //iau in matr.
					cnt1++;		//copie valorile coresp. din matricea initiala
				}
				cnt2 = cnt2 + 1, cnt1 = 0;
			}
			cnt1 = 0, cnt2 = 0;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (i >= y1 && i < y2 && j >= x1 && j < x2) {
						mat[i][j] = mat2[cnt1][cnt2]; //inlocuiesc in interval
						cnt2++;						 //noile valori dupa rotire
					}
				}
				if (i >= y1 && i < y2) {
					cnt1++;
					cnt2 = 0;
				}
			}
			cnt3--;
		}
	}
	free_matrix2(y1, y2, mat2);
	return mat;
}

int **rot_all_cl(int angle, int **mat, int n, int m, int p, int *cnt3)
{
	int **mat2, cnt = 0, cnt2 = 0, j = 0;
	alloc_matrix2(n, m, &mat2, p);
	if (!mat2)
		return NULL;
	if (angle == 90 || angle == -270) {
		for (int i = (n - 1); i >= 0; i--) {
			cnt = 0, j = 0;
			while (cnt < m) {
				mat2[cnt][cnt2] = mat[i][j]; //iau in matricea
				mat2[cnt][cnt2 + 1] = mat[i][j + 1]; //copie valorile coresp.
				mat2[cnt][cnt2 + 2] = mat[i][j + 2]; //din matricea initiala
				cnt = cnt + 1, j = j + 3;
			}
			cnt2 = cnt2 + 3;
		}
	} else if ((angle == 180) || (angle == -180)) {
		for (int i = (n - 1); i >= 0; i--) {
			cnt = 0, j = 0;
			while (cnt < m) {
				mat2[cnt][cnt2] = mat[i][j]; //iau in matricea
				mat2[cnt][cnt2 + 1] = mat[i][j + 1]; //copie valorile coresp.
				mat2[cnt][cnt2 + 2] = mat[i][j + 2]; //din matricea initiala
				cnt = cnt + 1, j = j + 3;
			}
			cnt2 = cnt2 + 3;
		}
		cnt2 = 0, *cnt3 = 1;
		for (int i = (m - 1); i >= 0; i--) {
			cnt = 0, j = 0;
			while (cnt < n) {
				mat[cnt][cnt2] = mat2[i][j]; //copiez valorile in
				mat[cnt][cnt2 + 1] = mat2[i][j + 1]; //matricea initiala
				mat[cnt][cnt2 + 2] = mat2[i][j + 2], cnt = cnt + 1, j = j + 3;
			}
			cnt2 = cnt2 + 3;
		}
	} else if (angle == -90 || angle == 270) {
		for (int i = (n - 1); i >= 0; i--) {
			cnt = 0, j = 0;
			while (cnt < m) {
				mat2[cnt][cnt2] = mat[i][j]; //iau in matricea
				mat2[cnt][cnt2 + 1] = mat[i][j + 1]; //copie valorile coresp.
				mat2[cnt][cnt2 + 2] = mat[i][j + 2]; //din matricea initiala
				cnt = cnt + 1, j = j + 3;
			}
			cnt2 = cnt2 + 3;
		}
		cnt2 = 0;
		for (int i = (m - 1); i >= 0; i--) {
			cnt = 0, j = 0;
			while (cnt < n) {
				mat[cnt][cnt2] = mat2[i][j]; //copiez valorile in
				mat[cnt][cnt2 + 1] = mat2[i][j + 1]; //matricea initiala
				mat[cnt][cnt2 + 2] = mat2[i][j + 2], cnt = cnt + 1, j = j + 3;
			}
			cnt2 = cnt2 + 3;
		}
		cnt2 = 0;
		for (int i = (n - 1); i >= 0; i--) {
			cnt = 0, j = 0;
			while (cnt < m) {
				mat2[cnt][cnt2] = mat[i][j]; //iau in matricea
				mat2[cnt][cnt2 + 1] = mat[i][j + 1]; //copie valorile coresp.
				mat2[cnt][cnt2 + 2] = mat[i][j + 2]; //din matricea initiala
				cnt = cnt + 1, j = j + 3;
			}
			cnt2 = cnt2 + 3;
		}
	}
	if (*cnt3 != 1) { //verific daca rotirea nu a fost de 180
		free_matrix(n, mat);
		alloc_matrix0(n, m, &mat, p);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < 3 * n; j++)
				mat[i][j] = mat2[i][j]; //copiez in matricea initiala
		}						//valorile coresp. din matricea copie
	}
	free_matrix3(m, mat2);
	return mat;
}

int **rot_cl(int x1, int x2, int y1, int y2, int angle, int **mat,
			 int p, int cnt3)
{
	int **mat2, cnt = 0, cnt2 = 0, j = 0;
	alloc_matrix3(x1, x2, y1, y2, &mat2, p);
	if (!mat2)
		return NULL;
	if (angle == 90 || angle == -270) {
		for (int i = (y2 - 1); i >= y1; i--) { //parcurg matricea
			cnt = 0, j = 3 * x1; //initiala pe linii
			while (j < 3 * x2) {
				mat2[cnt][cnt2] = mat[i][j]; //iau in matricea copie
				mat2[cnt][cnt2 + 1] = mat[i][j + 1];//val. din matricea initiala
				mat2[cnt][cnt2 + 2] = mat[i][j + 2], cnt = cnt + 1, j = j + 3;
			}
			cnt2 = cnt2 + 3;
		}
	} else if (angle == 180 || angle == -180) {
		for (int i = (y2 - 1); i >= y1; i--) { //parcurg matricea
			cnt = 0, j = 3 * x1; //initiala pe linii
			while (j < 3 * x2) {
				mat2[cnt][cnt2] = mat[i][j]; //iau in matricea copie
				mat2[cnt][cnt2 + 1] = mat[i][j + 1];//val. din matricea initiala
				mat2[cnt][cnt2 + 2] = mat[i][j + 2], cnt = cnt + 1, j = j + 3;
			}
			cnt2 = cnt2 + 3;
		}
		cnt2 = 3 * x1, cnt3 = 1;
		for (int i = (y2 - y1) - 1; i >= 0; i--) { //parcurg matricea
			cnt = y1, j = 0; //copie pe linii
			while (j < 3 * (x2 - x1)) {
				mat[cnt][cnt2] = mat2[i][j]; //iau in matricea initiala
				mat[cnt][cnt2 + 1] = mat2[i][j + 1];//val. din matricea copie
				mat[cnt][cnt2 + 2] = mat2[i][j + 2], cnt = cnt + 1, j = j + 3;
			}
			cnt2 = cnt2 + 3;
		}
	} else if (angle == -90 || angle == 270) {
		for (int i = (y2 - 1); i >= y1; i--) { //parcurg matricea
			cnt = 0, j = 3 * x1; //initiala pe linii
			while (j < 3 * x2) {
				mat2[cnt][cnt2] = mat[i][j]; //iau in matricea copie
				mat2[cnt][cnt2 + 1] = mat[i][j + 1];//val. din matricea initiala
				mat2[cnt][cnt2 + 2] = mat[i][j + 2], cnt = cnt + 1, j = j + 3;
			}
			cnt2 = cnt2 + 3;
		}
		cnt2 = 3 * x1;
		for (int i = (y2 - y1) - 1; i >= 0; i--) { //parcurg matricea
			cnt = y1, j = 0; //copie pe linii
			while (j < 3 * (x2 - x1)) {
				mat[cnt][cnt2] = mat2[i][j]; //iau in matricea initiala
				mat[cnt][cnt2 + 1] = mat2[i][j + 1];//val. din matricea copie
				mat[cnt][cnt2 + 2] = mat2[i][j + 2], cnt = cnt + 1, j = j + 3;
			}
			cnt2 = cnt2 + 3;
		}
		cnt2 = 0;
		for (int i = (y2 - 1); i >= y1; i--) { //parcurg matricea
			cnt = 0, j = 3 * x1; //initiala pe linii
			while (j < 3 * x2) {
				mat2[cnt][cnt2] = mat[i][j]; //iau in matricea copie
				mat2[cnt][cnt2 + 1] = mat[i][j + 1];//val. din matricea initiala
				mat2[cnt][cnt2 + 2] = mat[i][j + 2], cnt = cnt + 1, j = j + 3;
			}
			cnt2 = cnt2 + 3;
		}
	}
	cnt = 0, cnt2 = 0;
	if (cnt3 != 1) {
		for (int i = y1; i < y2; i++) { //parcurg matricea
			for (int j = 3 * x1; j < 3 * x2; j++) { //copie pe linii
				mat[i][j] = mat2[cnt][cnt2]; //iau in matricea initiala
				cnt2++;						//val. din matricea copie
			}
			cnt = cnt + 1, cnt2 = 0;
		}
	}
	free_matrix2(y1, y2, mat2);
	return mat;
}

int **crop(int x1, int x2, int y1, int y2, int **mat, int n, int p, int **mat2)
{
	int cnt1 = 0, cnt2 = 0;
	if (p == 0) { //verific ce tip de imagine este
		alloc_matrix3(x1, x2, y1, y2, &mat2, p);
		if (!mat2)
			return NULL;

		for (int i = y1; i < y2; i++) { //parcurg matricea initiala
			for (int j = x1; j < x2; j++) { //in intervalul cerut
				mat2[cnt1][cnt2] = mat[i][j]; //iau in matricea copie
				cnt2++;		//valorile coresp. din matricea initiala
			}
			cnt1++;
			cnt2 = 0;
		}
		free_matrix(n, mat);
		alloc_matrix4(x1, x2, y1, y2, &mat, p);
		for (int i = 0; i < (y2 - y1); i++) { //parcurg matricea copie
			for (int j = 0; j < (x2 - x1); j++) //in intervalul cerut
				mat[i][j] = mat2[i][j]; //copiez in matricea initiala
		}					//valorile coresp. din matricea copie
	} else if (p == 1) {
		alloc_matrix3(x1, x2, y1, y2, &mat2, p);
		if (!mat2)
			return NULL;

		for (int i = y1; i < y2; i++) { //parcurg matricea initiala
			for (int j = 3 * x1; j < 3 * x2; j++) { //in intervalul cerut
				mat2[cnt1][cnt2] = mat[i][j]; //iau in matricea copie
				cnt2++;		//valorile coresp. din matricea initiala
			}
			cnt1++;
			cnt2 = 0;
		}
		free_matrix(n, mat);
		alloc_matrix4(x1, x2, y1, y2, &mat, p);
		for (int i = 0; i < (y2 - y1); i++) { //parcurg matricea copie
			for (int j = 0; j < 3 * (x2 - x1); j++)//in intervalul cerut
				mat[i][j] = mat2[i][j]; //copiez in matricea initiala
		}					//valorile coresp. din matricea copie
	}
	free_matrix2(y1, y2, mat2);
	return mat;
}

int **grayscale(int x1, int x2, int y1, int y2, int **mat, int cnt, int p)
{
	int j = 0;
	if (cnt == 0) {
		if (p == 0) { //verific daca imaginea nu e color
			printf("Grayscale filter not available\n");
		} else {
			for (int i = y1; i < y2; i++) { //parcurg matricea pe linii
				j = 0;
				if (x1 == 0) {
					j = 0;
				} else {
					while (j < 3 * x1)
						j = j + 3;
				}
				while (j < (3 * x2)) {
					int aux1 = mat[i][j]; //iau copii ale valorilor
					int aux2 = mat[i][j + 1]; //corespunzatoare ale
					int aux3 = mat[i][j + 2]; //matricii
					double gray, round_gray;
					gray = (aux1 + aux2 + aux3) / 3; //calculez noua valoare
					round_gray = gray - (int)gray; //iau partea zecimala
					if (round_gray > 0.5) //rotunjesc rezultatul
						gray++;
					if (gray > 255)
						gray = 255;
					mat[i][j] = (int)gray; //atribui noua valoare
					mat[i][j + 1] = (int)gray; //pozitiilor coresp.
					mat[i][j + 2] = (int)gray; //din matrice
					j = j + 3;
					if (j >= (3 * x2))
						break;
				}
			}
			printf("Grayscale filter applied\n");
		}
	} else if (cnt != 0) {
		printf("No image loaded\n");
	}
	return mat;
}

int **sepia(int x1, int x2, int y1, int y2, int **mat, int cnt, int p)
{
	int j = 0;
	double red, green, blue, round_red, round_green, round_blue;
	if (cnt == 0) {
		if (p == 0) { //verific daca imaginea nu e color
			printf("Sepia filter not available\n");
		} else {
			for (int i = y1; i < y2; i++) { //parcurg matricea pe
				j = 0;						//linii
				if (x1 == 0) {
					j = 0;
				} else {
					while (j < 3 * x1)
						j = j + 3;
				}
				while (j < (3 * x2)) {
					int aux1 = mat[i][j]; //iau copii ale valorilor
					int aux2 = mat[i][j + 1]; //corespunzatoare
					int aux3 = mat[i][j + 2]; //matricii
					red = (aux1 * 0.393) + (aux2 * 0.769) + (aux3 * 0.189);
					green = (aux1 * 0.349) + (aux2 * 0.686) + (aux3 * 0.168);
					blue = (aux1 * 0.272) + (aux2 * 0.534) + (aux3 * 0.131);
					round_red = red - (int)red; //iau partea zecimala
					round_green = green - (int)green; //a noilor
					round_blue = blue - (int)blue; //valori
					if (round_red > 0.5) //le rotunjesc
						red++;
					if (round_green > 0.5)
						green++;
					if (round_blue > 0.5)
						blue++;
					if (red > 255)
						red = 255;
					if (green > 255)
						green = 255;
					if (blue > 255)
						blue = 255;
					mat[i][j] = (int)red; //atribui noile
					mat[i][j + 1] = (int)green; //valori pozitiilor
					mat[i][j + 2] = (int)blue; //din matrice
					j = j + 3;
					if (j >= (3 * x2))
						break;
				}
			}
			printf("Sepia filter applied\n");
		}
	} else if (cnt != 0) {
		printf("No image loaded\n");
	}
	return mat;
}

int **save(char *file2, int **mat, char magic_word[100],
		   int m, int n, int max)
{
	FILE *file = fopen(file2, "wt");

	if (!file)
		return NULL;

	if ((magic_word[1] == '2') || (magic_word[1] == '5')) {
		fprintf(file, "P2\n");
		fprintf(file, "%d %d\n", m, n);
		fprintf(file, "%d\n", max);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				fprintf(file, "%d ", mat[i][j]);
			fprintf(file, "\n");
		}
	} else if ((magic_word[1] == '3') || (magic_word[1] == '6')) {
		fprintf(file, "P3");
		fprintf(file, "\n");
		fprintf(file, "%d %d\n", m, n);
		fprintf(file, "%d\n", max);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 3 * m; j++)
				fprintf(file, "%d ", mat[i][j]);
			fprintf(file, "\n");
		}
	}
	if (file)
		fclose(file);
	return mat;
}

int **save_b(char *file2, int **mat, char magic_word[100],
			 int m, int n, int max)
{
	unsigned char binary;
	FILE *file = fopen(file2, "wbt");

	if (!file)
		return NULL;

	if ((strcmp(magic_word, "P2") == 0) || (strcmp(magic_word, "P5") == 0)) {
		fprintf(file, "P5\n");
		fprintf(file, "%d %d\n", m, n);
		fprintf(file, "%d\n", max);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				binary = mat[i][j]; //parcurg cu un char fara semn
				fwrite(&binary, sizeof(char), 1, file); //matricea si scriu
			}						//rezultatul in fisier bit cu bit
		}
	} else if ((strcmp(magic_word, "P3") == 0) ||
				(strcmp(magic_word, "P6") == 0)) {
		fprintf(file, "P6");
		fprintf(file, "\n");
		fprintf(file, "%d %d\n", m, n);
		fprintf(file, "%d\n", max);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 3 * m; j++) {
				binary = mat[i][j]; //parcurg cu un char fara semn
				fwrite(&binary, sizeof(char), 1, file); //matricea si scriu
			}						//rezultatul in fisier bit cu bit
		}
	}
	if (file)
		fclose(file);
	return mat;
}

void select_values(int *x1, int *x2, int *y1, int *y2, char *ins,
				   int k, int cnt, int n, int m)
{
	int cpy_x1, cpy_y1, cpy_x2, cpy_y2, cx1, cx2, cy1, cy2, aux1 = 0, aux2 = 0;
	char x1_1[100], x2_2[100], y1_1[100], y2_2[100];
	strcpy(x1_1, "c"), strcpy(x2_2, "c"), strcpy(y1_1, "c"), strcpy(y2_2, "c");
		if (cnt == 0) {
			int v = 0;
			for (int i = k + 1; ins[i] != '\0'; i++) { //parcurg instructiunea
				if (ins[i] == ' ') //citita de la tastatura incepand dupa
					continue; //primul spatiu si verific daca
				if (isalpha(ins[i]) != 0) { //este vreun cuvant
					printf("Invalid command\n");
					v++; break;
				}
			}
			if (strlen(ins) < 15 && v == 0) { //verific daca instructiunea
				printf("Invalid command\n");//are nr. minim de pozitii
				v++;						//ocupate
			}
			if (v == 0) {
				cpy_x1 = k, cx1 = *x1, cx2 = *x2, cy1 = *y1, cy2 = *y2;
				for (int i = k + 1; ins[i] != '\0'; i++)//memorez charul dintre
					x1_1[i - k - 1] = (int)ins[i]; //primele 2 spatii
				for (int i = 0; x1_1[i] != '\0'; i++)
					if (x1_1[i] == ' ') {
						k = i; break; //salvez pozitia urmatorului
					}				//spatiu
				x1_1[k] = '\0';
				*x1 = atoi(x1_1); //convertesc charul in int
				cpy_y1 = cpy_x1 + k;
				for (int i = cpy_y1 + 2; ins[i] != '\0'; i++)//iau charul dintre
					y1_1[i - cpy_y1 - 2] = (int)ins[i];//urmatoarele 2 spatii
				for (int i = 0; y1_1[i] != '\0'; i++)
					if (y1_1[i] == ' ') {
						k = i; break; //salvez urmatorul spatiu
					}
				y1_1[k] = '\0', cpy_x2 = cpy_y1 + k;
				*y1 = atoi(y1_1); //convertesc charul in int
				for (int i = cpy_x2 + 3; ins[i] != '\0'; i++)//iau charul dintre
					x2_2[i - cpy_x2 - 3] = (int)ins[i];//urmatoarele 2 spatii
				for (int i = 0; x2_2[i] != '\0'; i++)
					if (x2_2[i] == ' ') {
						k = i; break; //salvez urmatorul spatiu
					}
				x2_2[k] = '\0', cpy_y2 = cpy_x2 + k;
				*x2 = atoi(x2_2); // convertesc charul in int
				for (int i = cpy_y2 + 4; ins[i] != '\0'; i++)//iau charul dintre
					y2_2[i - cpy_y2 - 4] = (int)ins[i];//urmatoarele 2 spatii
				for (int i = 0; y2_2[i] != '\0'; i++)
					if (y2_2[i] == '\n') {
						k = i; break; //salvez urmatorul spatiu
					}
				y2_2[k] = '\0';
				*y2 = atoi(y2_2); //convertesc charul in int
				if (*x1 > *x2) {
					aux1 = *x1;
					*x1 = *x2;
					*x2 = aux1;
				}
				if (*y1 > *y2) {
					aux2 = *y1;
					*y1 = *y2;
					*y2 = aux2;
				}
				if ((*x1 < 0) || (*x1 > m) || (*x2 < 0) || (*x2 > m) ||
					(*y1 < 0) || (*y1 > n) || (*y2 < 0) || (*y2 > n)) {
					printf("Invalid set of coordinates\n");
					*x1 = cx1, *x2 = cx2, *y1 = cy1, *y2 = cy2;
				} else if (((*x1 == 0) && (*x2 == 0) && (*y1 == 0) &&
							(*y2 == 0)) || (*x1 == *x2) || (*y1 == *y2)) {
					printf("Invalid set of coordinates\n");
					*x1 = cx1, *x2 = cx2, *y1 = cy1, *y2 = cy2;
				} else {
					printf("Selected %d %d %d %d\n", *x1, *y1, *x2, *y2);
				}
			}
		} else if (cnt != 0) {
			printf("No image loaded\n");
		}
}

void find_ascii(int cnt, char *ins, char *file2, char *ascii, int k, int *chk)
{
	int space = 0, j = 0;
	strcpy(ascii, "ceva");
	if (cnt == 0) {
		*chk = *chk + 1;
		for (int i = k + 1; ins[i] != '\0'; i++) //parcurg instructiunea
			file2[i - k - 1] = ins[i]; //si salvez numele fisierului
		for (int i = 0; file2[i] != '\0'; i++)
			if ((file2[i] == '\n') || (file2[i] == ' ')) {
				k = i; break;
			}
		file2[k] = '\0';
		for (int i = 0; ins[i] != '\0'; i++) { //verific
			if (ins[i] == ' ') //daca am parametrul ascii
				space++;
			if (space == 2) {
				ascii[j] = ins[i + 1];
				j++;
			}
		}
	} else if (cnt != 0) {
		printf("No image loaded\n");
	}
}

void find_angle(int k, int cnt, char *ins, int *angle, int *chk0,
				int x1, int x2, int y1, int y2, int n, int m)
{
	char angle0[100];
	int cpy_angle = 0;
	if (cnt == 0) {
		cpy_angle = k;
		for (int i = cpy_angle + 1; ins[i] != '\0'; i++) //parcurg instructiunea
			angle0[i - cpy_angle - 1] = (int)ins[i]; //si iau valoarea unghiului
		for (int i = 0; angle0[i] != '\0'; i++)
			if (angle0[i] == '\n') {
				k = i; break;
			}
		angle0[k] = '\0';
		*angle = atoi(angle0); //convertesc valoarea din char in int

		if ((*angle >= 90 && *angle <= 270 && *angle % 90 == 0) ||
		    (*angle <= -90 && *angle >= -270 && *angle % 90 == 0)) {
			if ((x1 == 0 && y1 == 0 && x2 == m && y2 == n) ||
				(x1 == 0 && y1 == 0 && x2 == n && y2 == m)) {
				*chk0 = 1;
			} else if ((x2 - x1) == (y2 - y1)) {
				*chk0 = 2;
			} else {
				printf("The selection must be square\n");
			}
		} else if ((*angle == 360) || (*angle == -360) || (*angle == 0)) {
			printf("Rotated %d\n", *angle);
		} else {
			printf("Unsupported rotation angle\n");
		}
	} else if (cnt != 0) {
		printf("No image loaded\n");
	}
}

void find_filename(int k, char *ins, char *file1)
{
	for (int i = k + 1; ins[i] != '\0'; i++) //parcurg instructiunea
		file1[i - k - 1] = ins[i]; //si salvez numele fisierului

	for (int i = 0; file1[i] != '\0'; i++) {
		if (file1[i] == '\n') {
			k = i; break;
		}
	}
	file1[k] = '\0';
}

int find_instruction(char *instr, char *ins, int k)
{
	int i = 0;
	for (i = 0; i < k; i++) //parcurg instructiunea
		instr[i] = ins[i]; //si salvez tipul comenzii
	instr[k] = '\0';
	return *instr;
}

int main(void)
{
int k, angle = 0, **mat, **mat2 = {0}, cnt = 1, m = 0, n = 0, x1 = 0, x2 = 0,
y1 = 0, y2 = 0, p = 0, cnt2 = 0, cnt3 = 0, max, i = 0, aux, chk = 0, chk0 = 0;
char instr[100], ins[100], file1[100], file2[100], magic_word[100], ascii[100];
x2 = m, y2 = n;
for (int l = 0;; l++) {
	fgets(ins, 1000, stdin);
	for (i = 0; ins[i] != '\0'; i++) {
		if ((ins[i] == ' ') || (ins[i] == '\n')) {
			k = i; break;
		}
	}
find_instruction(instr, ins, k);
	if (strncmp(instr, "LOAD", strlen(instr)) == 0) {
		find_filename(k, ins, file1), load(file1, &cnt, n, mat);
		if (cnt == 0) {
			mat = read(file1, &n, &m, &p, magic_word, &max);
			x1 = 0, y1 = 0, x2 = m, y2 = n;
		}
	} else if ((strncmp(instr, "SELECT", strlen(instr)) == 0) &&
				(strncmp(ins, "SELECT ALL", 9) != 0)) {
		select_values(&x1, &x2, &y1, &y2, ins, k, cnt, n, m);
	} else if ((strncmp(ins, "SELECT ALL", 9) == 0) && (cnt == 0)) {
		x1 = 0, x2 = m, y1 = 0, y2 = n, printf("Selected ALL\n");
	} else if ((strncmp(ins, "SELECT ALL", 9) == 0) && (cnt != 0)) {
		printf("No image loaded\n");
	} else if (strncmp(instr, "ROTATE", strlen(instr)) == 0) {
		find_angle(k, cnt, ins, &angle, &chk0, x1, x2, y1, y2, n, m);
			if (chk0 == 1) {
				if (p == 0)
					mat = rot_all_gr(angle, mat, n, m, p, &cnt2);
				else if (p == 1)
					mat = rot_all_cl(angle, mat, n, m, p, &cnt3);
				printf("Rotated %d\n", angle), chk0 = 0;
				if (angle == 180 || angle == -180)
					cnt3 = 0, cnt2 = 0, x1 = 0, y1 = 0, x2 = m, y2 = n;
				else
					x1 = 0, y1 = 0, aux = m, m = n, n = aux, y2 = n, x2 = m;
			} else if (chk0 == 2) {
				if (p == 0)
					mat = rot_gr(x1, x2, y1, y2, angle, mat, n, m, p);
				else if (p == 1)
					mat = rot_cl(x1, x2, y1, y2, angle, mat, p, cnt3);
				printf("Rotated %d\n", angle), chk0 = 0;
			}
	} else if (strncmp(instr, "GRAYSCALE", strlen(instr)) == 0) {
		mat = grayscale(x1, x2, y1, y2, mat, cnt, p);
	} else if (strncmp(instr, "SEPIA", strlen(instr)) == 0) {
		mat = sepia(x1, x2, y1, y2, mat, cnt, p);
	} else if (strncmp(instr, "CROP", strlen(instr)) == 0) {
		if (cnt == 0) {
			mat = crop(x1, x2, y1, y2, mat, n, p, mat2);
			printf("Image cropped\n");
			n = (y2 - y1), m = (x2 - x1), x1 = 0, y1 = 0, y2 = n, x2 = m;
		} else if (cnt != 0) {
			printf("No image loaded\n");
		}
	} else if ((strncmp(instr, "SAVE", strlen(instr)) == 0)) {
		find_ascii(cnt, ins, file2, ascii, k, &chk);
		if (chk == 1) {
			chk = 0;
			if (strcmp(ascii, "ascii\n") == 0) {
				for (int i = 0; ascii[i] != '\0'; i++)
					ascii[i] = '\0';
				mat = save(file2, mat, magic_word, m, n, max);
				printf("Saved %s\n", file2);
			} else {
				mat = save_b(file2, mat, magic_word, m, n, max);
				printf("Saved %s\n", file2);
			}
		}
	} else if (strncmp(ins, "EXIT", 4) == 0 || strcmp(instr, "EXIT") == 0) {
		if (cnt == 0) {
			free_matrix(n, mat); break;
		} else if (cnt != 0) {
			printf("No image loaded\n"); break;
		}
	} else {
		printf("Invalid command\n");
	}
}

	return 0;
}

