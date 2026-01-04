#include <iostream>
using namespace std;

int main(){
    int sonuc;
    int sayi1 ,sayi2 ,sayi3;
    cout << "Uc tam sayi giriniz.." <<endl ;
    cin >> sayi1 >> sayi2 >> sayi3 ;
   
    
if (sayi1 >= sayi2 and sayi1 >= sayi3 )
{   
sonuc = sayi1 ;
}
else if (sayi2 >= sayi1 and sayi2 >= sayi3)
{ 
    sonuc = sayi2 ;
}
else if (sayi3 >= sayi2 and sayi3 >= sayi1 )  
{
    sonuc = sayi3 ;         
}
  cout <<"Girilen en buyuk sayi: " << sonuc ;
  cout <<endl ;


    return 0;
}    