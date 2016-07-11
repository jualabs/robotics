import pygame
import serial
import threading

direction = 'n'

ser = serial.Serial("/dev/tty.HC-05-DevB", writeTimeout = 0.1)
ser.baudrate = 9600

def do_every (interval):
	global direction
	global ser
	if direction in ['w','s','a','d'] :
    		ser.write(direction)
		threading.Timer (interval, do_every, [interval]).start()

pygame.init()

# d = {0: "w", 1: "d", 2: "s", 3: "a"}
directions = {(3,1):'a',(3,-1):'d',(3,0):'x',(4,1):'w',(4,-1):'s',(4,0):'y'}

done = False

joystick = pygame.joystick.Joystick(0)
joystick.init()
print(joystick.get_numaxes())

while done is False:
  #for event in pygame.event.get(): # User did something
	event = pygame.event.wait()
	
	if event.type in [pygame.JOYBUTTONDOWN]:
		# print("Joystick button pressed.")
		# print(event.dict)
		btn = event.dict['button']
		if (btn is 8):
			done = True
		#elif btn in d.keys():
		#	ser.write(d[btn])
	if event.type in [pygame.JOYAXISMOTION]:
		direction = directions.get((event.axis,int(event.value)),'n')
		do_every(0.1)
ser.close()
