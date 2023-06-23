/*
Eray
Ercan
Ataturk Universitesi, Muhendislik Fakultesi, Bilgisayar Muhendisligi Bolumu
PROGRAMLAMA PROJESI 1
MBM 104: Nesneye Yonelik Programlama - Bahar 2023
Dr. Ogr. Uyesi Ahmet COSKUNCAY
*/
#pragma once
#ifndef KARTAL_H
#define KARTAL_H
#include "Hayvan.h"//Hayvan yapicisini kullanmak icin include ediyoruz.
class Kartal :public Hayvan//Kalitim ozelligini kullanmak icin public bir sekilde hayvan sinifina bagliyoruz.
{
public:
	Kartal(string, string, int, int);//Kartal sinifinin yapicisi.
	string yemek();//Hayvanin beslenme bicimini geri donduren fonksiyon.
private:
	int KanatAcikligi;//Hayvanin kendine ozel niteligi.
};
#endif

