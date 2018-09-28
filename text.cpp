#include "fonts.h"

void addText(Rect r, const char* text)
{
	ggprint16(&r, 16, 0x00ffffff, text);
}
