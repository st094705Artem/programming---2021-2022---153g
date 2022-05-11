#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int number = 0;
	int n = 0;
	int k = 0;
	cin >> number >> n >> k;
	int bitMask1 = 1 << n; // ������� �������� �� n ���
	int bitMask2 = 1 << k; // ������� �������� �� k ���
	int b1 = number & bitMask1; // ������� ��� b1 , ������� ����� �� n-�� ����� � �������� ������ �����
	int bn = b1 >> n; // ��������� ���� ��� � ����� ������
	int b2 = number & bitMask2; // ������� ��� b2, ������� ����� �� k-�� ����� � �������� ������ �����
	int bk = b2 >> k; // ��������� ���� ��� � ����� ������
	int bit = number & 0; //  ������ ����� �������� ������ ����� number �������� ������
	bit = bit | bitMask1; // ������ �� n-�� ����� �������
	bit = bit | bitMask2; // ������ �� k-�� ����� �������
	int invbit = ~bit; // ����������� 
	invbit = invbit & number; // ����������� ��������, ��� ���� ��� ���� ����� number, ����� ����� n � k, �����������, � �� ����� n-�� � k-�� ����� ����� ����
	bn = bn << k; // �������� ���� b1  �� k ����� �����
	bk = bk << n; // �������� ���� b2  �� n ����� �����
	int answer = invbit | bn; //   ������ ������ ������ ���� � �������� ������ ����� number �� n-�� ����� ������ ��� b2
	answer = answer | bk; //                                                                   , � �� k-�� ����� ��� b1
	cout << answer;
	return EXIT_SUCCESS;
}