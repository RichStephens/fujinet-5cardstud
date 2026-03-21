/**
 * @brief   Utility Functions
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3, see LICENSE for details
 */

// MSX tick counter.
__at (0xFC9E) unsigned int tikcnt;

void resetTimer()
{
    tikcnt=0;
}

void waitvsync()
{
    unsigned int jiffy = tikcnt;
    do {
        // wait.
    } while (tikcnt == jiffy);
}

int getTime()
{
    return tikcnt;
}

void quit()
{
}
