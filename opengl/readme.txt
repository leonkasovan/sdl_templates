
MSYS build:
	make -f Makefile.win.msys

Linux build:
	make -f Makefile.linux.ubuntu

Notes:
libopengl32.a in MSYS2 provides only OpenGL 1.1 functions.
For modern OpenGL, use an extension loader like GLAD or GLEW.
Set up an OpenGL context with GLFW, SDL, or another library.

Ubuntu:
	sudo apt install libsdl2-image-dev