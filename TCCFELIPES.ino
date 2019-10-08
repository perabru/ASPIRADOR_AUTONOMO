#include <Ultrasonic.h>

Ultrasonic ultrassom(4,3);
Ultrasonic ultrassom2(2,7);
Ultrasonic ultrassom3(5,6);

//int motorPin = 9;

long distancia;
long distancia2;
long distancia3;

//Programa : Controle 2 motores DC usando Ponte H L298N
//Autor : FILIPEFLOP
 
//Definicoes pinos Arduino ligados a entrada da Ponte H
int IN1 = 12;
int IN2 = 11;
int IN3 = 10;
int IN4 =  9;


//Criando funções para rodar o motor para frente e para trás

void frente(void){
  
Serial.println("frente");
digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 delay(2000);
 //Para o motor A
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, HIGH);
 delay(500);
 //Gira o Motor B no sentido horario
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
 delay(2000);
 //Para o motor B
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, HIGH);
 delay(500);
  
  }

  
void tras(void){
  
Serial.println("re");
digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 delay(2000);
 //Para o motor A
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, HIGH);
 delay(500);
 //Gira o Motor B no sentido horario
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
 delay(2000);
 //Para o motor B
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, HIGH);
 delay(500);
  
  }

void setup() {
  //Velocidade de transferencia
  Serial.begin(9600);
 //Define os pinos como saida
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
}

// Função que se repete infinitamente quando a placa é ligada

void loop(){

// CODIGO DO SENSOR
distancia = ultrassom.Ranging(CM);// ultrassom.Ranging(CM) retorna a distancia em cm
distancia2 = ultrassom2.Ranging(CM);
distancia3= ultrassom3.Ranging(CM);
delay(100);
//Teste de impressãoda distancia
//Serial.println(distancia3);

//if(distancia<=5 || distancia2<=5 || distancia3<=5){

if(distancia<=5 || distancia3<=5){


//código para dar ré
 tras();
 

}else{

frente();




 }
  //Gira o Motor A no sentido horario
 /*digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 delay(2000);
 //Para o motor A
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, HIGH);
 delay(500);
 //Gira o Motor B no sentido horario
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
 delay(2000);
 //Para o motor B
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, HIGH);
 delay(500);
 
 //Gira o Motor A no sentido anti-horario
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 delay(2000);
 //Para o motor A
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, HIGH);
 delay(500);
 //Gira o Motor B no sentido anti-horario
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
 delay(2000);
 //Para o motor B
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, HIGH);
 delay(500);*/
}
