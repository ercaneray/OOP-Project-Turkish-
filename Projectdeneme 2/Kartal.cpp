/*
Eray
Ercan
Ataturk Universitesi, Muhendislik Fakultesi, Bilgisayar Muhendisligi Bolumu
PROGRAMLAMA PROJESI 1
MBM 104: Nesneye Yonelik Programlama - Bahar 2023
Dr. Ogr. Uyesi Ahmet COSKUNCAY
*/
#include "Kartal.h"
using namespace std;
#include <string>
Kartal::Kartal(string ad, string tur, int yas, int kanatAcikligi) :Hayvan(ad, tur, yas)//Hayvandan miras aldigimiz degerlerli kullandigimiz Kartal yapicisi.
{
	kanatAcikligi = KanatAcikligi;
}
string Kartal::yemek()
{
	return "kuzu";//Bu hayvan turune ozel beslenme cesidi.
}