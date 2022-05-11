#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int number = 0;
	int n = 0;
	int k = 0;
	cin >> number >> n >> k;
	int bitMask1 = 1 << n; // ≈диницу сместили на n бит
	int bitMask2 = 1 << k; // ≈диницу сместили на k бит
	int b1 = number & bitMask1; // Ќаходим бит b1 , который стоит на n-ом месте в двоичной записи числа
	int bn = b1 >> n; // ѕереводим этот бит в самое начало
	int b2 = number & bitMask2; // Ќаходим бит b2, который стоит на k-ом месте в двоичной записи числа
	int bk = b2 >> k; // ѕереводим этот бит в самое начало
	int bit = number & 0; //   аждое число двоичной записи числа number замен€ем нул€ми
	bit = bit | bitMask1; // —тавим на n-ое место единицу
	bit = bit | bitMask2; // —тавим на k-ое место единицу
	int invbit = ~bit; // »нвертируем 
	invbit = invbit & number; // ѕеремножаем побитово, при этом все биты числа number, кроме битов n и k, сохран€ютс€, а на месте n-го и k-го битов сто€т нули
	bn = bn << k; // —мещение бита b1  на k битов влево
	bk = bk << n; // —мещение бита b2  на n битов влево
	int answer = invbit | bn; //   “еперь вместо пустых мест в двоичной записи числа number на n-ое место ставим бит b2
	answer = answer | bk; //                                                                   , а на k-ое место бит b1
	cout << answer;
	return EXIT_SUCCESS;
}