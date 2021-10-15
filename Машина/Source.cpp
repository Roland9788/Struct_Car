#include <iostream>
#include <cstring>
using namespace std;

struct Signs
{
	char color[30];
	char model[40];
	char Number[8];
};

int main()
{
	setlocale(LC_ALL, "Rus");

	const int N = 10; //��� �� �����
	Signs car[N];

	int flag = 0;
	for (int i = 0; i < N; i++)
	{
		cout << "������� ����� " << i + 1<< " ������ �� 8 ��������\n"; // ��� �������
		cin >> car[i].Number;
		do
		{
			if (strlen(car[i].Number) > 8)
			{
				cout << "�������� ����\n";
				cout << "������� ����� " << i + 1 << " ������ �� 8 ��������\n"; // ��� �������
				cin >> car[i].Number;
			}
			else
			{
				flag = 1;
			}
		} while (flag == 0);


		cout << "\n������� ���� " << i + 1 << " ������\n"; // ��� �������
		cin >> car[i].color;
		cout << "\n������� ������ " << i + 1 << " ������\n"; // ��� �������
		cin >> car[i].model;

	}
	cout << "\n";

	for (int i = 0; i < N - 1; i++)
	{
		cout << "\n������ � " << i + 1 << "\n";
		cout << " ����� " << car[i].Number << "\n";
		cout << " ���� " << car[i].color << "\n";
		cout << " ������ " << car[i].model << "\n";
	}

	char searchNumber[8];
	int Choice;
	int flag2;
	do 
	{

		cout << "\n����� ������ ������� '1' \n";
		cout << "\n����� �������������� ������ ������� '2'\n";
		cout << "\n������� ������ ���� ����� ������� '3' \n";
		cout << "\n��������� ������ ��������� ������� '0' \n";
		cin >> Choice;
		if (Choice == 1)
		{
			bool y = false;
			for (int i = 0; i < 1; i++)
			{
				cout << "������� ����� ������ ������� ������ �����\n"; // ��� �������
				cin >> searchNumber;
				do
				{
					if (strlen(searchNumber) > 8)
					{
						cout << "�������� ����\n";
						cout << "������� ����� ������ ������� ������ �����\n"; // ��� �������
						cin >> searchNumber;
					}
					else
					{
						flag2 = 1;
					}
				} while (flag2 == 0);

				for (int j = 0; j < N; j++)
				{
					for (int k = 0; k < 8; k++)
					{
						if (searchNumber[k] == car[j].Number[k])
						{
							y=true;
						}
						else
						{
							y = false;
							break;
						}
					}
					if (y == true)
					{
						cout << " ����� " << car[j].Number << "\n";
						cout << " ���� " << car[j].color << "\n";
						cout << " ������ " << car[j].model << "\n";
						break;
					}
				}
			}
			cout << "\n";
		}


		if (Choice == 2)
		{
			bool y1 = false;
			cout << "\n����� �������������� ������ \n";
			int x;
			int flag1 = 0;
			for (int i = 0; i < N; i++)
			{
				cout << "������� ����� ������ ������� ������  ���������������\n";  // ��� �������
				cin >> searchNumber;
				do
				{
					if (strlen(searchNumber) > 8)
					{
						cout << "�������� ����\n";
						cout << "������� ����� ������ ������� ������ �����\n"; // ��� �������
						cin >> searchNumber;
					}
					else
					{
						flag1 = 1;
					}
				} while (flag1 == 0);

				for (int f = 0; f < N; f++)
				{
					for (int h = 0; h < 8; h++)
					{
						if (searchNumber[h] == car[f].Number[h])
						{
							y1 = true;
						}
						else
						{
							y1 = false;
							break;
						}
					}
					if (y1 == true)
					{
						cout << " ����� " << car[f].Number << "\n";
						cout << " ���� " << car[f].color << "\n";
						cout << " ������ " << car[f].model << "\n";

						cout << "�������� ��� ������ ���������������. ��� �� ��������������� ����� ������� 1, ���� - 2, ������ - 3 \n";
						cin >> x;
						if (x == 0)
						{
							break;
						}

						if (x == 1)
						{
							cout << " ����� " << car[f].Number;
							cout << "\n������� ����� ����� ������ �� 8 ��������\n";
							cin >> car[f].Number;
							do
							{
								if (strlen(car[f].Number) > 8)
								{
									cout << "�������� ����\n";
									cout << "������� ����� ����� ������ �� 8 ��������\n";
									cin >> car[f].Number;
								}
								else
								{
									flag1 = 1;
								}
							} while (flag1 == 0);

							cout << "\n����� ������� ��������������!\n";
							cout << " ����� " << car[f].Number << "\n";
							cout << " ���� " << car[f].color << "\n";
							cout << " ������ " << car[f].model << "\n";
							break;
						}

						if (x == 2)
						{
							cout << " ���� " << car[f].color;
							cout << "\n������� ����� ���� ������\n";
							cin >> car[f].color;

							cout << "\n���� ������� ��������������!\n";
							cout << " ����� " << car[f].Number << "\n";
							cout << " ���� " << car[f].color << "\n";
							cout << " ������ " << car[f].model << "\n";
							break;
						}

						if (x == 3)
						{
							cout << " ������ " << car[f].model;
							cout << "\n������� ����� ������ ������\n";
							cin >> car[f].model;

							cout << "\n������ ������� ���������������!\n";
							cout << " ����� " << car[f].Number << "\n";
							cout << " ���� " << car[f].color << "\n";
							cout << " ������ " << car[f].model << "\n";
							break;
						}
						if (y1 == true)
						{
							break;
						}
					}
					if (y1 == true)
					{
						break;
					}
				}
				if (y1 == true)
				{
					break;
				}
			}
			cout << "\n";
		}


		if (Choice == 3)
		{
			for (int i = 0; i < N-1; i++)
			{
				cout << "\n������ � " << i + 1 << "\n";
				cout << " ����� " << car[i].Number << "\n";   
				cout << " ���� " << car[i].color << "\n";
				cout << " ������ " << car[i].model << "\n";
			}

		}
		
		if (Choice == 0)
		{
			return 0;
		}

	} while (Choice > 0);

	return 0;
}