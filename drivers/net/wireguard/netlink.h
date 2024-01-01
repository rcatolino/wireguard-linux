/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2015-2019 Jason A. Donenfeld <Jason@zx2c4.com>. All Rights Reserved.
 */

#ifndef _WG_NETLINK_H
#define _WG_NETLINK_H

#include "peer.h"

int wg_genl_mcast_peer_endpoint_change(struct wg_peer *peer);
int wg_genl_mcast_peer_remove(struct wg_peer *peer);
int wg_genl_mcast_peer_set(struct wg_peer *peer);

int wg_genetlink_init(void);
void wg_genetlink_uninit(void);

#endif /* _WG_NETLINK_H */
