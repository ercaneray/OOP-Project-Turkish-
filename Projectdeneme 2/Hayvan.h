/*
Eray
Ercan
Ataturk Universitesi, Muhendislik Fakultesi, Bilgisayar Muhendisligi Bolumu
PROGRAMLAMA PROJESI 1
MBM 104: Nesneye Yonelik Programlama - Bahar 2023
Dr. Ogr. Uyesi Ahmet COSKUNCAY
*/
#pragma once
#ifndef HAYVAN_H
#define HAYVAN_H
#include <string>
using namespace std;//string icin standart kutuphaneyi kullaniyoruz.
class Hayvan
{
public:
	Hayvan(string, string, int);//Hayvan sinifinin yapicisi.
	string getAd();//Hayvan adini geriye donduren fonksiyon.
	virtual string yemek();//Her alt sinifta ayri calismasi icin virtual sekilde tanimladigimiz beslenme fonksiyonu parcasi.
	int getYas();//Hayvan yasini geriye donduren fonksiyon.
	string getTur();//Hayvan turunu geriye donduren fonksiyon.
	int Yas;
	string Ad;
	string Tur;
};
#endif
