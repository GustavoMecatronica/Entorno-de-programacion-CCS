////////////////DIRECTIVAS//////////////////////
#include <16f887.h> //libreria del microcontrolador
#fuses XT, NOPROTECT, NOWDT, MCLR  //aqui declaramos los fusibles; para ir a la fusibles vamos a la pesta�a View>Config Bits>seleccionamos el pic que usamos.
#use delay(internal=4000000) //aqui indicamos el tipo de reloj y la frecuencia
#BYTE PORTA= 5  //con estas dos instrucciones se le indica al microcontrolador la direccion de memoria RAM de cada puerto
#BYTE PORTB= 6
#DEFINE ENTRADA PORTA,0  // aqui le asignamos un nombre a los pines
#DEFINE SALIDA  PORTB,5
///////////VARIABLES GLOBALES////////////////////////
int contador=0;
float suma=0;
int datos[5]={1,2,3,4,5};
void motor();
///////////FUNCION PRINCIPAL////////////////////
void main (){
///////////distintas formas de delcarar un puerto como entrada o salida///////////
set_tris_b(0b00000000); 
set_tris_a(0xFF);
set_tris_c(0b01010000);

/////////////como activar o desactivar un pin especifico de un puerto//////////////
output_low(PIN_B0);
delay_ms(500);
output_high(PIN_B0);
delay_ms(500);

bit_set(PORTB,5);

bit_clear(PORTB,7);

////////////como sacar un valor en un puerto//////////////////////
PORTB=0xFF;//pone todo el puerto b en un valor alto (5V)
PORTB=0B10010100; /*pone un valor especifico a cada pin, el bit mas a la derecha es el pin B0 y el pin mas a la izquierda es el pin B7, dicho
de esta forma, el pin B0 se pone a 0V y el pin B7 se pone a 5V */

//////////como invertir el valor de un pin ////////////   
output_toggle(PIN_b1);
///////////como preguntar si una entrada esta activada////////////////
if(bit_test(PORTA,3)){  //variable o pin dentro de los parentesis de bit_test
//instrucciones si la variable o pin esta activada/o
 }else{
   //isntrucciones si la variable o pin esta desactivada/o
 }
//////////como preguntar si una entrada esta desactivada/////////////
if(!bit_test(ENTRADA)){  
//isntrucciones si la variable o pin esta desactivada/o
 }else{
   //instrucciones si la variable o pin esta activada/o
 }
//////////////como hacer un bucle infinito////////
while(TRUE){
//intrucciones que se repetiran por siempre
}

do{

}while(TRUE);

for(;;){

//instrucciones

}

//////como llamar una funcion/////

motor();


}
////////////////OTRAS FUNCIONES/////////////////////////
void motor(){
///////variables locales//////
int var1=0;
float division=0;

//isntrucciones o estructuras de la funcion motor

}
