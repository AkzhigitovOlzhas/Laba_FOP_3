#include<iostream>
#include<ctime>
#include<iomanip>
#include <cmath>
using namespace std;

double f1(double arr[],int n);
void f2(double row1, double col1, double col2, double **a, double **b, double **c);
void out_task();
int f3(int arr[6][6]);
int f4(int array[6][9]);
int f5(int **arr,int n);
int f6(int **arr,int n);
void f7(int n, int a, int b,int *arr);
int main() {
	setlocale(0, "ru");
	srand(time(NULL));
	//������ �������
	/*int n = 0;
	cout << "������� ������ �������: ";
	cin >> n;
	double *arr = new double [n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "���������:" << f1(arr, n) << endl;*/

	//������ �������
	//out_task();

	//������ �������
	/*const int n = 6, m = 6;
	int arr[n][m];
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			arr[i][j] = rand() % 20;
			cout << setw(3) << arr[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "���������� ����� � ������: " << f3(arr) << endl;*/

	//��������� �������
	/*int array[6][9];
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 9; j++) {
			array[i][j] = 20+rand() % 100;
			cout <<setw(3) << array[i][j] << " ";
		}
		cout <<setw(3) << endl;
	}
	cout << "������� �������������� ����������� � ����������� ��������: " << f4(array) << endl;*/

	//����� �������
	/*int n;
	cout << "������� ������������ ������� : ";
	cin >> n;
	int **arr = new int *[n];

	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			
			arr[i][j] = -70+rand() % 100;
			cout<<setw(3) << arr[i][j]<<"  ";
		}
		cout << endl;
	}
	cout << "���������� ����� �� ������: " << f5(arr,n) << endl;*/

	//������ �������
	/*int n = 0;
	cout << "�������  ����������� �������: "; cin >> n;
	int **arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int [n];
	}
	
	bool check = false;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++){
			arr[i][j] = rand() % 40;
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << f6(arr, n) << endl;*/
	//������� �������
	int n = 0;
	int a = 0, b = 0, c = 0,kol=0;
	cout<< "������� ������ �������: " << endl;
	cin >> n;
	cout << "������� C: "; cin >> c;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = -25+rand()  % 50;
		cout << arr[i] << "  ";
		if (arr[i] < c) {
			kol += 1;
		}
	}
	cout << endl << "������� a � b : "; cin >> a >> b;
	f7(n, a, b, arr); // <== ����� �������
	cout << endl << "���������� ��������� �������, ������� �: " << kol << endl;
	
	cout << endl;
	system("pause");
	return 0;
}

