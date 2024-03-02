/*
Device: RG353P
OS: Recalbox
SDL: 1.2
typedef enum RG353P_ButtonType{
	RG353P_Button_B,
	RG353P_Button_A,
	RG353P_Button_X,
	RG353P_Button_Y,
	RG353P_Button_L1,
	RG353P_Button_R1,
	RG353P_Button_L2,
	RG353P_Button_R2,
	RG353P_Button_SELECT,
	RG353P_Button_START,
	RG353P_Button_F,
	RG353P_Button_L3,
	RG353P_Button_R3,
	RG353P_Button_UP,
	RG353P_Button_DOWN,
	RG353P_Button_LEFT,
	RG353P_Button_RIGHT
} RG353P_ButtonType;

typedef enum RG353P_AxisType{
	RG353P_Axis_Joystick_Left_Horizontal,
	RG353P_Axis_Joystick_Left_Vertical,
	RG353P_Axis_Joystick_Right_Horizontal,
	RG353P_Axis_Joystick_Right_Vertical,
} RG353P_AxisType;

==============================================
Device: RG35XX
OS: Koriki
SDL: 1.2
typedef enum RG35XX_ButtonType{
	RG35XX_Button_A,
	RG35XX_Button_B,
	RG35XX_Button_X,
	RG35XX_Button_Y,
	RG35XX_Button_L1,
	RG35XX_Button_R1,
	RG35XX_Button_L2,
	RG35XX_Button_R2,
	RG35XX_Button_SELECT,
	RG35XX_Button_START,
	RG35XX_Button_MENU,
	RG35XX_Button_VOLUME_UP,
	RG35XX_Button_VOLUME_DOWN,
	RG35XX_Button_UP,
	RG35XX_Button_DOWN,
	RG35XX_Button_LEFT,
	RG35XX_Button_RIGHT
} RG35XX_ButtonType;

==============================================
Device: Steamdeck
OS: Steam OS
SDL: 1.2
typedef enum Steamdeck_ButtonType{
	Steamdeck_Button_A,
	Steamdeck_Button_B,
	Steamdeck_Button_X,
	Steamdeck_Button_Y,
	Steamdeck_Button_L1,
	Steamdeck_Button_R1,
	Steamdeck_Button_SELECT,
	Steamdeck_Button_START,
	Steamdeck_Button_UNKNOWN,
	Steamdeck_Button_L3,
	Steamdeck_Button_R3
} Steamdeck_ButtonType;

typedef enum Steamdeck_AxisType{
	Steamdeck_Axis_Joystick_Left_Horizontal,
	Steamdeck_Axis_Joystick_Left_Vertical,
	Steamdeck_Axis_L2,
	Steamdeck_Axis_Joystick_Right_Horizontal,
	Steamdeck_Axis_Joystick_Right_Vertical,
	Steamdeck_Axis_R2
} Steamdeck_AxisType;

typedef enum Steamdeck_HatType{
	Steamdeck_Hat_Up = 1,
	Steamdeck_Hat_Left = 2,
	Steamdeck_Hat_Down = 4,
	Steamdeck_Hat_Right = 8
}
*/
#ifdef SDL_2
#include <SDL2/SDL.h>
#else
#include <SDL/SDL.h>
#endif

#define TEXT_LENGTH 1024
char msg_event_button[TEXT_LENGTH] = "Button's Event:";
char msg_event_hat[TEXT_LENGTH] = "   Hat's Event:";
char msg_event_axis[TEXT_LENGTH] = "  Axis's Event:";
char msg_event_key[TEXT_LENGTH] = "   Key's Event:";
char msg_global[TEXT_LENGTH] = {'\0'};

