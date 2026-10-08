#include<iostream>
using namespace std;
bool isWhiteSpace(char c)
{
	return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}

int countWords(char paragraph[], int size)
{
	int wordCount = 0;
	bool boundary = false;

	for (int i = 0; i < size; ++i)
	{
		char currentChar = paragraph[i];

		if (!isWhiteSpace(currentChar))
		{
			if (!boundary)
			{
				boundary = true;
				wordCount++;
			}
		}
		else
		{
			boundary = false;
		}
	}

	return wordCount;
}
void merge(char p1[], char p2[], char p3[], int size1, int size2, int size3)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < size1)
	{
		p3[k] = p1[i];
		i++;
		k++;
	}
	while (j < size2)
	{
		p3[k] = p2[j];
		j++;
		k++;
	}
	for (int i = 0; i < size3; i++)
	{
		cout << p3[i];
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
			char p1[] = "This is first paragraph with no space at start and no space at end";
			char p2[] = " This is first paragraph with one space at start and no space at end";
			char p3[] = " This is first paragraph with one space at start and one space at end ";
			char p4[] = " this is a sparse paragraph ";
			char p5[] = " it is multiline paragraph \n second line of paragraph ";
			int word1 = countWords(p1, sizeof(p1 )-1);
			cout << word1 << endl;
			int word2 = countWords(p2, sizeof(p2) - 1);
			cout << word2 << endl; 
			int word3 = countWords(p3, sizeof(p3) - 1);
			cout << word3 << endl;
			int word4 = countWords(p4, sizeof(p4) - 1);
			cout << word4 << endl;
			int word5 = countWords(p5, sizeof(p5) - 1);
			cout << word5 << endl;

		

		}
		else if (q == 2)
		{
			char p1[] = "This is first paragraph with no space at start and no space at end";
			int s1 = sizeof(p1);
			char p2[] = " This is second paragraph with one space at start and no space at end";
			int s2 = sizeof(p2);
			int s3 = s1 + s2 - 1;
			char p3[] = "";
			merge(p1, p2, p3, s1, s2, s3);

		}
	} while (q!=0);
	
}