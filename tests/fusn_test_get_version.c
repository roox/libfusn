/*
 * Library get version test program
 *
 * Copyright (C) 2011-2016, Joachim Metz <joachim.metz@gmail.com>
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

#include <common.h>
#include <file_stream.h>

#if defined( HAVE_STDLIB_H ) || defined( WINAPI )
#include <stdlib.h>
#endif

#include "fusn_test_libcstring.h"
#include "fusn_test_libfusn.h"
#include "fusn_test_unused.h"

/* Tests retrieving the library version
 * Returns 1 if successful or 0 if not
 */
int fusn_test_get_version(
     void )
{
	const char *version_string = NULL;
	int result                 = 0;

	version_string = libfusn_get_version();

	result = libcstring_narrow_string_compare(
	          version_string,
	          LIBFUSN_VERSION_STRING,
	          9 );

	if( result != 0 )
	{
		return( 0 );
	}
	return( 1 );
}

/* The main program
 */
#if defined( LIBCSTRING_HAVE_WIDE_SYSTEM_CHARACTER )
int wmain(
     int argc FUSN_TEST_ATTRIBUTE_UNUSED,
     wchar_t * const argv[] FUSN_TEST_ATTRIBUTE_UNUSED )
#else
int main(
     int argc FUSN_TEST_ATTRIBUTE_UNUSED,
     char * const argv[] FUSN_TEST_ATTRIBUTE_UNUSED )
#endif
{
	FUSN_TEST_UNREFERENCED_PARAMETER( argc )
	FUSN_TEST_UNREFERENCED_PARAMETER( argv )

	if( fusn_test_get_version() != 1 )
	{
		return( EXIT_FAILURE );
	}
	return( EXIT_SUCCESS );
}

