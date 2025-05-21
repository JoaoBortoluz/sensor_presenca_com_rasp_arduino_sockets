# **Sistema de Monitoramento de Presença**

Este repositório trata-se de um servidor e cliente Sockets, que respectivamente, realiza o monitoramento da presença de objetos através de um sensor de movimento e ao detectar a presença do cliente, uma cancela é aberta.
A aplicação foi feita no microcomputador **RaspBerry Pi 4** com **Python** e um sensor de **Presença PIR HC-SR501** e um **Servo Motor**, ligados em um **Arduino UNO R3**.

### 1. Clonar o Repositório

Clone o projeto utilizando o comando:

```bash
git clone https://github.com/JoaoBortoluz/sensor_presenca_com_rasp_arduino_sockets.git
cd sensor_presenca_com_rasp_arduino_sockets
```

### 2. Executar a aplicação

Para executar a aplicação, utilize estes 3 comandos em terminais diferentes:
```bash
python server.py
```

```bash
python client.py
```

```bash
python read_presence.py
```

## E está pronto! 