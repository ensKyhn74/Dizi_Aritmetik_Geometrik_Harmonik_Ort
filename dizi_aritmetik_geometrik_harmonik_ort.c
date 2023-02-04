#include <stdio.h>
#include <math.h>
// n = 3 olsun elemanlar: 1 3 5 
// Aritmetik Ortalama = (1 + 3 + 5) / 3 = 3
// Geometrik Ortalama = (1 * 3 * 5)^(1/3) = 2.47
// Harmonik Ortalama = 3 / (1/1 + 1/3 + 1/5) = 1.96

// n elemanlı dizinin Aritmetik,Geometrik ve Harmonik Ortalamasını hesapla
int main() 

{
    
 int i,n;  
     
 float AritmetikOrt = 0.0;
 
 float GeometrikOrt = 1.0;
   
 float HarmonikOrt = 0.0;  
 
 printf("dizinin eleman sayisini girin: ");
 scanf("%d",&n); // n eleman sayısı 

 int dizi[n];
  
 for(i = 0 ; i < n ; i++) 
 {
  printf("dizinin %d. elemanini girin: ",i+1);   
  scanf("%d",&dizi[i]);   
 }
 
 for(i = 0 ; i < n ; i++)
 {
 AritmetikOrt = AritmetikOrt + dizi[i];
 
 GeometrikOrt = GeometrikOrt * dizi[i];
 
 HarmonikOrt = HarmonikOrt + 1.0 / dizi[i];
 }
 
 AritmetikOrt = AritmetikOrt / n;
 
 GeometrikOrt = pow(GeometrikOrt,(1.0/n));   
 
 HarmonikOrt = n / HarmonikOrt; 
 
 printf("Aritmetik Ortalama = %.2f\n",AritmetikOrt);
 printf("Geometrik Ortalama = %.2f\n",GeometrikOrt);
 printf("Harmonik Ortalama = %.2f\n",HarmonikOrt);

 return 0;
  
}