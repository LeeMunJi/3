#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int n, m;
	int result = 0;
	cin >> n >> m;

	cout << "N�� ���� " << n << ", " << "M�� ���� " << m << endl;

	while (true)
	{
		for (int i = 0; i <= n; i++)
		{
			if (i % m == 0)
				result += i;
		}
		cout << result;
		return 0;
	}
}
