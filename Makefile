SDL_VERSION = 1

# CC = gcc
# CXX = g++
# EXE = ""

CC = aarch64-buildroot-linux-gnu-gcc
EXE = "_arm64"

# CC = arm-buildroot-linux-gnueabihf-gcc
# EXE = "_arm"

SYSROOT = $(shell $(CC) -print-sysroot)
PKGCONFIG = pkg-config

# Choose libraries based on SDL_VERSION
ifeq ($(SDL_VERSION), 1)
	SDL_LIBS += `$(PKGCONFIG) sdl --libs`
	SDL_TTF_LIB = -lSDL_ttf
	SDL_CFLAGS += `$(PKGCONFIG) sdl --cflags` -DSDL_1
else
	SDL_LIBS += `$(PKGCONFIG) sdl2 --libs`
	SDL_TTF_LIB = -lSDL2_ttf
	# SDL_LIBS += $(SYSROOT)/usr/lib/libSDL2.a -lm
	SDL_CFLAGS += `$(PKGCONFIG) sdl2 --cflags` -DSDL_2
endif

CFLAGS = -Wall -Wno-narrowing -O2 -fomit-frame-pointer $(SDL_CFLAGS)
LIBS = -s $(SDL_LIBS)

sdl_info: sdl_info.c
	$(CC) -o $@$(EXE) sdl_info.c $(CFLAGS) $(LIBS)

sdl_joystick: sdl_joystick.c
	$(CC) -o $@$(EXE) sdl_joystick.c $(CFLAGS) $(LIBS)

sdl_template: sdl_template.cpp
	$(CXX) -o $@$(EXE) sdl_template.cpp $(CFLAGS) $(LIBS) $(SDL_TTF_LIB)

sdl_embedded_font: sdl_embedded_font.c
	$(CC) -o $@$(EXE) sdl_embedded_font.c $(CFLAGS) $(LIBS)
