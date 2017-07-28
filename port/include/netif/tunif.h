/**
 * based on lwip-contrib
 */
#ifndef LWIP_TUNIF_H
#define LWIP_TUNIF_H

#include "lwip/netif.h"
#include "lwip/pbuf.h"

err_t tunif_init(struct netif *netif);

#if NO_SYS
void tunif_input(struct netif *netif);
#endif /* NO_SYS */

#endif /* LWIP_TUNIF_H */
