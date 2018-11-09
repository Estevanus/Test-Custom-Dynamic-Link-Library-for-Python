import ctypes
from ctypes import *
import bge


def show(cont):
	own = cont.owner
	this = bge.logic.expandPath("//")
	#print(this)
	#osclib = cdll.LaodLibrary("//osclib.dll")
	lok = this + "osclib.dll"
	print(lok)
	osclib = cdll.LaodLibrary("osclib.dll")
	#osclib = windll.LaodLibrary(lok)
	#own.text = str(osclib.kali(4,7))