/*
Eray
Ercan
190757031
Ataturk Universitesi, Muhendislik Fakultesi, Bilgisayar Muhendisligi Bolumu
PROGRAMLAMA PROJESI 1
MBM 104: Nesneye Yonelik Programlama - Bahar 2023
Dr. Ogr. Uyesi Ahmet COSKUNCAY
*/
#include "Aslan.h"
using namespace std;
#include <string>
Aslan::Aslan(string ad, string tur, int yas, string renk) :Hayvan(ad, tur, yas)//Hayvandan miras aldigimiz degerlerli kullandigimiz Aslan yapicisi.
{

	renk = Renk;
}
string Aslan::yemek()//Bu hayvan turune ozel beslenme cesidi.
{
	return "et";
}