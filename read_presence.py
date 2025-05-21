import serial
import time
from datetime import datetime


serial_port_name = '/dev/ttyACM0' 
serial_port = serial.Serial(serial_port_name, 9600)
time.sleep(2)


def datetime_now():
    now = datetime.now()
    data_str = now.strftime("%d-%m-%Y-%H:%M:%S")
    return data_str

try:
    while True:
        if serial_port.in_waiting > 0:
            data = serial_port.readline().decode('utf-8').strip()
            if data:
                print("Recebido", data)
                print(datetime_now())
except KeyboardInterrupt:
    print("Close")
    serial_port.close()




