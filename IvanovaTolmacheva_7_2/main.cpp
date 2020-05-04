#include <iostream>
using namespace std;
#define N 40

void input_mas(int* mas, int& len); // Объявление функции ввода массива в стиле C и С++ с параметрами – имя и длина (по ссылке)
void print_mas(int mas[], int len); // Объявление функции вывода массива в стиле C++ c параметрами – имя и длина
void transform_mas(int* mas, int len);// Объявление функции вывода массива в стиле C c параметрами – имя и длина

int main()
{
	setlocale(LC_ALL, "russian");
	int a1[N], a2[N]; // объявлены два массива
	int n1, n2; // их длины
	// каждый массив вводится, преобразовывается, распечатывается c помощью вызова функций
	input_mas(a1, n1); //ввод массива а1
	transform_mas(a1, n1);//преобразование массива а1
	print_mas(a1, n1);//вывод массива а1
	input_mas(a2, n2); //ввод массива а2
	transform_mas(a2, n2); //преобразование массива а2
	print_mas(a2, n2);//вывод массива а2
	system("pause");
	return 0;
}

//Описания функций
void input_mas(int* mas, int& len) // параметры – имя и длина, функция ввода массива произвольной длины
{
	int* ip;
	//printf("Введите количество элементов массива <%d\n",N);
	cout << "Введите количество элементов массива <= " << N << "\n";
	// N – наибольшая длина
	cin >> len;//scanf("%d",&len);
	cout << "Введите элементы массива\n";//printf("Введите элементы массива\n");
	for (ip = mas; ip < mas + len; ip++)
		cin >> *ip;//scanf("%5d",ip); // признак & не нужен
}
void transform_mas(int* mas, int len)// параметры – имя и длина, функция преобразования массива
{
	int i;
	for (i = 0; i < len; i++)
		mas[i] = mas[i] * 2;
}
void print_mas(int mas[], int len) // параметры – имя и длина, функция вывода массива произвольной длины
{
	int i;
	cout << "Массив:\n";//printf("Массив:\n");
	for (i = 0; i < len; i++)
		cout << mas[i] << " ";//printf("%5d ", mas[i]);
	cout << "\n";//printf("\n");
}