static const unsigned char embedded_font[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x50, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0xf8, 0x50, 0xf8, 0x50, 0x00, 0x00, 0x00, 0x78, 0xa0, 0x70, 0x28, 0xf0, 0x00, 0x00, 0x00, 0x88, 0x10, 0x20, 0x40, 0x88, 0x00, 0x00, 0x00, 0x40, 0xa0, 0x68, 0x90, 0x68, 0x00, 0x00, 0x00, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x40, 0x40, 0x40, 0x20, 0x00, 0x00, 0x00, 0x40, 0x20, 0x20, 0x20, 0x40, 0x00, 0x00, 0x00, 0x20, 0xa8, 0x70, 0xa8, 0x20, 0x00, 0x00, 0x00, 0x00, 0x20, 0x70, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x70, 0xc8, 0xc8, 0xc8, 0x70, 0x00, 0x00, 0x00, 0x30, 0x70, 0x30, 0x30, 0x78, 0x00, 0x00, 0x00, 0xf0, 0x18, 0x70, 0xc0, 0xf8, 0x00, 0x00, 0x00, 0xf8, 0x18, 0x30, 0x98, 0x70, 0x00, 0x00, 0x00, 0x30, 0x70, 0xd0, 0xf8, 0x10, 0x00, 0x00, 0x00, 0xf8, 0xc0, 0xf0, 0x18, 0xf0, 0x00, 0x00, 0x00, 0x70, 0xc0, 0xf0, 0xc8, 0x70, 0x00, 0x00, 0x00, 0xf8, 0x18, 0x30, 0x60, 0xc0, 0x00, 0x00, 0x00, 0x70, 0xc8, 0x70, 0xc8, 0x70, 0x00, 0x00, 0x00, 0x70, 0xc8, 0x78, 0x08, 0x70, 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x60, 0x20, 0x40, 0x00, 0x00, 0x10, 0x20, 0x40, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x40, 0x20, 0x10, 0x20, 0x40, 0x00, 0x00, 0x00, 0x78, 0x18, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x70, 0xa8, 0xb8, 0x80, 0x70, 0x00, 0x00, 0x00, 0x70, 0xc8, 0xc8, 0xf8, 0xc8, 0x00, 0x00, 0x00, 0xf0, 0xc8, 0xf0, 0xc8, 0xf0, 0x00, 0x00, 0x00, 0x70, 0xc8, 0xc0, 0xc8, 0x70, 0x00, 0x00, 0x00, 0xf0, 0xc8, 0xc8, 0xc8, 0xf0, 0x00, 0x00, 0x00, 0xf8, 0xc0, 0xf0, 0xc0, 0xf8, 0x00, 0x00, 0x00, 0xf8, 0xc0, 0xf0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x78, 0xc0, 0xd8, 0xc8, 0x78, 0x00, 0x00, 0x00, 0xc8, 0xc8, 0xf8, 0xc8, 0xc8, 0x00, 0x00, 0x00, 0x78, 0x30, 0x30, 0x30, 0x78, 0x00, 0x00, 0x00, 0xf8, 0x18, 0x18, 0xd8, 0x70, 0x00, 0x00, 0x00, 0xc8, 0xd0, 0xe0, 0xd0, 0xc8, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xf8, 0x00, 0x00, 0x00, 0xd8, 0xf8, 0xf8, 0xa8, 0x88, 0x00, 0x00, 0x00, 0xc8, 0xe8, 0xf8, 0xd8, 0xc8, 0x00, 0x00, 0x00, 0x70, 0xc8, 0xc8, 0xc8, 0x70, 0x00, 0x00, 0x00, 0xf0, 0xc8, 0xc8, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x70, 0xc8, 0xc8, 0xc8, 0x70, 0x08, 0x00, 0x00, 0xf0, 0xc8, 0xc8, 0xf0, 0xc8, 0x00, 0x00, 0x00, 0x78, 0xe0, 0x70, 0x38, 0xf0, 0x00, 0x00, 0x00, 0x78, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0xc8, 0xc8, 0xc8, 0xc8, 0x70, 0x00, 0x00, 0x00, 0xc8, 0xc8, 0xc8, 0x70, 0x20, 0x00, 0x00, 0x00, 0x88, 0xa8, 0xf8, 0xf8, 0xd8, 0x00, 0x00, 0x00, 0xc8, 0xc8, 0x70, 0xc8, 0xc8, 0x00, 0x00, 0x00, 0x68, 0x68, 0x78, 0x30, 0x30, 0x00, 0x00, 0x00, 0xf8, 0x30, 0x60, 0xc0, 0xf8, 0x00, 0x00, 0x00, 0x60, 0x40, 0x40, 0x40, 0x60, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x00, 0x00, 0x00, 0x60, 0x20, 0x20, 0x20, 0x60, 0x00, 0x00, 0x00, 0x20, 0x50, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x98, 0x98, 0x78, 0x00, 0x00, 0x00, 0xc0, 0xf0, 0xc8, 0xc8, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x78, 0xe0, 0xe0, 0x78, 0x00, 0x00, 0x00, 0x18, 0x78, 0x98, 0x98, 0x78, 0x00, 0x00, 0x00, 0x00, 0x70, 0xd8, 0xe0, 0x70, 0x00, 0x00, 0x00, 0x38, 0x60, 0xf8, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x70, 0x98, 0xf8, 0x18, 0x70, 0x00, 0x00, 0xc0, 0xf0, 0xc8, 0xc8, 0xc8, 0x00, 0x00, 0x00, 0x30, 0x00, 0x70, 0x30, 0x78, 0x00, 0x00, 0x00, 0x18, 0x00, 0x18, 0x18, 0x98, 0x70, 0x00, 0x00, 0xc0, 0xc8, 0xf0, 0xc8, 0xc8, 0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x60, 0x38, 0x00, 0x00, 0x00, 0x00, 0xd0, 0xf8, 0xa8, 0xa8, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xc8, 0xc8, 0xc8, 0x00, 0x00, 0x00, 0x00, 0x70, 0xc8, 0xc8, 0x70, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xc8, 0xc8, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x78, 0x98, 0x98, 0x78, 0x18, 0x00, 0x00, 0x00, 0xf0, 0xc8, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x78, 0xe0, 0x38, 0xf0, 0x00, 0x00, 0x00, 0x60, 0xf8, 0x60, 0x60, 0x38, 0x00, 0x00, 0x00, 0x00, 0x98, 0x98, 0x98, 0x78, 0x00, 0x00, 0x00, 0x00, 0xc8, 0xc8, 0xd0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x88, 0xa8, 0xf8, 0xd8, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x70, 0x70, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x98, 0x98, 0x78, 0x18, 0x70, 0x00, 0x00, 0x00, 0xf8, 0x30, 0x60, 0xf8, 0x00, 0x00, 0x00, 0x30, 0x20, 0x60, 0x20, 0x30, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x60, 0x20, 0x30, 0x20, 0x60, 0x00, 0x00, 0x00, 0x00, 0x28, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

void draw_char(SDL_Surface* surface, unsigned char symbol, int x, int y, unsigned short color) {
	x += (8 - 1) * 1;
	int flip = 0;
	if(symbol > 127) { // flip symbols over 128
		flip = 1;
		symbol -= 128;
	}
	const unsigned char* ptr = embedded_font + symbol * 8;

	for(int i = 0, ys = 0; i < 6; i++, ptr++, ys += 1)
		for(int col = 8 - 6, xs = x - col; col < 8; col++, xs -= 1)
			if((*ptr & 1 << col) && y + ys < surface->h && xs < surface->w )
				((unsigned short*)surface->pixels)[(y + flip * 4 + (1 - 2 * flip) * ys) * (surface->pitch >> 1) + xs] = color;

}

void draw_string(SDL_Surface* surface, const char* text, int orig_x, int orig_y, unsigned short color) {
	int x = orig_x, y = orig_y;
	while(*text) {
		if(*text == '\n') {
			x = orig_x;
			y += 8;
		} else {
			draw_char(surface, *text, x, y, color);
			x += 6;
		}
		text++;
	}
}

int main(int argc, char* argv[]) {
	puts("Available video drivers:");
	int numVideoDrivers = SDL_GetNumVideoDrivers();
	for (int i = 0; i < numVideoDrivers; i++) {
		puts(SDL_GetVideoDriver(i));
	}

	puts("Available audio drivers:");
	int numAudioDrivers = SDL_GetNumAudioDrivers();
	for (int i = 0; i < numAudioDrivers; i++) {
		puts(SDL_GetAudioDriver(i));
	}

	if (SDL_Init(SDL_INIT_JOYSTICK|SDL_INIT_VIDEO) < 0) {
		// Initialization failed
		fprintf(stderr, "SDL_Init failed: %s\n", SDL_GetError());
		return 1;
	}
	printf("Currently using audio driver: %s\n", SDL_GetCurrentAudioDriver());
	printf("Currently using video driver: %s\n", SDL_GetCurrentVideoDriver());

	int numJoysticks = SDL_NumJoysticks();
	if (numJoysticks < 1) {
		// No joysticks are connected
		fprintf(stderr, "SDL_NumJoysticks failed: %s\n", SDL_GetError());
		SDL_Quit();
		return 1;
	}

	// Open the first joystick (index 0)
	SDL_Joystick* joystick = SDL_JoystickOpen(0);
	if (!joystick) {
		// Failed to open the joystick
		fprintf(stderr, "SDL_JoystickOpen failed: %s\n", SDL_GetError());
		SDL_Quit();
		return 1;
	}
	SDL_JoystickEventState(SDL_ENABLE);

	// Create a window
#ifdef SDL_2
	SDL_DisplayMode current;
	SDL_GetCurrentDisplayMode(0, &current);
	SDL_Window *Screen = SDL_CreateWindow("Test Joystick", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, current.w, current.h, SDL_WINDOW_FULLSCREEN);
    if (!Screen) {
		fprintf(stderr, "SDL_CreateWindow failed: %s\n", SDL_GetError());
		return 1;
	}
	//Get window surface
    SDL_Surface* screen = SDL_GetWindowSurface(Screen);
#else
	SDL_Surface* screen = SDL_SetVideoMode(640, 480, 16, SDL_FULLSCREEN|SDL_HWSURFACE);
#endif	
	if (!screen) {
		fprintf(stderr, "SDL init scrren failed: %s\n", SDL_GetError());
		return 1;
	}

	SDL_Surface* msg_joystick_info = SDL_CreateRGBSurface(SDL_SWSURFACE, 300, 200, 16, 0, 0, 0, 0);
	SDL_Surface* msg_event = SDL_CreateRGBSurface(SDL_SWSURFACE, 300, 40, 16, 0, 0, 0, 0);
	if (!msg_joystick_info || !msg_event) {
		fprintf(stderr, "SDL_CreateRGBSurface failed: %s\n", SDL_GetError());
		return 1;
	}

	int yy = 0;
	SDL_version compiled;
	SDL_version linked;
	SDL_VERSION(&compiled);
	SDL_GetVersion(&linked);

	SDL_FillRect(msg_joystick_info, NULL, SDL_MapRGB(msg_joystick_info->format, 0, 0, 0)); // Clear msg_joystick_info.
	snprintf(msg_global, TEXT_LENGTH, "We compiled against SDL version %u.%u.%u", compiled.major, compiled.minor, compiled.patch);
	draw_string(msg_joystick_info, msg_global, 0, yy, SDL_MapRGB(msg_event->format, 0, 255, 0)); yy += 10;
	snprintf(msg_global, TEXT_LENGTH, "But we are linking against SDL version %u.%u.%u", linked.major, linked.minor, linked.patch);
	draw_string(msg_joystick_info, msg_global, 0, yy, SDL_MapRGB(msg_event->format, 0, 255, 0)); yy += 10;
#ifdef SDL_2	
	draw_string(msg_joystick_info, SDL_JoystickName(joystick), 0, yy, SDL_MapRGB(msg_event->format, 0, 255, 0)); yy += 10;
#else
	draw_string(msg_joystick_info, SDL_JoystickName(0), 0, yy, SDL_MapRGB(msg_event->format, 0, 255, 0)); yy += 10;
#endif
	snprintf(msg_global, TEXT_LENGTH, " Num. Buttons = %d", SDL_JoystickNumButtons(joystick));
	draw_string(msg_joystick_info, msg_global, 0, yy, SDL_MapRGB(msg_event->format, 0, 255, 0)); yy += 10;
	snprintf(msg_global, TEXT_LENGTH, " Num. Axes    = %d", SDL_JoystickNumAxes(joystick));
	draw_string(msg_joystick_info, msg_global, 0, yy, SDL_MapRGB(msg_event->format, 0, 255, 0)); yy += 10;
	snprintf(msg_global, TEXT_LENGTH, " Num. Hats    = %d", SDL_JoystickNumHats(joystick));
	draw_string(msg_joystick_info, msg_global, 0, yy, SDL_MapRGB(msg_event->format, 0, 255, 0)); yy += 10;
	
	snprintf(msg_global, TEXT_LENGTH, "Available video drivers: (using=%s)", SDL_GetCurrentVideoDriver());
	draw_string(msg_joystick_info, msg_global, 0, yy, SDL_MapRGB(msg_event->format, 0, 255, 0)); yy += 10;
	for (int i = 0; i < numVideoDrivers; i++) {
		draw_string(msg_joystick_info, SDL_GetVideoDriver(i), 5, yy, SDL_MapRGB(msg_event->format, 0, 255, 0)); yy += 10;
	}
	snprintf(msg_global, TEXT_LENGTH, "Available audio drivers: (using=%s)", SDL_GetCurrentAudioDriver());
	draw_string(msg_joystick_info, msg_global, 0, yy, SDL_MapRGB(msg_event->format, 0, 255, 0)); yy += 10;
	for (int i = 0; i < numAudioDrivers; i++) {
		draw_string(msg_joystick_info, SDL_GetAudioDriver(i), 5, yy, SDL_MapRGB(msg_event->format, 0, 255, 0)); yy += 10;
	}

	snprintf(msg_global, TEXT_LENGTH, "Press button [6] and [7] to quit");
	draw_string(msg_joystick_info, msg_global, 0, yy, SDL_MapRGB(msg_event->format, 255, 255, 0)); yy += 10;
	snprintf(msg_global, TEXT_LENGTH, "Press key [ESC] to quit");
	draw_string(msg_joystick_info, msg_global, 0, yy, SDL_MapRGB(msg_event->format, 255, 255, 0)); yy += 10;
	

	// Main loop
	int quit = 0;
	while (!quit) {
		SDL_Event ev;

		while (SDL_PollEvent(&ev)) {
			switch (ev.type) {
				case SDL_QUIT:
					quit = 1;
					break;
				case SDL_KEYDOWN:
					snprintf(msg_event_key, TEXT_LENGTH, "   Key's Event: sym=%d scancode=%d (pressed)", ev.key.keysym.sym, ev.key.keysym.scancode);
					if (ev.key.keysym.sym == SDLK_ESCAPE)
						quit = 1;
					break;
				case SDL_KEYUP:
					snprintf(msg_event_key, TEXT_LENGTH, "   Key's Event: sym=%d scancode=%d (released)", ev.key.keysym.sym, ev.key.keysym.scancode);
					break;
				case SDL_JOYBUTTONDOWN:
					if (ev.jbutton.which == 0){
						snprintf(msg_event_button, TEXT_LENGTH, "Button's Event: button=%d state=%d (pressed)", ev.jbutton.button, ev.jbutton.state);
					}
					break;
				case SDL_JOYBUTTONUP:
					if (ev.jbutton.which == 0){
						snprintf(msg_event_button, TEXT_LENGTH, "Button's Event: button=%d state=%d (released)", ev.jbutton.button, ev.jbutton.state);
					}
					break;
				case SDL_JOYHATMOTION:
					if (ev.jhat.which == 0){
						snprintf(msg_event_hat, TEXT_LENGTH, "   Hat's Event: value=%d hat=%d", ev.jhat.value, ev.jhat.hat);
					}
					break;
				case SDL_JOYAXISMOTION:
					if (ev.jaxis.which == 0 && abs(ev.jaxis.value)>8000){
						snprintf(msg_event_axis, TEXT_LENGTH, "  Axis's Event: value=%d axis=%d", ev.jaxis.value, ev.jaxis.axis);
					}
					break;
				default:
					break;
			}
		}

		SDL_FillRect(msg_event, NULL, SDL_MapRGB(msg_event->format, 0, 0, 0)); // Clear the msg_event with black.
		draw_string(msg_event, msg_event_button, 0, 0, SDL_MapRGB(msg_event->format, 255, 255, 255));
		draw_string(msg_event, msg_event_hat, 0, 10, SDL_MapRGB(msg_event->format, 255, 255, 255));
		draw_string(msg_event, msg_event_axis, 0, 20, SDL_MapRGB(msg_event->format, 255, 255, 255));
		draw_string(msg_event, msg_event_key, 0, 30, SDL_MapRGB(msg_event->format, 255, 255, 255));
		SDL_BlitSurface(msg_joystick_info, NULL, screen, &(SDL_Rect){200, 60, 0, 0});
		SDL_BlitSurface(msg_event, NULL, screen, &(SDL_Rect){200, 250, 0, 0});
#ifdef SDL_2
		SDL_UpdateWindowSurface(Screen); //Update the surface
#else
		SDL_Flip(screen);
#endif

		if (SDL_JoystickGetButton(joystick, 6) && SDL_JoystickGetButton(joystick, 7)) quit = 1;
	}

	// Clean up
	SDL_FreeSurface(msg_joystick_info);
	SDL_FreeSurface(msg_event);
#ifdef SDL_2	
    SDL_DestroyWindow(Screen);
#endif	
	SDL_JoystickClose(joystick);
	SDL_Quit();

	return 0;
}