//������ �������
//1. ��� ���������� ������.�������� �������, ������������
//�����������, ������������ �������� ������� �  ������� ��������������
//������������ � ������������� ���������.����� ����, ��������� ������
//����� ������� ����� ����������� ������� � ������� ������.
double f1(double arr[],int n) {
	double max = arr[0], min = arr[0];
	for (int i = 1; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return (max + min) / 2;
}

//������ �������
//2. �������� ������� ������������ ������ � �������� n�m � �
//�������� m�l.�������� �������������� ������� �������� � �������
//��������� �������.������� ������ ���� �������������.
void f2(double row1, double col1, double col2, double **a, double **b, double **c) {
	// ��������� ������
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < col1; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
}
void out_task() {
	int row1, row2, col1, col2;
	double** a, ** b, ** c;
	system("cls");
	cout << "������� ���������� ����� ������ �������: ";
	cin >> row1;
	cout << "������� ���������� �������� ������ �������: ";
	cin >> col1;
	cout << "������� ���������� ����� ������ �������: ";
	cin >> row2;
	cout << "������� ���������� �������� ������ �������: ";
	cin >> col2;
	if (col1 != row2)
	{
		cout << "��������� ����������!";
	}
	
	//������������� ������� A
	a = new double*[row1];
	for (int i = 0; i < row1; i++)
	{
		a[i] = new double[col1];
		for (int j = 0; j < col1; j++)
		{
			a[i][j] = rand() % 10;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	

	//������������� ������� B
	b = new double*[row2];
	cout << "������� �������� ������ �������" << endl;
	for (int i = 0; i < row2; i++)
	{
		b[i] = new double[col2];
		for (int j = 0; j < col2; j++)
		{
			b[i][j] = rand() % 10;
			cout << b[i][j] << " ";
		}
		cout << endl;
	}

	//���������� ������� �
	c = new double*[row1];
	for (int i = 0; i < row1; i++)
	{
		c[i] = new double[col2];
	}

	//����� ������� ���������
	f2(row1, col1, col2, a, b, c);

	// ����� ������� ������������
	cout << "������� ������������" << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col2; j++)
			cout <<setw(4)<< c[i][j] << " ";
		cout << endl;
	}

}
//������ �������
//3.�������� ������� ���������� ����� ���������
//������ ������ ������� � �������� 6�6, ����������� �����������
//�������� ���� ����.
int f3(int arr[6][6]) {
	int sum = 0, max = 0;
	for (int i = 0; i < 6; i++) {
		sum = 0;
		for (int j = 0; j < 6; j++) {
			sum += arr[i][j];
		}
		if (max < sum) {
			max = sum;
		}

	}
	return max;
}
	
//��������� �������
//4. ���� �������������� ������� ������� 6�9.����� �������
//�������������� ����������� � ����������� �������� �� ���������.
//��������� ������ ���� ���������� � �������������� �������.
int f4(int array[6][9]) {
	int max = array[0][0], min = array[0][0];
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 9; j++) {
			if (min > array[i][j])
				min = array[i][j];
			if (max < array[i][j])
				max = array[i][j];
		}
	}
	cout << endl << "���������� �������: " << max << endl;
	cout << "���������� �������: " << min << endl;
	return (max + min) / 2;
}
//����� �������
//5. � ���������� ������� ������� mxn ����� �������� �����������
//�� ������ �������� �������, � ����� ���������� ������� ����� ��������.
//��������������, ��� ����� ������� - ������������.��������� ������ ����
//���������� � �������������� �������.
int f5(int **arr,int s) {
	int ind1 = 1, ind2 = 1;
	int max = arr[0][0];
	for (int i = 1; i < s; i++) {
		for (int j = 1; j < s; j++) {
			if (abs(arr[i][j])>max) {
				max=arr[i][j];
				ind1 = i;
				ind2 = j;
			}
		}
	}
	cout << "\nIndex[" << ind1 << "]" << "[" << ind2 << "]" << endl;
	return max;
}

//������ �������
//6. � ������ �������������� ���������� ������� ������� N �����
//����� ��������� ������, � ������� ���������� ������� � ����������
//���������.��������������, ��� ����� ������� ������������.���������
//������ ���� ���������� � �������������� �������.
int f6(int **arr,int n) {
	int sum = 0, ind_str = 0,min=arr[0][0];
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (min >= arr[i][j]) {
				min = arr[i][j];
				ind_str = i;
			}

		}	
	}
	for (int i = ind_str; i <= ind_str; i++) {
		for (int j = 0; j < n; j++) {
			sum += arr[i][j];
		}
	}
	cout<<"������ � ����������� ���������:" << ind_str+1 << endl;
	return sum;
}
//7.� ���������� �������, ��������� �� n ������������ �����,
//���������:
//�) ���������� ��������� �������, ������� �;
//�) ����� ������������� ���������, ������������� ����� �������
//�������������� ��������.
//������������� ������ ����� �������, ����� ������� �������������
//��� ��������, ����� ����� ������� ����� � ���������[a, b], � ����� � ���
//���������.
//��������� ������ ���� ���������� � �������������� �������.
void f7(int n, int a, int b,int *arr) {
	for (int i = 0; i < n; i++)
	{

		if (a <= arr[i] && b >= arr[i]) {
			cout << arr[i] << "  ";
		}

	}
	for (int i = 0; i < n; i++)
	{
		if (!(a <= arr[i] && b >= arr[i])) {
			cout << arr[i] << "  ";
		}

	}
}
