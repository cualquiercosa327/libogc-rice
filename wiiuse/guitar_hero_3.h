/*
 *	wiiuse
 *
 *	Written By:
 *		Michael Laforest	< para >
 *		Email: < thepara (--AT--) g m a i l [--DOT--] com >
 *
 *	Copyright 2006-2007
 *
 *	This file is part of wiiuse.
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation; either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *	$Header: /lvm/shared/ds/ds/cvs/devkitpro-cvsbackup/libogc/wiiuse/guitar_hero_3.h,v 1.1 2008-05-08 09:42:14 shagkur Exp $
 *
 */

/**
 *	@file
 *	@brief Guitar Hero 3 expansion device.
 */

#ifndef GUITAR_HERO_3_H_INCLUDED
#define GUITAR_HERO_3_H_INCLUDED

#include "wiiuse_internal.h"

#define GUITAR_HERO_3_JS_MASK				0x3F
#define GUITAR_HERO_3_TOUCH_MASK			0x1F
#define GUITAR_HERO_3_WHAMMY_MASK			0x1F

#define GUITAR_HERO_3_JS_MIN_X				0x05
#define GUITAR_HERO_3_JS_MAX_X				0x3C
#define GUITAR_HERO_3_JS_CENTER_X			0x20
#define GUITAR_HERO_3_JS_MIN_Y				0x05
#define GUITAR_HERO_3_JS_MAX_Y				0x3A
#define GUITAR_HERO_3_JS_CENTER_Y			0x20
#define GUITAR_HERO_3_WHAMMY_BAR_MIN		0x0F
#define GUITAR_HERO_3_WHAMMY_BAR_MAX		0x1A

#ifdef __cplusplus
extern "C" {
#endif

int guitar_hero_3_handshake(struct wiimote_t* wm, struct guitar_hero_3_t* gh3, ubyte* data, uword len);

void guitar_hero_3_disconnected(struct wiimote_t* wm, struct guitar_hero_3_t* gh3);

int guitar_hero_3_event(struct wiimote_t* wm, struct guitar_hero_3_t* gh3, ubyte* msg, ubyte len);

#ifdef __cplusplus
}
#endif

#endif // GUITAR_HERO_3_H_INCLUDED
