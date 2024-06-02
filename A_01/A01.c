
#include "io.h"
#include "My_AED1.h"


void method_01()
{
    printf("\n%d\n", f_01("5aP4+0_8r4nK0"));
}

int f_01(char p[])
{
    int x = 0, y = 0;
    bool r = false, s = false , t = false;
    bool u = false , v = false, w = false;

    for (x= 0; x < strlen(p);x = x +1)
    {
      r = ('a' <= p[x] && p[x] <= 'z');
      s = ('A' <= p[x] && p[x] <= 'Z');
      t = ('0' <  p[x] && p[x] <= '9');
      u = (r || s ) && !w; v = !u && t; w = !v;
      if (u) y = y+1; else if (v) y = y-1; }
      return (y);
}
/*

Entrar com uma opcao: 1

-1

*/



void method_02()
{
    printf("\nf_02(35,75) = %d\n", f_02(35,75));
}

int f_02(int a , int b)
{
    if (a%2==0 && b%2==0) return (f_02(a/2,b/2));
    else 
    if (a%2!=0 && b%2==0) return (f_02(b%a, b/2));
    else 
    if (a%2==0 && b%2!=0) return (f_02(a/2, a%b));
    return ((b-1)%(a-1)/2);
}
/*

Entrar com uma opcao: 2

f_02(35,75) = 3

*/

void method_03()
{
    int x = 1;

    for ( int x = 0; x <= 5; x = x +1)
    {printf("\nx = %d", 2*x+1);}

    printf("\n");

    for (int x = 1; x <= (5*3); x = x +3);
    {
         printf("\nx = %d", (4*x+6)/6); 
    }
    
}
/*

??????? loop não funciona

Entrar com uma opcao: 3

x = 1
x = 3
x = 5
x = 7
x = 9
x = 11

x = 1
*/


void method_04()
{
    int x = 1, y = 1, v=0, w=0, m=2, n=0;
    printf("\nn= "); scanf("%d", &n); getchar();
    printf("%d %d", x ,y );
    while (m<n){ v = x +y ; m = m+1 ; printf("%d ",v);
    if (m<n-1){w=x+y+v+1;m=m+1; printf("%d ", w);
    }
    x = v; y =w;
    }
    
}
/*

Entrar com uma opcao: 4

n= 5
1 12 5 7
*/


void method_05()
{
    printf("\n%d\n" ,f_05("14641"));
}

int f_05(char *s)
{
  int x =0, y=strlen(s)-1;
  while (x<=y && s[x]==s[y]) { x=x+1; y=y-1; }
  return (x-y + s[x]-s[y]);
}
/*

Entrar com uma opcao: 5

2

*/



/*
 Funcao principal.
 @return codigo de encerramento
*/
int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        //  IO_id("EXEMPLO0500 - Programa - v0.0");
        // ler do teclado
        IO_println("\nOpcoes");
        IO_println("0 - parar");
        IO_println("1 -  method_01");
        IO_println("2 -  method_02");
        IO_println("3 -  method_03");
        IO_println("4 -  method_04");
        IO_println("5 -  method_05");
        IO_println("6 -  method_06");
        IO_println("7 -  method_07");
        IO_println("8 -  method_08");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");
        // testar valor
        switch (x)
        {
        case 1:
            method_01();
            break;
        case 2:
            method_02();
            break;
        case 3:
            method_03();
            break;
        case 4:
            method_04();
            break;
        case 5:
            method_05();
            break;

        } // end switch
    } while (x != 0);
    // encerrar
    // IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )