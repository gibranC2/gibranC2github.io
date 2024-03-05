#include <iostream>

using namespace std;

void konversi_suhu();

void lanjut(){
    awal:
    char tanya;
    cout << "Apakah Anda Ingin Lanjut? [ y / n ]";
    cin >> tanya;
    if(tanya == 'y' or tanya == 'Y'){
        konversi_suhu();
    } else if(tanya == 'n' or tanya == 'N'){
        exit(1);
    } else {
        cout << "Anda Salah Input" << endl;
        goto awal;
    }
}

void celcius(float celcius){
    float reamur, farenheit, kelvin;
    reamur = (4.0/5.0)*celcius;
    cout << "REAMUR : " << reamur << endl;
    farenheit = 9.0/5.0*celcius + 32;
    cout << "FARENHEIT : " << farenheit << endl;
    kelvin = celcius + 273;
    cout << "KELVIN : " << kelvin << endl;
    lanjut();
}
void reamur(float reamur){
    float celcius, farenheit, kelvin;
    celcius = (5.0/4.0)*reamur;
    cout << "CELCIUS : " << celcius << endl;
    farenheit = 9.0/4.0*reamur + 32;
    cout << "FARENHEIT : " << farenheit << endl;
    kelvin = 5.0/4.0*reamur + 273;
    cout << "KELVIN : " << kelvin << endl;
    lanjut();

}
void farenheit(float farenheit){
    float celcius, reamur, kelvin;
    celcius = (5.0/9.0)*(farenheit - 32);
    cout << "CELCIUS : " << celcius << endl;
    reamur = 4.0/9.0*(farenheit - 32);
    cout << "REAMUR : " << reamur << endl;
    kelvin = (5.0/9.0)*(farenheit - 32) + 273;
    cout << "KELVIN : " << kelvin << endl;
    lanjut();

}
void kelvin(float kelvin){
    float celcius, reamur, farenheit;
    celcius = kelvin - 32;
    cout << "CELCIUS : " << celcius << endl;
    reamur = 4.0/5.0*(kelvin-273);
    cout << "REAMUR : " << reamur << endl;
    farenheit = 9.0/5.0*(kelvin-273) + 32;
    cout << "FARENHEIT : " << farenheit << endl;
    lanjut();

}

void konversi_suhu(){

    int pilih;
    m:
    cout << "MENU" << endl;
    cout << "1. Celcius" << endl;
    cout << "2. Reamur" << endl;
    cout << "3. Farenheit" << endl;
    cout << "4. Kelvin" << endl;
    cout << "0. Keluar" << endl;
    cout << "PILIH : ";
    cin >> pilih;
    float suhu_awal;


    switch(pilih){
        case 1 :
            cout << "Besar Suhu : ";
            cin >> suhu_awal;
            celcius(suhu_awal);
            break;
        case 2 :
            cout << "Besar Suhu : ";
            cin >> suhu_awal;
            reamur(suhu_awal);
            break;
        case 3 :
            cout << "Besar Suhu : ";
            cin >> suhu_awal;
            farenheit(suhu_awal);
            break;
        case 4 :
            cout << "Besar Suhu : ";
            cin >> suhu_awal;
            kelvin(suhu_awal);
            break;
        case 0 :
            exit(1);
        default:
            cout << "Anda Salah Input" << endl;
            goto m;
    }

}

int main(){

    for(int i = 0 ; i < 3 ; i++){
        string nama,nim;
        cout << "NAMA : ";
        cin >> nama;
        cout << "NIM : ";
        cin >> nim;
        if(nama == "gibran" && nim == "139"){
            konversi_suhu();
        }
    }

    return 0;
}