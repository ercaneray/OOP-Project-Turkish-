/*
Eray
Ercan
Ataturk Universitesi, Muhendislik Fakultesi, Bilgisayar Muhendisligi Bolumu
PROGRAMLAMA PROJESI 1
MBM 104: Nesneye Yonelik Programlama - Bahar 2023
Dr. Ogr. Uyesi Ahmet COSKUNCAY
*/
#pragma once
#ifndef HAYVANATBAHCESI_H
#define HAYVANATBAHCESI_H
#include"Hayvan.h"//Hayvan sinifindaki degerlere ve fonksiyonlara ulasmak icin ekliyoruz.
#include <vector>//hayvan listesinde vector kullanmak icin ekliyoruz.

class HayvanatBahcesi
{
public:
	void hayvanEkle(Hayvan*);//hayvan ekleme fonksiyonu.
	vector<Hayvan*> hayvanlar;//Hayvanlarin eklendigi vektorumuz.
	void hayvanlariGoster();//Hayvan listesini gosteren fonksiyon.
	void hayvanYasGuncelle(string, int);//Hayvan yasini guncelleyen fonksiyon.
	void hayvanAdGuncelle(string, string);//Hayvan adini guncelleyen fonksiyon.
	void hayvanBesle(string);//Hayvani besleyebildigimiz fonksiyon.
	void bilgileriListele(string);//Hayvan bilgilerini detayli gosteren alt fonksiyon.
};

#endif