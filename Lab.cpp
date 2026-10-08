#include<iostream>
using namespace std;
void reverseWrod(char Word[], int start, int end)
{
	for (int i = start; i < end; i++)
	{
		swap(Word[start], Word[end]);
		start++;
		end--;
	}
}
void reverseSentence(char paragraph[], int size)
{
	int start = 0;
	for (int i = 0; i <= size; i++)
	{
		if ((paragraph[i] == ' ') || paragraph[i] == '\0')
		{
			reverseWrod(paragraph, start, i - 1);
			start = i + 1;
		}
	}

}

void merge(char matrix1[][100], char matrix2[][100], char array3[][100], int size1, int size2, int size3) {
	for (int i = 0; i < size1; ++i)
	{
		int j = 0;
		while ((array3[i][j] = matrix1[i][j]) != '\0')
		{
			++j;
		}
	}
	for (int i = 0; i < size2; ++i)
	{
		int j = 0;
		while ((array3[size1 + i][j] = matrix2[i][j]) != '\0')
		{
			++j;
		}
	}
}
void print2Darray(char array[][100], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << endl;
	}
}
int main()
{
	int q;
	do
	{
		cout << " Enter Question ";
		cin >> q;
		if (q == 1)
		{
			char p1[] = " This is first Paragraph with no space at start and no space at end ";
			reverseSentence(p1, sizeof(p1));
			cout << p1;
			cout << endl;
			char p2[] = " This is first Paragraph with one space at start and no space at end ";
			reverseSentence(p2, sizeof(p2));
			cout << p2;
			cout << endl;
			char p3[] = " This is first Paragraph with one space at start and one space at end ";
			reverseSentence(p3, sizeof(p3));
			cout << p3;
			cout << endl;
			char p4[] = " this is sparse paragraph ";
			reverseSentence(p4, sizeof(p4));
			cout << p4;
			cout << endl;
			char p5[] = " it is multiple line paragrpah \n second line of paragraph ";
			reverseSentence(p5, sizeof(p5));
			cout << p5;
			cout << endl;
		}
		else if (q == 2)
		{
			char mat1[][100] =
			{
				"This is first line with no space at start and no space at end",
				"This is second line with no space at start and no space at end",
				"third line with no space at start and no space at end"
			};
			char mat2[][100] =
			{
				"random text for mat2",
				"second line of random text for mat2",
				"third line of random text for mat2"
			};
			int mat1_size = sizeof(mat1) / sizeof(mat1[0]);
			int mat2_size = sizeof(mat2) / sizeof(mat2[0]);
			int mat3_size = mat1_size + mat2_size;
			char mat3[5][100];
			merge(mat1, mat2, mat3, mat1_size, mat2_size, mat3_size);
			print2Darray(mat3, mat3_size);

		}
	} while (q != 0);
}