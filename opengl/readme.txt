
MSYS build:
	make -f Makefile.win.msys

Linux build:
	make -f Makefile.linux.ubuntu

Raspberry Pi 4 build:
	make -f Makefile.linux.rpi4

RG353P build:
	make -f Makefile.linux.rg353p

Notes:
libopengl32.a in MSYS2 provides only OpenGL 1.1 functions.
For modern OpenGL, use an extension loader like GLAD or GLEW.
Set up an OpenGL context with GLFW, SDL, or another library.

Linux:
	sudo apt install libsdl2-dev libsdl2-image-dev