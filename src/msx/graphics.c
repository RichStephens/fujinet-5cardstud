/**
 * @brief   MSX Graphics Routines for 5cardstud
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3, see LICENSE for details
 */

#ifdef BUILD_MSX

#include <stdbool.h>

bool always_render_full_cards = 0;

void drawChip(unsigned char x, unsigned char y)
{
}

void drawBuffer()
{
}

void drawBox(unsigned char x, unsigned char y, unsigned char w, unsigned char h)
{
}

void drawText(unsigned char x, unsigned char y, const char* s)
{
}

void clearStatusBar()
{
}

void resetScreen()
{
}

void hideLine(unsigned char x, unsigned char y, unsigned char w)
{
}

void disableDoubleBuffer()
{
}

void enableDoubleBuffer()
{
}

void drawCard(unsigned char x, unsigned char y, unsigned char partial, const char* s, bool isHidden)
{
}

void drawStatusText(const char* s)
{
}

void drawStatusTextAt(unsigned char x, const char* s)
{
}

void initGraphics()
{
}

void drawLogo()
{
}

unsigned char cycleNextColor()
{
}

void drawStatusTimer()
{
}

void drawLine(unsigned char x, unsigned char y, unsigned char w)
{
}

void setColorMode(unsigned char mode)
{
}

void drawBorder()
{
}

#endif /* BUILD_MSX */
