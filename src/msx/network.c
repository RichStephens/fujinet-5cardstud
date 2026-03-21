/**
 * @brief   Network functions
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3, see LICENSE for details
 */

#include <stdint.h>
#include <fujinet-network.h>

uint8_t getResponse(char *url, unsigned char *buffer, uint16_t max_len)
{
    static int16_t count;

    network_open(url, OPEN_MODE_HTTP_GET_H, OPEN_TRANS_NONE);
    count = network_read(url, buffer, max_len);
    network_close(url);
    return count>0;
}
