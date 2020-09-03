# Ejemplos_HMC5883L
Códigos de ejemplo para el Magnetómetro HMC5883L

![Módulo Magnetómetro 3-ejes HMC5883L](https://naylampmechatronics.com/2563-large_default/modulo-brujula-digital-hmc5883l.jpg)

Información detallada de los ejemplos en: [Tutorial Magnetómetro HMC5883L](https://naylampmechatronics.com/blog/49_tutorial-magnetometro-hmc5883l.html)

## Contenido
* **SimpleLectura:** Programa para realizar lecturas de un sensor HMC5883L
* **BrujulaDigital:** Realiza el cálculo del ángulo de nuestra orientación con respecto al Norte.

## Requerimientos
 **Software**
  * IDE Arduino
  * Librería [Wire](https://www.arduino.cc/en/Reference/Wire) (Ya viene instalada en Arduino)
  * Librería [i2cdevlib](https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/I2Cdev)
  * Librería [HMC5883L](https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/HMC5883L)
  
 **Hardware**
  * [Arduino Uno](https://naylampmechatronics.com/arduino-tarjetas/8-arduino-uno-r3.html) (o cualquier modelo)
  * [Módulo HMC5883L](https://naylampmechatronics.com/sensores-varios/89-modulo-brujula-digital-hmc5883l.html) 
  
## Conexiones
  
  Módulo HMC5883L| Arduino Uno,Nano,Mini | Arduino Mega,DUE | Arduino Leonardo
  ---------|-----------------------|------------------|----------------------
  VCC      |   5V                  |   5V             |   5V
  GND      |   GND                 |   GND            |   GND
  SCL      |   A5                  |   21             |   3
  SDA      |   A4                  |   20             |   2 
  DRDY     |   NC                  |   NC             |   NC
   
No se puede cambiar de pines, los pines indicados son para la comunicación I2C y son los pines SDA y SCL de cada placa respectivamente

## Dirección del módulo I2C
La direcion I2C del HMC5883L es 0x1E y no se puede cambiar

## Licencia
Los ejemplos son Open Source, desarrollados por el equipo de Naylamp Mechatronics bajo [licencia MIT](LICENSE)
 
## Links 
 * [Tutorial Magnetómetro HMC5883L](https://naylampmechatronics.com/blog/49_tutorial-magnetometro-hmc5883l.html)
 * [Módulo Magnetómetro 3-ejes HMC5883L](https://naylampmechatronics.com/sensores-varios/89-modulo-brujula-digital-hmc5883l.html) 
 * [I2Cdevlib-HMC5883L](https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/HMC5883L)
