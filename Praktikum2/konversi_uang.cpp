#include <iostream>
#include <sstream>

using namespace std;

//Masa sih harus kasih komentar buat dokumentasi?
//Yaudah deh aku kasih xixixi

//Fungsi string formatNumber dengan params double value untuk melakukan format angka
string formatNumber(double value) {
//	Deklarasi variable
	stringstream ss;
	string formattedNumber;
	
//	Merubah value menjadi string dengan sstream dan di simpan ke dalam variable formattedNumber
	ss << value;
	formattedNumber = ss.str();
	
//	Deklarasi / inisiasi variable number length dan distance length
	int nmlength = formattedNumber.length();
	int dislen = 3;
	
//	Kondisi jika index ke-2 dari formattedNumber tidak bernilai ['.']
	if(formattedNumber[1] != '.'){
		//	Looping apabila number length lebih besar dari distance length
		while(nmlength > dislen) {
			//  Melakukan modifikasi value pada formattedNumber
			formattedNumber.insert(nmlength - dislen, 1, ',');
			dislen += 4;
			nmlength++;
		}
	}
	
//	Mengembalikan nilai
	return formattedNumber;
	
}

//Fungsi main
int main() {
//	Deklarasi variable
    double idr, usd, result;
    stringstream ss;
    string angkaStr;
    
    int select;
    
//    Output aja kok!
    cout << "====PROGRAM KONVERSI MATA UANG=====\n\n" 
         << "1. USD ke Rupiah\n" 
         << "2. Rupiah ke USD\n" << endl;
    
//    Bikin input buat value selection
    cout << "Pilih konversi berdasarkan nomor: ";
    cin >> select;
    
//    Percabangan berdasarkan value dari select
    switch(select) {
//    	Jika select bernilai 1
        case 1:
//        	Output aja kok!
            cout << "======KONVERSI USD TO RUPIAH=======" << endl;
            
//			Bikin input buat usd            
            cout << "Masukkan nilai USD: ";
            cin >> usd;
            
//          Operasi apanih?, ohh perkalian.
            result = usd * 15505;
            
//          Output aja kok!
            cout << "Hasil konversi: " << formatNumber(result) << " Rupiah" << endl;
            
//          Program lelah mau coffebreak xixixi
            break;
        
//      Jika select bernilai 2
        case 2:
//        	Output aja kok!
            cout << "======KONVERSI RUPIAH TO USD=======" << endl;
            cout << "Masukkan nilai Rupiah: ";
            cin >> idr;
            
//          Sama nih perkalian lagi
            result = idr * 0.000064;
            
//          Output aja kok!
            cout << "Hasil konversi: " << formatNumber(result) << " USD" << endl;
            
//          Lelah
            break;
        
//      Kondisi apabila select yang dimasukkan tidak bernilai 1 - 2
        default:
//        	Output aja kok
            cout << "Menu tidak tersedia" << endl;
            
//          lelah
            break;
    }
    
    return 0;
}


