/* libveriuser/config.h.  Generated from config.h.in by configure.  */
#ifndef IVL_config_H
#define IVL_config_H
/*
 * Copyright (c) 2003-2014 Stephen Williams (steve@icarus.com)
 *
 *    This source code is free software; you can redistribute it
 *    and/or modify it in source code form under the terms of the GNU
 *    General Public License as published by the Free Software
 *    Foundation; either version 2 of the License, or (at your option)
 *    any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
 * USA.
 */

#define SIZEOF_UNSIGNED_LONG_LONG 8
#define SIZEOF_UNSIGNED_LONG 8
#define SIZEOF_UNSIGNED 4

#if SIZEOF_UNSIGNED >= 8
typedef unsigned ivl_u64_t;
#else
#if SIZEOF_UNSIGNED_LONG >= 8
typedef unsigned long ivl_u64_t;
#else
#if SIZEOF_UNSIGNED_LONG_LONG > SIZEOF_UNSIGNED_LONG
typedef unsigned long long ivl_u64_t;
#else
typedef unsigned long ivl_u64_t;
#endif
#endif
#endif

#endif /* IVL_config_H */
