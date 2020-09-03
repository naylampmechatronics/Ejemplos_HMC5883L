/****************************************************************************************
 Simple lectura
  
  Programa para realizar lecturas de un sensor HMC5883L
  
 Conexiones:
  ------------------------------------------------------------------------
  M.HMC5883L-> Arduino Uno,Nano,Mini | Arduino Mega,DUE | Arduino Leonardo
  ------------------------------------------------------------------------
  VCC      ->   5V                  |   5V             |   5V
  GND      ->   GND                 |   GND            |   GND
  SCL      ->   A5                  |   21             |   3
  SDA      ->   A4                  |   20             |   2 
  DRDY     ->   NC                  |   NC             |   NC
  ------------------------------------------------------------------------
  *No se puede cambiar de pines, los pines indicados son para la comunicación I2C 
   y son los pines SDA y SCL de cada placa respectivamente
   
 Dirección
  La direcion I2C del HMC5883L es 0x1E y no se puede cambiar
 
 Ejemplo desarrollado por Naylamp Mechatronics bajo licencia MIT (puede copiar, modificar, integrar o redistribuir)
 
 Última modificación el 02/09/2020
 
 Más información en:
   -https://naylampmechatronics.com/blog/49_tutorial-magnetometro-hmc5883l.html
   -https://github.com/naylampmechatronics/Ejemplos_HMC5883L
**************************************************************************************************/
#include "Wire.h"
#include "I2Cdev.h"
#include "HMC5883L.h"

HMC5883L magnetometro;

int16_t mx, my, mz;
void setup() {
    
    Serial.begin(9600);
    Serial.println("Inicializando Magnetometro...");
    //Inicializamos la comunicación I2C y el magnetómetro
    Wire.begin();
    magnetometro.initialize();
}

void loop() {
    //Obtenemos del magnetometro las componentes del campo magnético
    magnetometro.getHeading(&mx, &my, &mz);
    
    Serial.print("mx:");
    Serial.print(mx); 
    Serial.print("\tmy:");
    Serial.print(my);
    Serial.print("\tmz:");
    Serial.println(mz);
    delay(100);
}
