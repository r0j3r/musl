#ifndef _NETINET_ETHER_H
#define _NETINET_ETHER_H

#include <netinet/if_ether.h>

char *ether_ntoa (const struct ether_addr *);

struct ether_addr *ether_aton (const char *);

char *ether_ntoa_r (const struct ether_addr *, char *);

struct ether_addr *ether_aton_r (const char *, struct ether_addr *);

#endif
