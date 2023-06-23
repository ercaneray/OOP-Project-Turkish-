/*
Eray
Ercan
190757031
Ataturk Universitesi, Muhendislik Fakultesi, Bilgisayar Muhendisligi Bolumu
PROGRAMLAMA PROJESI 1
MBM 104: Nesneye Yonelik Programlama - Bahar 2023
Dr. Ogr. Uyesi Ahmet COSKUNCAY
*/
#include "Zebra.h"
using namespace std;
#include <string>
Zebra::Zebra(string ad, string tur, int yas, int cizgiSayisi) :Hayvan(ad, tur, yas)//Hayvandan miras aldigimiz degerlerli kullandigimiz Zebra yapicisi.
{
	cizgiSayisi = CizgiSayisi;
}
string Zebra::yemek()//Bu hayvan turune ozel beslenme cesidi.
{
	return "ot";
}