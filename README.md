O SOLARIA é um sistema de monitoramento ambiental desenvolvido com Arduino Uno capaz de coletar dados de luminosidade, temperatura, umidade e presença de gases no ambiente. A partir dessas informações, o sistema realiza uma análise simples das condições monitoradas e classifica a situação em três níveis: normal, atenção ou crítico.

O projeto utiliza indicadores visuais através de LEDs e alertas sonoros por meio de um buzzer para informar rapidamente o estado do ambiente monitorado.

**objetivo**

O o projeto demonstra como sistemas embarcados podem ser utilizados para monitoramento em tempo real de condições ambientais, auxiliando na identificação de situações potencialmente perigosas.

A solução busca simular um sistema de alerta capaz de detectar alterações significativas nos sensores e informar os usuários por meio de sinais visuais e sonoros, permitindo uma resposta rápida diante de possíveis riscos.

**materiais**

Componentes Utilizados
Hardware
1 Arduino Uno
1 Sensor de Temperatura e Umidade DHT22
1 Sensor de Gás MQ
1 Sensor de Luminosidade (LDR)
1 LED Verde
1 LED Amarelo
1 LED Vermelho
3 Resistores para os LEDs
1 Buzzer Piezoelétrico
1 Protoboard
Jumpers para conexão
Software
Arduino IDE
Biblioteca DHT Sensor Library

**Explicação do Funcionamento**

O SOLARIA simula um sistema de monitoramento de eventos solares capaz de identificar condições que podem representar riscos para infraestruturas críticas, como redes elétricas, satélites e sistemas de telecomunicação.

Como a medição real de fenômenos espaciais exige equipamentos especializados e satélites em órbita, o projeto utiliza sensores eletrônicos para representar diferentes variáveis ambientais associadas aos efeitos de uma tempestade solar.

Variáveis Monitoradas
Intensidade de Radiação Solar (Simulada)

Representada pelo sensor LDR.

O aumento da luminosidade captada pelo sensor simula a elevação da atividade solar e da radiação proveniente do Sol. Valores mais elevados indicam maior intensidade do fenômeno monitorado.

Partículas Energéticas na Atmosfera (Simuladas)

Representadas pelo sensor MQ.

Neste projeto, o sensor de gás é utilizado como uma abstração para representar o aumento da concentração de partículas energéticas liberadas durante eventos solares extremos.

Temperatura Operacional

Representada pelo sensor DHT22.

A temperatura auxilia na análise das condições gerais do ambiente monitorado, servindo como um parâmetro complementar para a classificação dos níveis de alerta.

Umidade Relativa do Ar

Também medida pelo DHT22.

Embora não esteja diretamente relacionada à atividade solar, a umidade é registrada para complementar o monitoramento ambiental realizado pelo sistema.

**Lógica de Monitoramento**

O sistema cruza as informações coletadas pelos sensores para determinar o nível de risco associado à atividade solar simulada.

Operação Normal

Os indicadores permanecem dentro dos limites seguros.

LED verde aceso.
Nenhum alerta sonoro.
Atenção

São detectados sinais moderados de aumento da atividade solar simulada.

LED amarelo aceso.
Aviso exibido no Monitor Serial.
Alerta Crítico

São detectados níveis elevados de radiação e partículas energéticas simuladas.

LED vermelho aceso.
Buzzer ativado.
Alerta crítico exibido no Monitor Serial.

Esse cenário representa uma possível tempestade solar capaz de impactar sistemas tecnológicos e infraestruturas críticas.
