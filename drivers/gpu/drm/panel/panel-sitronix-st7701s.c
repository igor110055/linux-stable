// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (C) 2022, Rui Oliveira.
 * Author: Rui Oliveira <ruimail24@gmail.com>
 */

#include <linux/module.h>
#include <linux/mod_devicetable.h>

static const struct of_device_id st7701s_of_match[] = {
	{ .compatible = "sitronix,st7701s" },
	{ .compatible = "jinglitai,jlt4013a" },
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, y030xx067a_of_match);
