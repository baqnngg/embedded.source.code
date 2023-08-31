import serial
ser = serial.Serial('COM21', 9600)


def move(direction):
    if(direction == "right"):
        ser.write("2")
    if(direction == "left"):
        ser.write("3")
    if(direction == "go"):
        ser.write("1")
    else:
        ser.write("none")