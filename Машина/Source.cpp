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

	const int N = 10; //кол во машин
	Signs car[N];

	int flag = 0;
	for (int i = 0; i < N; i++)
	{
		cout << "Введите Номер " << i + 1<< " машины до 8 символов\n"; // Без пробела
		cin >> car[i].Number;
		do
		{
			if (strlen(car[i].Number) > 8)
			{
				cout << "Неверный ввод\n";
				cout << "Введите Номер " << i + 1 << " машины до 8 символов\n"; // Без пробела
				cin >> car[i].Number;
			}
			else
			{
				flag = 1;
			}
		} while (flag == 0);


		cout << "\nВведите цвет " << i + 1 << " машины\n"; // Без пробела
		cin >> car[i].color;
		cout << "\nВведите модель " << i + 1 << " машины\n"; // Без пробела
		cin >> car[i].model;

	}
	cout << "\n";

	for (int i = 0; i < N - 1; i++)
	{
		cout << "\nМашина № " << i + 1 << "\n";
		cout << " Номер " << car[i].Number << "\n";
		cout << " Цвет " << car[i].color << "\n";
		cout << " Модель " << car[i].model << "\n";
	}

	char searchNumber[8];
	int Choice;
	int flag2;
	do 
	{

		cout << "\nПоиск машины введите '1' \n";
		cout << "\nРежим редактирования машины введите '2'\n";
		cout << "\nВывести список всех машин введите '3' \n";
		cout << "\nЗакончить работу программы введите '0' \n";
		cin >> Choice;
		if (Choice == 1)
		{
			bool y = false;
			for (int i = 0; i < 1; i++)
			{
				cout << "Введите номер машины которую хотите найти\n"; // Без пробела
				cin >> searchNumber;
				do
				{
					if (strlen(searchNumber) > 8)
					{
						cout << "Неверный ввод\n";
						cout << "Введите номер машины которую хотите найти\n"; // Без пробела
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
						cout << " Номер " << car[j].Number << "\n";
						cout << " Цвет " << car[j].color << "\n";
						cout << " Модель " << car[j].model << "\n";
						break;
					}
				}
			}
			cout << "\n";
		}


		if (Choice == 2)
		{
			bool y1 = false;
			cout << "\nРежим редактирования машины \n";
			int x;
			int flag1 = 0;
			for (int i = 0; i < N; i++)
			{
				cout << "Введите номер машины которую хотите  отредактировать\n";  // Без пробела
				cin >> searchNumber;
				do
				{
					if (strlen(searchNumber) > 8)
					{
						cout << "Неверный ввод\n";
						cout << "Введите номер машины которую хотите найти\n"; // Без пробела
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
						cout << " Номер " << car[f].Number << "\n";
						cout << " Цвет " << car[f].color << "\n";
						cout << " Модель " << car[f].model << "\n";

						cout << "Выберите что хотите отредактировать. Что бы отредактировать номер введите 1, Цвет - 2, Модель - 3 \n";
						cin >> x;
						if (x == 0)
						{
							break;
						}

						if (x == 1)
						{
							cout << " Номер " << car[f].Number;
							cout << "\nВведите новый номер машины до 8 символов\n";
							cin >> car[f].Number;
							do
							{
								if (strlen(car[f].Number) > 8)
								{
									cout << "Неверный ввод\n";
									cout << "Введите новый номер машины до 8 символов\n";
									cin >> car[f].Number;
								}
								else
								{
									flag1 = 1;
								}
							} while (flag1 == 0);

							cout << "\nНомер успешно отредактирован!\n";
							cout << " Номер " << car[f].Number << "\n";
							cout << " Цвет " << car[f].color << "\n";
							cout << " Модель " << car[f].model << "\n";
							break;
						}

						if (x == 2)
						{
							cout << " Цвет " << car[f].color;
							cout << "\nВведите новый цвет машины\n";
							cin >> car[f].color;

							cout << "\nЦвет успешно отредактирован!\n";
							cout << " Номер " << car[f].Number << "\n";
							cout << " Цвет " << car[f].color << "\n";
							cout << " Модель " << car[f].model << "\n";
							break;
						}

						if (x == 3)
						{
							cout << " Модель " << car[f].model;
							cout << "\nВведите новую модель машины\n";
							cin >> car[f].model;

							cout << "\nМодель успешно отредактирована!\n";
							cout << " Номер " << car[f].Number << "\n";
							cout << " Цвет " << car[f].color << "\n";
							cout << " Модель " << car[f].model << "\n";
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
				cout << "\nМашина № " << i + 1 << "\n";
				cout << " Номер " << car[i].Number << "\n";   
				cout << " Цвет " << car[i].color << "\n";
				cout << " Модель " << car[i].model << "\n";
			}

		}
		
		if (Choice == 0)
		{
			return 0;
		}

	} while (Choice > 0);

	return 0;
}