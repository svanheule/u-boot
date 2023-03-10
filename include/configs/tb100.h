/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2011-2014 Pierrick Hascoet, Abilis Systems
 */

#ifndef _CONFIG_TB100_H_
#define _CONFIG_TB100_H_

#include <linux/sizes.h>

/*
 * Memory configuration
 */

#define CFG_SYS_DDR_SDRAM_BASE	0x80000000
#define CFG_SYS_SDRAM_BASE		CFG_SYS_DDR_SDRAM_BASE
#define CFG_SYS_SDRAM_SIZE		SZ_128M

/*
 * UART configuration
 */
#define CFG_SYS_NS16550_CLK		166666666

/*
 * Even though the board houses Realtek RTL8211E PHY
 * corresponding PHY driver (drivers/net/phy/realtek.c) behaves unexpectedly.
 * In particular "parse_status" reports link is down.
 *
 * Until Realtek PHY driver is fixed fall back to generic PHY driver
 * which implements all required functionality and behaves much more stable.
 *
 *
 */

/*
 * Ethernet configuration
 */
#define ETH0_BASE_ADDRESS		0xFE100000
#define ETH1_BASE_ADDRESS		0xFE110000

/*
 * Console configuration
 */

#endif /* _CONFIG_TB100_H_ */
