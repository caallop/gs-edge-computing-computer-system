#include "DHT.h"

// Sensores
#define LDRPIN A0
#define MQ_PIN A1

// DHT22
#define DHTPIN 2
#define DHTTYPE DHT22

// LEDs
#define LED_VERDE 3
#define LED_AMARELO 4
#define LED_VERMELHO 5

// Buzzer
#define BUZZER 6

DHT dht(DHTPIN, DHTTYPE);

void setup() {

  Serial.begin(9600);

  pinMode(LDRPIN, INPUT);
  pinMode(MQ_PIN, INPUT);

  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);

  pinMode(BUZZER, OUTPUT);

  dht.begin();
}

void loop() {

  int gas = analogRead(LDRPIN);
  int lux = 1024 - analogRead(MQ_PIN);

  float temperatura = dht.readTemperature();
  float umidade = dht.readHumidity();

  if (isnan(temperatura) || isnan(umidade)) {
    Serial.println("Erro ao ler o DHT22!");
    return;
  }

  Serial.print("GÁS: ");
  Serial.print(gas);

  Serial.print(" | LUX: ");
  Serial.print(lux);

  Serial.print(" | TEMP: ");
  Serial.print(temperatura);

  Serial.print(" | UMIDADE: ");
  Serial.println(umidade);

  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);
  noTone(BUZZER);

  // CRÍTICO
  if (lux > 700 || gas > 900 && temperatura > 35) {

    digitalWrite(LED_VERMELHO, HIGH);

    tone(BUZZER, 1000);

    Serial.println(">>> ALERTA CRITICO SOLARIA <<<");
  }

  // ATENÇÃO
  else if (lux > 300 || gas >700 && temperatura > 5) {

    digitalWrite(LED_AMARELO, HIGH);

    Serial.println(">>> ATENCAO <<<");
  }

  // NORMAL
  else {

    digitalWrite(LED_VERDE, HIGH);

    Serial.println(">>> OPERACAO NORMAL <<<");
  }

  Serial.println("--------------------------------");

  delay(2000);
}