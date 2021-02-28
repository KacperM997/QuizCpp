#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

class Pytania
{
public:
	string pytanie;
	string odp1;
	string odp2;
	string odp3;
};
bool Pytanie1(Pytania pytanie1);
bool Pytanie2(Pytania pytanie2);
bool Pytanie3(Pytania pytanie3);
bool Pytanie4(Pytania pytanie4);
bool Pytanie5(Pytania pytanie5);
bool Pytanie6(Pytania pytanie6);
bool odpowiedzi(int wlasciwa);
int abc(int nrpytania, int i, int pierwsza_wylosowana);

int main()
{
	setlocale(LC_ALL, "");
	unsigned int punkty = 0;

	Pytania pytanie1;
	pytanie1.pytanie = "1.Czy mo¿na zamieœciæ na swojej stronie internetowej nocne zdjêcie z wycieczki do Pary¿a z wie¿¹ Eiffla w tle ?";
	pytanie1.odp1 = "Tak mo¿na, nie jest to ³amamanie prawa.  R";//poprawna
	pytanie1.odp2 = "Nie, nie mo¿na nigdy. ";
	pytanie1.odp3 = "Tak, o ile s¹ to nasze zdjêcia.";
	Pytania pytanie2;
	pytanie2.pytanie = "2.Do czego s³u¿y strona pod adresem www.tinypng.com ?";
	pytanie2.odp1 = "Automatyczna korekta kolorów.";
	pytanie2.odp2 = "Kompresja plików JPG i PNG.    R";//poprawna
	pytanie2.odp3 = "Wycinanie t³a ze zdjêæ.";
	Pytania pytanie3;
	pytanie3.pytanie = "3.Który z wymienionych serwisów jest p³atnym bankiem zdjêæ ?";
	pytanie3.odp1 = "Google.com";
	pytanie3.odp2 = "Pixabay.com";
	pytanie3.odp3 = "Shutterstock.com   R";//poprawna
	Pytania pytanie4;
	pytanie4.pytanie = "4.Czy mo¿na wykorzystywaæ na swojej stronie internetowej utwory nale¿¹ce do domeny publicznej ?";
	pytanie4.odp1 = "Tak, mo¿na.    R";//poprawna
	pytanie4.odp2 = "Nie mo¿na.";
	pytanie4.odp3 = "Mo¿na, ale po uiszczeniu odpowiedniej op³aty.";
	Pytania pytanie5;
	pytanie5.pytanie = "5.Czy licencja systemu Creative Commons z oznaczeniem CC BY wymaga poinformowania o twórcy wykorzystywanego dzie³a(np.zdjêcia, filmu, utworu muzycznego) ?";
	pytanie5.odp1 = "Nie.";
	pytanie5.odp2 = "Tak.   R";//poprawna
	pytanie5.odp3 = "Tak, ale tylko komercyjnie.";
	Pytania pytanie6;
	pytanie6.pytanie = "6. Dlaczego Pa³ac Kultury i Nauki zosta³ cyfrowo wyciêty ze spotu z udzia³em Mela Gibsona nakrêconego z okazji 100-lecia odzyskania niepodleg³oœci";
	pytanie6.odp1 = "Poniewa¿ nie pasowa³ do wizji artystycznej twórcy.";
	pytanie6.odp2 = "Poniewa¿ mia³ zostaæ wyburzony.";
	pytanie6.odp3 = "Aby nie mieæ problemów z ewentualnymi op³atami.    R";//poprawna

	int nr_pytania;
	int tablica[6] = { 0 };
	int index = 0;

	srand(time(NULL));

	while (index < 6)
	{
	losuj:
		nr_pytania = rand() % 6 + 1;

		for (int i = 0; i < 6; i++)
			if (tablica[i] == nr_pytania)
				goto losuj;

		tablica[index] = nr_pytania;

		switch (nr_pytania)
		{
		case 1:
			if (Pytanie1(pytanie1))
				punkty++;
			break;
		case 2:
			if (Pytanie2(pytanie2))
				punkty++;
			break;
		case 3:
			if (Pytanie3(pytanie3))
				punkty++;
			break;
		case 4:
			if (Pytanie4(pytanie4))
				punkty++;
			break;
		case 5:
			if (Pytanie5(pytanie5))
				punkty++;
			break;
		case 6:
			if (Pytanie6(pytanie6))
				punkty++;
			break;
		default:
			break;
		}
		index++;
		cout << "\n\n-----------------------------\n" << endl;
	}
	cout << "\n\nPunkty zdobyte ³¹cznie: "<<punkty<<"!"<<endl;
}
bool Pytanie1(Pytania pytanie1)
{
	int nr_pytania = 0, wlasciwa = 0, pierwsza_wylosowana = 0;
	cout << pytanie1.pytanie << endl;

	for (int i = 1; i <= 3; i++)
	{
		nr_pytania = abc(nr_pytania, i, pierwsza_wylosowana);

		if (i == 1)
			pierwsza_wylosowana = nr_pytania;

		switch (nr_pytania)
		{
		case 1:
			cout << pytanie1.odp1 << endl;
			wlasciwa = i;
			break;
		case 2:
			cout << pytanie1.odp2 << endl;
			break;
		case 3:
			cout << pytanie1.odp3 << endl;
		default:
			break;
		}
	}
	return odpowiedzi(wlasciwa);
}
bool Pytanie2(Pytania pytanie2)
{
	int nr_pytania = 0, wlasciwa = 0, pierwsza_wylosowana = 0;
	cout << pytanie2.pytanie << endl;

	for (int i = 1; i <= 3; i++)
	{
		nr_pytania = abc(nr_pytania, i, pierwsza_wylosowana);

		if (i == 1)
			pierwsza_wylosowana = nr_pytania;

		switch (nr_pytania)
		{
		case 1:
			cout << pytanie2.odp1 << endl;
			break;
		case 2:
			cout << pytanie2.odp2 << endl;
			wlasciwa = i;
			break;
		case 3:
			cout << pytanie2.odp3 << endl;
			break;
		default:
			break;
		}
	}
	return odpowiedzi(wlasciwa);
}
bool Pytanie3(Pytania pytanie3)
{
	int nr_pytania = 0, wlasciwa = 0, pierwsza_wylosowana = 0;
	cout << pytanie3.pytanie << endl;

	for (int i = 1; i <= 3; i++)
	{
		nr_pytania = abc(nr_pytania, i, pierwsza_wylosowana);

		if (i == 1)
			pierwsza_wylosowana = nr_pytania;

		switch (nr_pytania)
		{
		case 1:
			cout << pytanie3.odp1 << endl;
			break;
		case 2:
			cout << pytanie3.odp2 << endl;
			break;
		case 3:
			cout << pytanie3.odp3 << endl;
			wlasciwa = i;
			break;
		default:
			break;
		}
	}
	return odpowiedzi(wlasciwa);
}
bool Pytanie4(Pytania pytanie4)
{
	int nr_pytania = 0, wlasciwa = 0, pierwsza_wylosowana = 0;
	cout << pytanie4.pytanie << endl;

	for (int i = 1; i <= 3; i++)
	{
		nr_pytania = abc(nr_pytania, i, pierwsza_wylosowana);

		if (i == 1)
			pierwsza_wylosowana = nr_pytania;

		switch (nr_pytania)
		{
		case 1:
			cout << pytanie4.odp1 << endl;
			wlasciwa = i;
			break;
		case 2:
			cout << pytanie4.odp2 << endl;
			break;
		case 3:
			cout << pytanie4.odp3 << endl;
			break;
		default:
			break;
		}
	}
	return odpowiedzi(wlasciwa);
}
bool Pytanie5(Pytania pytanie5)
{
	int nr_pytania = 0, wlasciwa = 0, pierwsza_wylosowana = 0;
	cout << pytanie5.pytanie << endl;

	for (int i = 1; i <= 3; i++)
	{
		nr_pytania = abc(nr_pytania, i, pierwsza_wylosowana);

		if (i == 1)
			pierwsza_wylosowana = nr_pytania;

		switch (nr_pytania)
		{
		case 1:
			cout << pytanie5.odp1 << endl;
			break;
		case 2:
			cout << pytanie5.odp2 << endl;
			wlasciwa = i;
			break;
		case 3:
			cout << pytanie5.odp3 << endl;
			break;
		default:
			break;
		}
	}
	return odpowiedzi(wlasciwa);
}
bool Pytanie6(Pytania pytanie6)
{
	int nr_pytania = 0, wlasciwa = 0, pierwsza_wylosowana = 0;
	cout << pytanie6.pytanie << endl;

	for (int i = 1; i <= 3; i++)
	{
		nr_pytania = abc(nr_pytania, i, pierwsza_wylosowana);

		if (i == 1)
			pierwsza_wylosowana = nr_pytania;

		switch (nr_pytania)
		{
		case 1:
			cout << pytanie6.odp1 << endl;
			break;
		case 2:
			cout << pytanie6.odp2 << endl;
			break;
		case 3:
			cout << pytanie6.odp3 << endl;
			wlasciwa = i;
			break;
		default:
			break;
		}
	}
	return odpowiedzi(wlasciwa);
}
bool odpowiedzi(int wlasciwa)
{
	char tab = 'X';
	if (wlasciwa == 1)
		tab = 'A';
	else if (wlasciwa == 2)
		tab = 'B';
	else if (wlasciwa == 3)
		tab = 'C';

	char odp;
	cout << "Wybierz odpowiedŸ: ";
wpisywanie_odpowiedzi:
	odp = _getch();
	odp = toupper(odp);
	if (tab == odp)
	{
		cout << odp;
		return true;
	}
	else 
	{
		switch (odp)
		{
		case 'A':
			cout << odp;
			return false;
			break;
		case 'B':
			cout << odp;
			return false;
			break;
		case  'C':
			cout << odp;
			return false;
			break;
		default:
			cout << odp<<" - b³êdne dane!" << endl;
			cout << "Podaj odpowiedŸ jeszcze raz:  ";
			goto wpisywanie_odpowiedzi;
			return false;
		}
	}
}
int abc(int nrpytania, int i, int pierwsza_wylosowana)
{
	int numer;
	if (i != 3)
	{
		if (i == 1)
			cout << "A) ";
		else if (i == 2)
			cout << "B) ";
	losujabc:
		numer = rand() % 3 + 1;
		for (int j = 0; j < 3; j++)
			if (nrpytania == numer)
				goto losujabc;
	}
	else
	{
		cout << "C) ";
		numer = 6 - nrpytania - pierwsza_wylosowana;
	}	
	return numer;
}

