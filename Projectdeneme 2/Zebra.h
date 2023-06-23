/*
Eray
Ercan
190757031
Ataturk Universitesi, Muhendislik Fakultesi, Bilgisayar Muhendisligi Bolumu
PROGRAMLAMA PROJESI 1
MBM 104: Nesneye Yonelik Programlama - Bahar 2023
Dr. Ogr. Uyesi Ahmet COSKUNCAY
*/
#pragma once
#ifndef ZEBRA_H
#define ZEBRA_H
#include "Hayvan.h"//Hayvan yapicisini kullanmak icin include ediyoruz.
class Zebra :public Hayvan//Kalitim ozelligini kullanmak icin public bir sekilde hayvan sinifina bagliyoruz.
{
public:
	Zebra(string, string, int, int);//Zebra sinifinin yapicisi.
	string yemek();//Hayvanin beslenme bicimini geriye donduren fonksiyon.
private:
	int CizgiSayisi;//Hayvanin kendine ozel niteligi.
};
#endif

