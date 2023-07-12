#include <iostream>

using namespace std;

  int
  p = 0,
  pesan = 0,
  total = 0,
  sub_total = 0,
  ukuran = 0,
  uang = 0,
  pinggiran = 0,
  // Harga
  harga1 = 40,
  harga2 = 48,
  harga3 = 30,
  harga4 = 44,
  // Size PIZZA
  size1 = 40,
  size2 = 65,
  size3 = 78,
  size4 = 105,
  // Crust PIZZA
  crust1 = 0,
  crust2 = 20,
  crust3 = 28,
  crust4 = 25;


  string
  pizza1 = "TUNA MELT",
  pizza2 = "MEAT LOVERS",
  pizza3 = "SUPER SUPREME",
  pizza4 = "VEGGIE GARDEN";

  char
  lagi,
  nama[10];



  void welcome () {
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"--------------------- KETIK NAMA ANDA ----------------------"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cin>>nama;
    system("cls");
  }

  void header () {





    cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
    cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@&Y#&&&&&&&&&&&&&&&&&&&&&"<<endl;
    cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@&&BP?~.  #&&&&&&&&&&&&&&&&&&&&"<<endl;
    cout<<"&&&&&&&&&&&&&&&&&&&&&&@&G5?!^.         !@&&&&&&&&&&&&&&&&&&&"<<endl;
    cout<<"&&&&&&&&&&&&&&&&&&&&&@Y                 G&@@@@&&&&&&&&&&&&&&"<<endl;
    cout<<"&&&&&&&&&&&&&&&&&&&&&^                    .:~JG#&@@@&&&&&&&&"<<endl;
    cout<<"&&&&&&&&&&&&&&&&&&&#:                          .^!!YG#@&&&&&"<<endl;
    cout<<"&&&&&&&&&&&&&&@&G7.           ..:^!?J5PGB#&&@@@@@@7  ^#&&&&&"<<endl;
    cout<<"&&&&&&&&&&@@&5^     .:~7YPB#&@@@@@@@@@@@@@@@@@&&&&##&&&&&&&&"<<endl;
    cout<<"&&&&&&&&@&P!^^7YG#&@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
    cout<<"@@@BGGGB#&&@@@@@@@@@@@@@BG&@@@@@@@@@B??7!~^:~&@@@#Y!~^:!@@@@"<<endl;
    cout<<"@@@@@@@@@@@&BGGB&@@@@@@@BG@Y77!!~~^5&YYY~  .Y@@5..7P7  5@@@@"<<endl;
    cout<<"@@@@@@@@B:       .7@@@@7 :@&BGY:  ^&@&Y: ^B@@@^  :!::. :7#@@"<<endl;
    cout<<"@@@@@@@@&J  Y@&P:  ^@#.  &@@G~  !&@&^    ~7?JPP!!75&@@&&@@@@"<<endl;
    cout<<"@@@@@@@@G  .@@@@P  ?@  .&@?   .YGBBY!Y55J!YB&@@@@@@@@@@@@@@@"<<endl;
    cout<<"@@@@@@@Y   &@@B! .P@@!.&@: .:^^^^^^~~!7?5B@@#:Y@@@@@@@@@@@@@"<<endl;
    cout<<"@@@@@@5   5P?!7Y&@@@@Y&@@@&!5@@@@@@@@@@@&&&J  ~??YP#@@@@@@@@"<<endl;
    cout<<"@@@@@#   5@@@@@@@@@B  &@@@. G@B#@@@@@J7&7~  :PB&@@@@@@@@@@@@"<<endl;
    cout<<"@@@@@.  J@@@@@@@@@Y  P@@@:  G#. Y@@B^ ^@@J .@@@@@@@@@@@@@@@@"<<endl;
    cout<<"@@@@5  ?@@@@@@@@@?   ?!^.  7&5  ~7.:  J@&  &@@@@@@@@@@@@@@@@"<<endl;
    cout<<"@@@@7 ?@@@@@@#:.    :~Y7  .@@?  .~#@G:P@B J&BPYJJJYPG&@@@@@@"<<endl;
    cout<<"@@@@@@@@@@@@@@@P   B@@@?  B@@@@@@@@&#P?!:.^~7JP#&@@@@@@@@@@@"<<endl;
    cout<<"@@@@@@@@@@@@@@@:  !@@@@@B@@@@&#P?~:.:^7YB&@@@@@@@@@@@@@@@@@@"<<endl;
    cout<<"@@@@@@@@@@@@@@@~.~@@@@@@&GJ!:..:~JG&@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
    cout<<"@@@@@@@@@@@@@@@@@@@#5?~:..:!YB&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
    cout<<"@@@@@@@@@@@@@@@@@@@J~~75B&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;





  cout<<"------------------------------------------------------------"<<endl;
  cout<<"============================================================"<<endl;
  cout<<"========== WELCOME TO PIZZA HUT DELIVERY MADIUN ============"<<endl;
  cout<<"======================== "<<nama<<" =============================="<<endl;
  cout<<"============================================================"<<endl;
  cout<<"------------------------------------------------------------"<<endl;
  cout<<""<<endl;
  }


  void menu (){
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"------------------ AVAILABLE FOODS MENU  -------------------"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"------------ PIZZA = 1."<<pizza1<<"     = +"<<harga1<<"K"<<" ----------------"<<endl;
    cout<<"------------------ = 2."<<pizza2<<"   = +"<<harga2<<"K"<<" ----------------"<<endl;
    cout<<"------------------ = 3."<<pizza3<<" = +"<<harga3<<"K"<<" ----------------"<<endl;
    cout<<"------------------ = 4."<<pizza4<<" = +"<<harga4<<"K"<<" ----------------"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"--------------------- SIZE OF PIZZA ------------------------"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"-------------------- 1.SMALL  = +"<<size1<<"K"<<" -----------------------"<<endl;
    cout<<"-------------------- 2.MEDIUM = +"<<size2<<"K"<<" -----------------------"<<endl;
    cout<<"-------------------- 3.LARGE  = +"<<size3<<"K"<<" -----------------------"<<endl;
    cout<<"-------------------- 4.LIMO   = +"<<size4<<"K"<<" ----------------------"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"--------------------- CRUST OF PIZZA -----------------------"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"-------------------- 1.ORIGINAL      = +"<<crust1<<"K"<<" -----------------"<<endl;
    cout<<"-------------------- 2.CHESSY BITES  = +"<<crust2<<"K"<<" ----------------"<<endl;
    cout<<"-------------------- 3.CHESSY CRUST  = +"<<crust3<<"K"<<" ----------------"<<endl;
    cout<<"-------------------- 4.STUFFED CRUST = +"<<crust4<<"K"<<" ----------------"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<""<<endl;

  }





  void pemesanan () {

    cout<<"------------------------------------------------------------"<<endl;
    cout<<"-------------- PIZZA APA YANG AKAN ANDA BELI? --------------"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"--------- PILIH PIZZA (1 - 4) DAN UKURAN (1 - 4) -----------"<<endl;
    cout<<"------------------ DAN PINGGIRAN (1 - 4) -------------------"<<endl;
    cout<<"------------------------------------------------------------"<<endl;

  }

  void pilih () {
    cin>>pesan;

    switch (pesan) {

      case 1 :
        cout <<"---------------------- "<<pizza1<<" "<<harga1<<"K -----------------------"<<endl;
        cout<<""<<endl;
        cout <<"------------------- PILIH UKURAN PIZZA ---------------------"<<endl;
        cin>>ukuran;
        sub_total += harga1;
        switch (ukuran) {

          case 1 :
          cout << "----------------------- UKURAN SMALL -----------------------"<<endl;
          sub_total += size1;
          cout<<""<<endl;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;
          cout<<""<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;
          case 2 :
          cout << "-------------------- UKURAN MEDIUM -------------------------"<<endl;
          cout<<""<<endl;
          sub_total += size2;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;
          case 3 :
          cout << "---------------------- UKURAN LARGE ------------------------"<<endl;
          cout<<""<<endl;
          sub_total += size3;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;
          case 4 :
          cout << "---------------------- UKURAN LIMO -------------------------"<<endl;
          cout<<""<<endl;
          sub_total += size4;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;
          }
        break;

      case 2 :
        cout <<"--------------------- "<<pizza2<<" "<<harga2<<"K ----------------------"<<endl;
        cout<<""<<endl;
        cout <<"------------------- PILIH UKURAN PIZZA ---------------------"<<endl;
        cin>>ukuran;
        sub_total += harga2;
        switch (ukuran) {

          case 1 :
          cout << "---------------------- UKURAN SMALL ------------------------"<<endl;
          sub_total += size1;
          cout<<""<<endl;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;

          case 2 :
          cout << "--------------------- UKURAN MEDIUM -------------------------"<<endl;
          sub_total += size2;
          cout<<""<<endl;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;
          case 3 :
          cout << "----------------------- UKURAN LARGE -----------------------"<<endl;
          sub_total += size3;
          cout<<""<<endl;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;

          case 4 :
          cout << "------------------------ UKURAN LIMO ----------------------"<<endl;
          sub_total += size4;
          cout<<""<<endl;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;
          }
      break;
      case 3 :
        cout <<"------------------- "<<pizza3<<" "<<harga3<<"K ----------------------"<<endl;
        cout<<""<<endl;
        cout <<"------------------ PILIH UKURAN PIZZA ----------------------"<<endl;
        cin>>ukuran;
        sub_total += harga3;
        switch (ukuran) {

          case 1 :
          cout << "---------------------- UKURAN SMALL ------------------------"<<endl;
          sub_total += size1;
          cout<<""<<endl;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;

          case 2 :
          cout << "-------------------- UKURAN MEDIUM -------------------------"<<endl;
          sub_total += size2;
          cout<<""<<endl;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;

          case 3 :
          cout << "--------------------- UKURAN LARGE -------------------------"<<endl;
          sub_total += size3;
          cout<<""<<endl;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;

          case 4 :
          cout << "---------------------- UKURAN LIMO -------------------------"<<endl;
          sub_total += size4;
          cout<<""<<endl;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;
          }
      break;
      case 4 :
        cout <<"------------------- "<<pizza4<<" "<<harga4<<"K ----------------------"<<endl;
        cout<<""<<endl;
        cout <<"------------------- PILIH UKURAN PIZZA ---------------------"<<endl;
        cin>>ukuran;
        sub_total += harga4;
        switch (ukuran) {

          case 1 :
          cout << "---------------------- UKURAN SMALL ------------------------"<<endl;
          sub_total += size1;
          cout<<""<<endl;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;

          case 2 :
          cout << "--------------------- UKURAN MEDIUM ------------------------"<<endl;
          sub_total += size2;
          cout<<""<<endl;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;

          case 3 :
          cout << "---------------------- UKURAN LARGE ------------------------"<<endl;
          sub_total += size3;
          cout<<""<<endl;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;

          case 4 :
          cout << "----------------------- UKURAN LIMO ------------------------"<<endl;
          sub_total += size4;
          cout<<""<<endl;
          cout <<"-------------------- PILIH CRUST PIZZA ---------------------"<<endl;


          cin>>pinggiran;
          switch (pinggiran) {
            case 1 :
            cout << "------------------------ ORIGINAL --------------------------"<<endl;
            sub_total += crust1;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K -----------------------"<<endl;
            break;

            case 2 :
            cout << "---------------------- CHESSY BITES ------------------------"<<endl;
            sub_total += crust2;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 3 :
            cout << "---------------------- CHESSY CRUST ------------------------"<<endl;
            sub_total += crust3;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;

            case 4 :
            cout << "---------------------- STUFFED CRUST -----------------------"<<endl;
            sub_total += crust4;
            cout << "-------------------- SUB TOTAL = "<<sub_total<<"K ----------------------"<<endl;
            break;
            }
            break;
        }

        break;


      }
    }




  void coba () {
    cout<<""<<endl;
    do {
      cout<<"------------------------------------------------------------"<<endl;
      cout<<"----------------- SILAHKAN PILIH PESANAN -------------------"<<endl;
      cout<<"---------------------- PESANAN KE-"<<p+1<<" ------------------------"<<endl;
      cout<<"------------------------------------------------------------"<<endl;
      pilih (),

      cout << endl;
      cout<<"------------------------------------------------------------"<<endl;
      cout<<"----------------- INGIN MENAMBAH PESANAN? ------------------"<<endl;
      cout<<"------------------------- (Y/T) ----------------------------"<<endl;

      p++;
      cin>>lagi;
      cout << endl;
    } while (lagi == 'y');
  }

  void bayar () {
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"------------------- TOTAL PESANAN ANDA ---------------------"<<endl;
    cout << "---------------------- TOTAL = "<<sub_total<<"K ------------------------"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"------------------- UANG YANG DIBAYAR ----------------------"<<endl;
    cin>>uang;
    total = uang-sub_total;
    cout << "------------------- KEMBALIAN = "<<total<<"K ------------------------"<<endl;


  }



  int main () {
  welcome ();
  header ();
  menu  ();
  pemesanan ();
  coba ();
  bayar ();


}
