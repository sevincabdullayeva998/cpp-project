#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    string ad;
    string cavab;

    int detector;
    int dogru = 0;
    int yalan = 0;

    srand(time(0));

    cout << "===================================" << endl;
    cout << "        LIE DETECTOR GAME          " << endl;
    cout << "===================================" << endl;

    cout << "Adinizi daxil edin: ";
    cin >> ad;

    cout << "\nSalam, " << ad << " 😄" << endl;
    cout << "Bu oyun sizin cavablarinizi analiz edecek!" << endl;

    // SUAL 1
    cout << "\n1. Gunde vaxtinda ders oxuyursan?" << endl;
    cout << "Cavabinizi daxil edin (he/yox): ";
    cin >> cavab;

    detector = rand() % 2;

    if(detector == 0) {
        cout << "✅ Detector: Dogru danisirsiniz!" << endl;
        dogru++;
    } else {
        cout << "❌ Detector: Yalan tapildi!" << endl;
        yalan++;
    }

    // SUAL 2
    cout << "\n2. Telefonu az istifade edirsiniz?" << endl;
    cout << "Cavabinizi daxil edin (he/yox): ";
    cin >> cavab;

    detector = rand() % 2;

    if(detector == 0) {
        cout << "✅ Detector size inandi." << endl;
        dogru++;
    } else {
        cout << "🚨 Sistem yalan askarladi!" << endl;
        yalan++;
    }

    // SUAL 3
    cout << "\n3. Fast food cox yemirsiniz?" << endl;
    cout << "Cavabinizi daxil edin (he/yox): ";
    cin >> cavab;

    detector = rand() % 2;

    if(detector == 0) {
        cout << "✅ Cavab temiz gorunur." << endl;
        dogru++;
    } else {
        cout << "❌ Detector bu cavaba suphe ile baxir 😅" << endl;
        yalan++;
    }

    // SUAL 4
    cout << "\n4. Hec vaxt gecikmirsiniz?" << endl;
    cout << "Cavabinizi daxil edin (he/yox): ";
    cin >> cavab;

    detector = rand() % 2;

    if(detector == 0) {
        cout << "✅ Dogru cavab!" << endl;
        dogru++;
    } else {
        cout << "🚨 Yalan ehtimali yuksekdir!" << endl;
        yalan++;
    }

    // SUAL 5
    cout << "\n5. Sosial mediada az vaxt kecirirsiniz?" << endl;
    cout << "Cavabinizi daxil edin (he/yox): ";
    cin >> cavab;

    detector = rand() % 2;

    if(detector == 0) {
        cout << "✅ Detector razidir 😄" << endl;
        dogru++;
    } else {
        cout << "❌ Sistem bu cavabi qebul etmedi 😂" << endl;
        yalan++;
    }

    // SUAL 6
    cout << "\n6. Her gun erken yatirsiniz?" << endl;
    cout << "Cavabinizi daxil edin (he/yox): ";
    cin >> cavab;

    detector = rand() % 2;

    if(detector == 0) {
        cout << "✅ Dogru kimi gorunur." << endl;
        dogru++;
    } else {
        cout << "🚨 Yalan siqnali geldi!" << endl;
        yalan++;
    }

    // FAIZ HESABI
    int cem = dogru + yalan;

    double dogruFaiz = (double)dogru / cem * 100;
    double yalanFaiz = (double)yalan / cem * 100;

    cout << "\n===================================" << endl;
    cout << "            NETICE                 " << endl;
    cout << "===================================" << endl;

    cout << "Istifadeci: " << ad << endl;
    cout << "Dogru cavab faizi: %" << dogruFaiz << endl;
    cout << "Yalan cavab faizi: %" << yalanFaiz << endl;

    if(yalanFaiz > 50) {
        cout << "\n😅 Detectorun fikrince biraz cox yalan danisirsiniz." << endl;
    }
    else {
        cout << "\n😄 Detector size etibar edir!" << endl;
    }

    cout << "\nOyunda istirak etdiyiniz ucun tesekkurler!" << endl;

    return 0;
}
