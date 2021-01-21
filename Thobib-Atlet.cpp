// Nama : Thobib Khoirul Annas
// NIM  : 18101068
// Kelas: S1TT06B
#include <iostream>
using namespace std;

const int nam=100;

////////////////////////////////////////////////////////////////////////////////
// Base class atlet
class atlet{
  private:
    char nama[nam];
    int tinggi;
    int bbn;
    int umur;
  public:
    void in_data()
    {
      cout<<"\nSiapakah Nama Anda       : ";cin>>nama;
      cout<<"Berapa Tinggi Badan Anda : ";cin>>tinggi;
      cout<<"Berapa Berat Badan Anda  : ";cin>>bbn;
      cout<<"Berapa Umur Anda         : ";cin>>umur;
    }
    void out_data() {
      cout<<"Nama         :"<<nama<<"\n";
      cout<<"Tinggi Badan :"<<tinggi<<"\n";;
      cout<<"Berat Badan  :"<<bbn<<"\n";
      cout<<"Umur         :"<<umur;
    }
};
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// derived class 1 goodminton
class goodminton : public atlet
{
  private:
    int rangking;
  public:
    void in_data()
    {
      atlet::in_data();
      cout<<"Berapa World Rangking Anda : "; cin>>rangking;
    }
    void out_data() {
      atlet::out_data();
      cout<<"\nWorld Rangking : "<<rangking;
    }
};
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// derived class 2 voli
class voli : public atlet
{
  private:
    char posisi[nam];
    int nomor_punggung;
  public:
    void in_data()
      {
        atlet::in_data();
        cout<<"Nomor Punggung Anda : ";cin>>nomor_punggung;
        cout<<"Posisi Apa Anda (libero/toser/spiker) : ";cin>>posisi;
      }
      void out_data()
       {
        atlet::out_data();
        cout<<"\nNomor Punggung: "<<nomor_punggung;
        cout<<"\nPosisi        : "<<posisi;
      }
};
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//derived class 3 motoGP
class motoGP : public atlet
{
  private:
    char merk[nam];
    char team[nam];
  public:
    void in_data()
      {
        atlet::in_data();
        cout<<"Apa Merk Motor Anda : ";cin>>merk;
        cout<<"Apa team anda : ";cin>>team;
      }
      void out_data() {
        atlet::out_data();
        cout<<"\nMerk   : "<<merk;
        cout<<"\nTeam   : "<<team;
      }
};
////////////////////////////////////////////////////////////////////////////////

int main()
{
  atlet alt1;
  goodminton minton1, minton2;
  voli poli1, poli2;
  motoGP moto1, moto2;

//////////////////////////////////////
  cout<<"Input Data Atlit Badminton 1";
  cout<<"\n";
  minton1.in_data();
  cout<<"\n";
  cout<<"Input Data Atlit Badminton 2";
  cout<<"\n";
  minton2.in_data();
  cout<<endl;
//////////////////////////////////////

//////////////////////////////////////
  cout<<"Input Data Atlit Voli 1";
  cout<<"\n";
  poli1.in_data();
  cout<<"\n";
  cout<<"Input Data Atlit Voli 2";
  cout<<"\n";
  poli2.in_data();
  cout<<endl;
//////////////////////////////////////

//////////////////////////////////////
  cout<<"Input Data Atlit MotoGP 1";
  cout<<"\n";
  moto1.in_data();
  cout<<"\n";
  cout<<"Input Data Atlit MotoGP 2";
  cout<<"\n";
  moto2.in_data();
  cout<<endl;
//////////////////////////////////////

//////////////////////////////////////
  cout<<"\nData Atlit Badminton 1";
  cout<<"\n";
  minton1.out_data();
  cout<<"\n\n";
  cout<<"Data Atlit Badminton 2";
  cout<<"\n";
  minton2.out_data();
  cout<<"\n\n";
//////////////////////////////////////

//////////////////////////////////////
  cout<<"Data Atlit Voli 1";
  cout<<"\n";
  poli1.out_data();
  cout<<"\n\n";
  cout<<"Data Atlit Badminton 2";
  cout<<"\n";
  poli2.out_data();
  cout<<"\n\n";
//////////////////////////////////////

//////////////////////////////////////
  cout<<"Data Atlit MotoGP 1";
  cout<<"\n";
  moto1.out_data();
  cout<<"\n\n";
  cout<<"Data Atlit MotoGP 2";
  cout<<"\n";
  moto2.out_data();
  cout<<"\n\n";
//////////////////////////////////////
  return 0;
}
/*
NOTE :
File UML = Thobib-UML.docx
*/
