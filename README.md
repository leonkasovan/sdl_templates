```bash
git clone https://github.com/leonkasovan/sdl_templates.git
make
make sdl_joystick
make sdl_template
make sdl_embedded_font
```

Edit Makefile to use specific compiler  
```Makefile
SDL_VERSION = 2

#CC = gcc
#CXX = g++
#EXE =

CC = aarch64-buildroot-linux-gnu-gcc
EXE = _arm64

# CC = arm-buildroot-linux-gnueabihf-gcc
# EXE = _arm
```  
