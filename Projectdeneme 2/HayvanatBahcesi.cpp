/*
Eray
Ercan
190757031
Ataturk Universitesi, Muhendislik Fakultesi, Bilgisayar Muhendisligi Bolumu
PROGRAMLAMA PROJESI 1
MBM 104: Nesneye Yonelik Programlama - Bahar 2023
Dr. Ogr. Uyesi Ahmet COSKUNCAY
*/
#include "HayvanatBahcesi.h"
#include <vector>
#include <iostream>
using namespace std;

void HayvanatBahcesi::hayvanEkle(Hayvan* hayvan) {
	hayvanlar.push_back(hayvan);//push_back vector komutu ile vetorun icine hayvan ekliyoruz.
}

void HayvanatBahcesi::hayvanlariGoster() {//Vektor icindeki hayvanlari bastiran fonksiyon.
	cout << "---- Hayvanlar ----" << endl;
	for (int i = 0; i < hayvanlar.size(); i++)//Hayvanlar vektoru icinde dolasmamizi saglayan for dongusu.
	{
		cout << "Ad: " << hayvanlar[i]->getAd() << endl << "Tur: " << hayvanlar[i]->getTur() << endl << "Yas: " << hayvanlar[i]->getYas() << endl;
		cout << "--------------" << endl;
	}

}

void HayvanatBahcesi::hayvanYasGuncelle(string isim, int yeniYas)
{
	for (int i = 0; i < hayvanlar.size(); i++)//Hayvanlar vektoru icinde dolasmamizi saglayan for dongusu.
	{
		if (hayvanlar[i]->getAd() == isim)
		{
			hayvanlar[i]->Yas = yeniYas;//girilen yas degerini yeni yas degeri olarak guncelliyoruz.
			cout << hayvanlar[i]->getAd() << " adli hayvanin yasi " << yeniYas << " olarak guncellendi." << endl;
			break;
		}
	}
}

void HayvanatBahcesi::hayvanBesle(string isim)//Her tur icin farkli deger donduren besleme fonksiyonu.
{
	for (int i = 0; i < hayvanlar.size(); i++)
	{
		if (hayvanlar[i]->getAd() == isim)
		{
			
			cout << hayvanlar[i]->getAd() << " adli hayvan " << hayvanlar[i]->yemek() << " ile beslendi" << endl;
			break;
		}
	}
}
void HayvanatBahcesi::bilgileriListele(string isim)
{
	for (int i = 0; i < hayvanlar.size(); i++)
	{
		if (hayvanlar[i]->getAd() == isim)
		{
			cout << "--Hayvan Bilgileri--\nAd: " << hayvanlar[i]->getAd() << endl;
			cout << "Tur: " << hayvanlar[i]->getTur() << endl;//Hayvan bilgilerini duzenleme yapilabilmesi icin detaylica gosteriyoruz.
			cout << "Yas: " << hayvanlar[i]->getYas() << endl;
		}
	}
}
void HayvanatBahcesi::hayvanAdGuncelle(string isim, string yeniAd)
{
	for (int i = 0; i < hayvanlar.size(); i++)
	{
		if (hayvanlar[i]->getAd() == isim)//girilen isim degerini yeni isim degeri olarak guncelliyoruz.
		{
			cout << hayvanlar[i]->getAd() << " adli hayvanin adi " << yeniAd << " olarak guncellendi." << endl;
			hayvanlar[i]->Ad = yeniAd;
			break;
		}
	}
}