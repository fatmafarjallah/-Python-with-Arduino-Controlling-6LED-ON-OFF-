import serial 
import time   
 
arduino = serial.Serial('COM3',9600) 
time.sleep(2) 

print arduino.readline() 
print ("Enter 1/2/3/4/5/6 to get LED ON & 0 to get OFF")

 
while 1:      

    var = raw_input() 
   
    
    if (var == '1'): 
        arduino.write('1') 
        print ("LED1 turned ON")
        time.sleep(1)
    if (var == '2'): 
        arduino.write('2') 
        print ("LED2 turned ON")
        time.sleep(1)
    if (var == '3'): 
        arduino.write('3') 
        print ("LED3 turned ON")
        time.sleep(1)
    if (var == '4'): 
        arduino.write('4') 
        print ("LED4 turned ON")
        time.sleep(1)
    if (var == '5'): 
        arduino.write('5') 
        print ("LED5 turned ON")
        time.sleep(1)
    if (var == '6'): 
        arduino.write('6') 
        print ("LED6 turned ON")
        time.sleep(1)

        
    if (var == '0'): 
        arduino.write('0') 
        print ("LED turned OFF")
        time.sleep(1)

        
