#include<iostream>
#include<conio.h>
using namespace std;

void StringCopyNCharacters(char String1[], char String2[], int i, int n);

void main()
{
	const int SIZE = 80;
	char String1[SIZE] = {};
	char String2[SIZE] = {};
	int Index = 0;
	int Characters = 0;


	cout << "Please Enter Value Of String 1:- ";
	cin.getline(String1, SIZE, '\n');
	cout << "Please Enter Value Of String 2:- ";
	cin.getline(String2, SIZE, '\n');
	cout << "Please Enter The Starting Index:- ";
	cin >> Index;
	cout << "Please Enter The Number Of Characters:- ";
	cin >> Characters;

	StringCopyNCharacters(String1, String2, Index, Characters);
	_getch();
}
void StringCopyNCharacters(char String1[], char String2[], int i, int n)
{
	if (i<0 || n<0)
		cout << "Please Enter Correct Number Of Characters" << endl;
	else if (i == n  && String1[i + 1] == '\0')
	{
		cout << "No Further Characters Found";
		String2[0] = '\0';
	}
	else
	{
		cout << "Charaters Copied: ";
		int a = 0;
		for (int b = i; b<i + n; b++)
		{
			String2[a] = String1[b];
			++a;
			String2[a] = '\0';
		}
		for (int c = 0; String2[c] != '\0'; c++)
		{
			cout << String2[c];
		}
	}
}