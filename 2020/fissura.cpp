#include <iostream>
#include <string>
using namespace std;

bool validate(string lines[], int n, int len, int f);
int convert(char n);

int main()
{
	int n, f;
	cin >> n >> f;

	string lines[n];

	for (int i = 0; i < n; i++)
	{
		cin >> lines[i];
	}

	int len = sizeof(lines) / sizeof(lines[0]);

	if (convert(lines[0][0]) <= f)
	{
		lines[0][0] = '*';

		bool isComplete = false;

		while (!isComplete)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (lines[i][j] == '*')
					{

						if (i <= len - 2 && convert(lines[i + 1][j]) <= f)
						{
							lines[i + 1][j] = '*';
						}

						if (i >= 1 && convert(lines[i - 1][j]) <= f)
						{
							lines[i - 1][j] = '*';
						}

						if (j <= len - 2 && convert(lines[i][j + 1]) <= f)
						{
							lines[i][j + 1] = '*';
						}

						if (j >= 1 && convert(lines[i][j - 1]) <= f)
						{
							lines[i][j - 1] = '*';
						}
					}
				}
			}

			isComplete = validate(lines, n, len, f);
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << lines[i] << endl;
	}

	return 0;
}

bool validate(string lines[], int n, int len, int f)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (lines[i][j] != '*' && convert(lines[i][j]) <= f)
			{
				if (i <= len - 2 && lines[i + 1][j] == '*')
				{
					return false;
				}

				if (i >= 1 && lines[i - 1][j] == '*')
				{
					return false;
				}

				if (j <= len - 2 && lines[i][j + 1] == '*')
				{
					return false;
				}

				if (j >= 1 && lines[i][j - 1] == '*')
				{
					return false;
				}
			}
		}
	}

	return true;
}

int convert(char n)
{
	return n - '0';
}