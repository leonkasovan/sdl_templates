SDL_VERSION = 2
TARGET_NAME = sdl_joystick

CC = gcc
CXX = g++
EXE = $(TARGET_NAME)

# CC = aarch64-buildroot-linux-gnu-gcc
# EXE = $(TARGET_NAME)_arm64

# CC = arm-buildroot-linux-gnueabihf-gcc
# EXE = $(TARGET_NAME)_arm

SYSROOT = $(shell $(CC) -print-sysroot)
PKGCONFIG = $(SYSROOT)/usr/bin/pkg-config

# Choose libraries based on SDL_VERSION
ifeq ($(SDL_VERSION), 1)
	SDLCONFIG = $(SYSROOT)/usr/bin/sdl-config
	SDL_LIBS += -lSDL #-lSDL_ttf
	SDL_CFLAGS += -DSDL_1
else
	SDLCONFIG = $(SYSROOT)/usr/bin/sdl2-config
	SDL_LIBS += -lSDL2 #-lSDL2_ttf
	SDL_CFLAGS += `$(SDLCONFIG) --cflags` -DSDL_2
endif

CFLAGS = -Wall -Wno-narrowing -O2 -fomit-frame-pointer $(SDL_CFLAGS)
LIBS = -s $(SDL_LIBS)

all:
	$(CC) -o $(EXE) sdl_joystick.c $(CFLAGS) $(LIBS)

ex0:
	$(CXX) -o $(EXE) sdl_template.cpp $(CFLAGS) $(LIBS)

ex1:
	$(CC) -o sdl_embedded_font sdl_embedded_font.c $(CFLAGS) $(LIBS)

