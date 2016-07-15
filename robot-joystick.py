import pygame
import serial
import threading

def do_every (interval):
	global direction
	global ser
	if direction in ['w','s','a','d'] :
    		ser.write(direction)
		threading.Timer (interval, do_every, [interval]).start()

if __name__ == '__main__':
	direction = 'n'

	ser = serial.Serial("/dev/tty.HC-05-DevB", writeTimeout = 0.1)
	ser.baudrate = 9600
	done = False
	directions = {(3,1):'a',(3,-1):'d',(3,0):'x',(4,1):'w',(4,-1):'s',(4,0):'y'}
	pygame.init()

	joystick = pygame.joystick.Joystick(0)
	joystick.init()

	while done is False:
		event = pygame.event.wait()
	
		if event.type in [pygame.JOYBUTTONDOWN]:
			btn = event.dict['button']
			if (btn is 8):
				done = True
		if event.type in [pygame.JOYAXISMOTION]:
			direction = directions.get((event.axis,int(event.value)),'n')
			do_every(0.1)
	ser.close()
