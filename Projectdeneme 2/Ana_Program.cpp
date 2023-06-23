/*
Eray
Ercan
190757031
Ataturk Universitesi, Muhendislik Fakultesi, Bilgisayar Muhendisligi Bolumu
PROGRAMLAMA PROJESI 1
MBM 104: Nesneye Yonelik Programlama - Bahar 2023
Dr. Ogr. Uyesi Ahmet COSKUNCAY
*/
#include <iostream>
#include "Hayvan.h"
#include "Aslan.h"//Ana programimiza herseyi ekleiyoruz.
#include "Zebra.h"
#include "Kartal.h"
#include "HayvanatBahcesi.h"
using namespace std;

int main()
{
	HayvanatBahcesi hayvanatbahcesi;
	string degerRenk;
	string degerTur;//kullanici girislerinde kullanilmak icin olusturdugumuz gecici degiskenler.
	string degerAd;
	int secim;
	int degerYas;
	int degerKanat;
	int degerCizgi;
	int cikis = 0;

	while(true)//Arayuzde surekle kalabilmemiz icin hersey while dongusunde olmali.
	{
		cout << "----- Hayvanat Bahcesi Yonetim Sistemi -----" << endl;
		cout << "1. Hayvan Ekle\n2. Hayvanlari Goster\n3. Hayvan Besle\n4. Hayvan Duzenle\n5. Cikis\nSeciminizi yapin: ";
		cin >> secim;
		switch (secim)//Arayuzde secim yapmak icin deger aliyoruz.
		{
		case 1:
		{
			cout << "Ekleyeceginiz hayvanin turunu giriniz(aslan,kartal,zebra): ";
			cin >> degerTur;
			if (degerTur == "aslan")//Her hayvanin kendine ozel ozelligi oldugu icin ilk tur secmesini istiyoruz.
			{
				cout << "Ekleyeceginiz hayvanin adini giriniz: ";
				cin >> degerAd;
				cout << "Ekleyeceginiz hayvanin yasini giriniz: ";
				cin >> degerYas;
				cout << "Aslanin rengini giriniz: ";
				cin >> degerRenk;
				Hayvan* aslan1 = new Aslan(degerAd, degerTur, degerYas, degerRenk);//Aslan nesnesi olusturuyoruz
				hayvanatbahcesi.hayvanEkle(aslan1);
				cout << "Hayvan basariyla eklendi." << endl;
			}
			else if (degerTur == "kartal")
			{
				cout << "Ekleyeceginiz hayvanin adini giriniz: ";
				cin >> degerAd;
				cout << "Ekleyeceginiz hayvanin yasini giriniz: ";
				cin >> degerYas;
				cout << "Kartalin kanat acikligini giriniz: ";
				cin >> degerKanat;
				Hayvan* kartal1 = new Kartal(degerAd, degerTur, degerYas, degerKanat);//Kartal nesnesi olusturuyoruz
				hayvanatbahcesi.hayvanEkle(kartal1);
				cout << "Hayvan basariyla eklendi." << endl;
			}
			else if (degerTur == "zebra")
			{
				cout << "Ekleyeceginiz hayvanin adini giriniz: ";
				cin >> degerAd;
				cout << "Ekleyeceginiz hayvanin yasini giriniz: ";
				cin >> degerYas;
				cout << "Zebranin cizgi sayisini giriniz: ";
				cin >> degerCizgi;
				Hayvan* zebra1 = new Zebra(degerAd, degerTur, degerYas, degerCizgi);//Zebra nesnesi olusturuyoruz.
				hayvanatbahcesi.hayvanEkle(zebra1);
				cout << "Hayvan basariyla eklendi." << endl;
			}
			else
			{
				cout << "Hatali bir giris yaptiniz..";//Hatali giris yapildiginda dondurulen metin.
			}
			break;
		}
		case 2:
		{
			hayvanatbahcesi.hayvanlariGoster();//Hayvanlari listeleyen fonksiyon.
			break;
		}
		case 3:
		{
			string besleAd;
			cout << "--Mevcut Hayvan Listesi--" << endl;
			hayvanatbahcesi.hayvanlariGoster();
			cout << "Beslemek istediginiz hayvanin adini giriniz: ";
			cin >> besleAd;
			hayvanatbahcesi.hayvanBesle(besleAd);//Hayvan besleyen fonksiyon.
			break;
		}
		case 4:
		{
			string  duzenlemeAd;
			string  duzenlemeNitelik;
			cout << "--Mevcut Hayvan Listesi--" << endl;
			hayvanatbahcesi.hayvanlariGoster();//Hayvan duzenleme ekraninda hayvan secmek icin once listeliyoruz.
			cout << "Duzenlemek istediginiz hayvanin adini giriniz: ";
			cin >> duzenlemeAd;
			hayvanatbahcesi.bilgileriListele(duzenlemeAd);
			cout << "Duzenlemek istediginiz niteligi yaziniz(Yas,Ad): ";
			cin >> duzenlemeNitelik;
			if (duzenlemeNitelik == "Yas")//Neyi duzenleyecegimizin girisini kullancidan aliyoruz.
			{
				int yeniYas;
				cout << "Girilecek yeni yasi yaziniz: ";//Yas guncelleme.
				cin >> yeniYas;
				hayvanatbahcesi.hayvanYasGuncelle(duzenlemeAd, yeniYas);
			}
			else if (duzenlemeNitelik == "Ad")
			{
				string yeniAd;
				cout << "Girilecek yeni adi yaziniz: ";//Ad guncelleme.
				cin >> yeniAd;
				hayvanatbahcesi.hayvanAdGuncelle(duzenlemeAd, yeniAd);
			}
			else
			{
				cout << "Yanlis bir giris yaptiniz...";
			}
			break;
		}
		case 5://Cikis.
		{
			return 0;
		}
			
		}
	}
	
}