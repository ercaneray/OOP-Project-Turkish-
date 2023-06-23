/*
Eray
Ercan
190757031
Ataturk Universitesi, Muhendislik Fakultesi, Bilgisayar Mühendisligi Bolumu
PROGRAMLAMA PROJESI 1
MBM 104: Nesneye Yonelik Programlama - Bahar 2023
Dr. Ogr. Uyesi Ahmet COSKUNCAY
*/
#include "Hayvan.h"
using namespace std;
#include <iostream>

Hayvan::Hayvan(string ad, string tur, int yas)//Hayvan yapici fonksiyonu.
{
	Ad = ad; Tur = tur; Yas = yas;
}

string Hayvan::getAd()
{
	return(Ad);//Ad geriye donduren fonksiyon.
}

string Hayvan::yemek()
{
	return "yem";//Varsayilan beslenme bicimini geriye donduren fonksiyon.
}
int Hayvan::getYas()
{
	return Yas;//Yas geriye donduren fonksiyon.
}
string Hayvan::getTur()
{
	return Tur;//Tur geriye donduren fonksiyon.
}