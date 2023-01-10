#include <iostream>
#include <string>
#include<math.h>

using namespace std;
float totalx(int jmldata,  int nilaix[]) {
  int sum = 0;
  for (int i = 0; i < jmldata; i++) {
    sum += nilaix[i];
  }
  return (float)sum ;
}
float totaly(int jmldata,  int nilaiy[]) {
  int sum = 0;
  for (int i = 0; i < jmldata; i++) {
    sum += nilaiy[i];
  }
  return (float)sum ;
}
float totalxy(int jmldata, int nilaix[], int nilaiy[]) {
  int sum = 0;
  for (int i = 0; i < jmldata; i++) {
    sum += nilaix[i] * nilaiy[i];
  }
  return (float)sum ;
}

int main() {
    system("cls");
  int jmldata;
  cout << "Berapa banyak data yang akan diinputkan? ";
  cin >> jmldata;

  int nilaix[jmldata];
  int nilaiy[jmldata];
  for (int i = 0; i < jmldata; i++) {
    cout << "Data" << i + 1 << ": ";
    cout << "x = " ;cin >> nilaix[i]; 
    cout << "       y = "; cin >> nilaiy[i];
    while (nilaix[i] < 0 and nilaiy[i] < 0){
  cout << "program error" << endl; 

 }
  }
 
  

  float sigmax =  totalx( jmldata,  nilaix);
  cout << "Sigma X adalah:  " << sigmax << endl;

  float sigmay =  totaly( jmldata,  nilaiy);
  cout << "Sigma Y adalah:  " << sigmay << endl;

float sigmaxy = totalxy(jmldata, nilaix, nilaiy);
cout << "Sigma XY adalah:  " << sigmaxy << endl;

float  regresiatas = jmldata * sigmaxy - sigmax * sigmay;
float regresibawah = sqrt((jmldata * sigmax * sigmax) - (sigmax * sigmax)) * sqrt((jmldata * sigmay * sigmay) - (sigmay * sigmay));
float regresi = regresiatas/regresibawah;


cout << "nilai korelasi r adalah " << regresi << endl;

float korelasi= (regresi); {
if (regresi > 0.70)

{
  cout << "hubungan korelasi sangat kuat" << endl;
}

if (regresi > 0.50 )
{
  cout << "hubungan korelasi sedang" << endl;
}
 
if (regresi > 0.30)
{
  cout << "hubungan korelasi moderat" << endl;
}
if (regresi > 0.10)
{
  cout << "hubungan korelasi rendah"<< endl;
}
if (regresi < 0.10 )
{
  cout << "hubungan korelasi diabaikan" <<endl;
}
}

if (regresi > 0)
{
  cout << "hubungan antara variable X dan Y adalah positif, dimana jika nilai X bertambah, maka nilai Y pun akan bertambah, dan juga sebaliknya" << endl;
}

else if (regresi < 0)
{
  cout << "hubungan antara variable X dan Y adalah negatif, dimana jika nilai x bertambah, maka nilai Y akan mengecil,dan juga sebaliknya";
}

else if (regresi = 0)
{
  cout << "tidak ada hubungan antara variable X dan Y";
}


}