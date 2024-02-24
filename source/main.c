#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <3ds.h>
#include <unistd.h>
#define ARR_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

int main()
{
	gfxInitDefault();
	consoleInit(GFX_BOTTOM, NULL);

	bool hasDone = 0; // 0 is false i just wanted to make my code cooler
	char* things[] = {
		"I love cheese, don't you?",
		"(Insert Q*BERT language)",
		"I was made in C!",
		"Drag and drop nothing here to exit!",
		"Do you not like me?",
		"Rev up!",
		"Power up!",
		"you what now?",
		"oops.... i bricked your 3ds... sorry not sorry!",
		"are you gonna press start? NOO DON'T LEAVE ME HERE!!!!",
		"MICHAELLLLLLLLLLLLLLLLLLLL",
		"Protip: you can always press start to die."
	};

	// Main loop
	while (aptMainLoop())
	{
		gspWaitForVBlank();
		hidScanInput();
		if (!hasDone) {
			// initial setup
			printf("JT3DS 1.0.0\nMade by Josiauh\nHello 3DS Homebrew!\n");
			hasDone = 1;
		} else {
			// random quoters
			printf("%s\n", things[rand() % ARR_SIZE(things)]);
			sleep(2);
		}
		

		u32 kDown = hidKeysDown();
		if (kDown & KEY_START) {
			printf("\n\n\n\nYou have decided to die. Press a key to exit.");
			sleep(2);
			break; //Break in order to return to hbmenu
		}
			

		// Flush and swap frame-buffers
		gfxFlushBuffers();
		gfxSwapBuffers();
	}
	
	gfxExit();
	return 0;
}