/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * Copyright (c) 1999-2003 Apple Computer, Inc.  All Rights Reserved.
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/* Copyright (c) 1997 Apple Computer, Inc. All Rights Reserved */

/* ioctl's for all Apple IOSerialStream based streaming serial ports */

#ifndef _SYS_IOSS_H
#define _SYS_IOSS_H

#ifndef _POSIX_SOURCE

#import <sys/ttycom.h>

/*
 * External clock baud rates, for use with cfsetospeed
 */
#define _MAKE_EXT(x)	(((x) << 1) | 1)
#define BEXT1	    	_MAKE_EXT(1)
#define BEXT2	    	_MAKE_EXT(2)
#define BEXT4	    	_MAKE_EXT(4)
#define BEXT8	    	_MAKE_EXT(8)
#define BEXT16	    	_MAKE_EXT(16)
#define BEXT32	    	_MAKE_EXT(32)
#define BEXT64	    	_MAKE_EXT(64)
#define BEXT128	    	_MAKE_EXT(128)
#define BEXT256	    	_MAKE_EXT(256)
#undef _MAKE_EXT

/*
 * Sets the receive latency (in microseconds) with the default
 * value of 0 meaning a 256 / 3 character delay latency.
 */
#define IOSSDATALAT    _IOW('T', 0, unsigned long)

/*
 * Controls the pre-emptible status of IOSS based serial dial in devices
 * (i.e. /dev/tty.* devices).  If true an open tty.* device is pre-emptible by
 * a dial out call.  Once a dial in call is established then setting pre-empt
 * to false will halt any further call outs on the cu device.
 */
#define IOSSPREEMPT    _IOW('T', 1, int)

#endif  /*_POSIX_SOURCE */

/*
 * END OF PROTECTED INCLUDE.
 */
#endif /* !_SYS_IOSS_H */
