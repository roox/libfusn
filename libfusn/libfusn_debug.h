/*
 * Debug functions
 *
 * Copyright (C) 2010-2015, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFUSN_DEBUG_H )
#define _LIBFUSN_DEBUG_H

#include <common.h>
#include <types.h>

#include "libfusn_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

#if defined( HAVE_DEBUG_OUTPUT )

void libfusn_debug_print_update_reason_flags(
      uint32_t update_reason_flags );

void libfusn_debug_print_update_source_flags(
      uint32_t update_source_flags );

void libfusn_debug_print_file_attribute_flags(
      uint32_t file_attribute_flags );

#endif

#if defined( __cplusplus )
}
#endif

#endif

