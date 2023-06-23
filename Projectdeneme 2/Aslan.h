/*
Eray
Ercan
Ataturk Universitesi, Muhendislik Fakultesi, Bilgisayar Muhendisligi Bolumu
PROGRAMLAMA PROJESİ 1
MBM 104: Nesneye Yonelik Programlama - Bahar 2023
Dr. Ogr. Uyesi Ahmet COSKUNCAY
*/
#pragma once
#ifndef ASLAN_H
#define ASLAN_H
#include "Hayvan.h"//Hayvan yapicisini kullanmak icin include ediyoruz.
class Aslan :public Hayvan //Kalitim ozelligini kullanmak icin public bir sekilde hayvan sinifina bagliyoruz.
{
public:
	Aslan(string, string, int, string);//Aslan sinifinin yapicisi.
	string yemek();//Hayvanin beslenme bicimini geriye donduren fonksiyon.
private:
	string Renk;//Hayvanin kendine ozel niteligi.
};
#endif

