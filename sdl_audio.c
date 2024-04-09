// SDL 2 Only
#include <SDL.h>

int main(int argc, char* argv[]) {
    if (argc != 7) {
        fprintf(stdout, "Usage: %s <path/to/your/file.wav>\n\n", argv[0]);

		for (int i=0;i<argc;i++){
			fprintf(stdout, "Argv[%d]: %s\n", i, argv[i]);
		}
        return -1;
    }

    // Initialize SDL2
    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        fprintf(stdout, "SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return -1;
    }

    // Open Audio Device
    SDL_AudioSpec wavSpec;
    Uint8* wavBuffer;
    Uint32 wavLength;

    if (SDL_LoadWAV(argv[1], &wavSpec, &wavBuffer, &wavLength) == NULL) {
        fprintf(stdout, "Could not load WAV file! SDL_Error: %s\n", SDL_GetError());
        SDL_Quit();
        return -1;
    }

    SDL_AudioDeviceID audioDevice;
    audioDevice = SDL_OpenAudioDevice(NULL, 0, &wavSpec, NULL, 0);
    if (audioDevice == 0) {
        fprintf(stdout, "Could not open audio device! SDL_Error: %s\n", SDL_GetError());
        SDL_FreeWAV(wavBuffer);
        SDL_Quit();
        return -1;
    }

    // Queue Audio Data
    SDL_QueueAudio(audioDevice, wavBuffer, wavLength);
    SDL_PauseAudioDevice(audioDevice, 0);  // Unpause audio device to start playback

    // Wait for Playback to Finish
    while (SDL_GetQueuedAudioSize(audioDevice) > 0) {
        SDL_Delay(100);  // Adjust the delay as needed
    }

    // Clean Up
    SDL_CloseAudioDevice(audioDevice);
    SDL_FreeWAV(wavBuffer);
    SDL_Quit();

    return 0;
}
