#include <stdio.h>
#include <conio.h>
int main (){
    float x,y,hasil;
    char tanda;
    start :
    system ("color 2"); //warna
    printf ("\t\t\t +------------------------------+>\n");
    printf ("\t\t\t\t\tKalkulator Simple\n");
    printf ("<\t\t\t +------------------------------+>\n");
    awal :
    printf ("masukkan angka pertama : \n "); scanf ("%f", &x);
    printf ("+ - x / :   \n ");  scanf (" %c ", &tanda);
    printf ("\n");
    printf ("masukkan angka kedua :  \n "); scanf(" %f ", &y);
   if (tanda == '+' ) hasil = x + y;
   else if (tanda == '-') hasil = x - y;
   else if ( tanda == 'x' ) hasil = x*y;
   else if (tanda == '/') hasil = x/y;
   else { 
    printf ("masukkan tanda yg bener.+ - x / \n");
    goto awal;
   
   }
   printf ("%c", tanda);
   printf ("%.2f", hasil);
   getch (); //menahan program, jika ingin lanjut tekan keyboard sembarang
   system ("cls"); //mengclear hasil program
   goto start;
   return 0; }
