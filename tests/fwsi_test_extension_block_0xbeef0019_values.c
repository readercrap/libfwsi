/*
 * Library extension_block_0xbeef0019_values type test program
 *
 * Copyright (C) 2010-2017, Joachim Metz <joachim.metz@gmail.com>
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
#include <types.h>

#if defined( HAVE_STDLIB_H ) || defined( WINAPI )
#include <stdlib.h>
#endif

#include "fwsi_test_libcerror.h"
#include "fwsi_test_libfwsi.h"
#include "fwsi_test_macros.h"
#include "fwsi_test_memory.h"
#include "fwsi_test_unused.h"

#include "../libfwsi/libfwsi_extension_block_0xbeef0019_values.h"

#if defined( __GNUC__ ) && !defined( LIBFWSI_DLL_IMPORT )

/* Tests the libfwsi_extension_block_0xbeef0019_values_initialize function
 * Returns 1 if successful or 0 if not
 */
int fwsi_test_extension_block_0xbeef0019_values_initialize(
     void )
{
	libcerror_error_t *error                                                       = NULL;
	libfwsi_extension_block_0xbeef0019_values_t *extension_block_0xbeef0019_values = NULL;
	int result                                                                     = 0;

#if defined( HAVE_FWSI_TEST_MEMORY )
	int number_of_malloc_fail_tests                                                = 1;
	int number_of_memset_fail_tests                                                = 1;
	int test_number                                                                = 0;
#endif

	/* Test regular cases
	 */
	result = libfwsi_extension_block_0xbeef0019_values_initialize(
	          &extension_block_0xbeef0019_values,
	          &error );

	FWSI_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 1 );

	FWSI_TEST_ASSERT_IS_NOT_NULL(
	 "extension_block_0xbeef0019_values",
	 extension_block_0xbeef0019_values );

	FWSI_TEST_ASSERT_IS_NULL(
	 "error",
	 error );

	result = libfwsi_extension_block_0xbeef0019_values_free(
	          &extension_block_0xbeef0019_values,
	          &error );

	FWSI_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 1 );

	FWSI_TEST_ASSERT_IS_NULL(
	 "extension_block_0xbeef0019_values",
	 extension_block_0xbeef0019_values );

	FWSI_TEST_ASSERT_IS_NULL(
	 "error",
	 error );

	/* Test error cases
	 */
	result = libfwsi_extension_block_0xbeef0019_values_initialize(
	          NULL,
	          &error );

	FWSI_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 -1 );

	FWSI_TEST_ASSERT_IS_NOT_NULL(
	 "error",
	 error );

	libcerror_error_free(
	 &error );

	extension_block_0xbeef0019_values = (libfwsi_extension_block_0xbeef0019_values_t *) 0x12345678UL;

	result = libfwsi_extension_block_0xbeef0019_values_initialize(
	          &extension_block_0xbeef0019_values,
	          &error );

	FWSI_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 -1 );

	FWSI_TEST_ASSERT_IS_NOT_NULL(
	 "error",
	 error );

	libcerror_error_free(
	 &error );

	extension_block_0xbeef0019_values = NULL;

#if defined( HAVE_FWSI_TEST_MEMORY )

	for( test_number = 0;
	     test_number < number_of_malloc_fail_tests;
	     test_number++ )
	{
		/* Test libfwsi_extension_block_0xbeef0019_values_initialize with malloc failing
		 */
		fwsi_test_malloc_attempts_before_fail = test_number;

		result = libfwsi_extension_block_0xbeef0019_values_initialize(
		          &extension_block_0xbeef0019_values,
		          &error );

		if( fwsi_test_malloc_attempts_before_fail != -1 )
		{
			fwsi_test_malloc_attempts_before_fail = -1;

			if( extension_block_0xbeef0019_values != NULL )
			{
				libfwsi_extension_block_0xbeef0019_values_free(
				 &extension_block_0xbeef0019_values,
				 NULL );
			}
		}
		else
		{
			FWSI_TEST_ASSERT_EQUAL_INT(
			 "result",
			 result,
			 -1 );

			FWSI_TEST_ASSERT_IS_NULL(
			 "extension_block_0xbeef0019_values",
			 extension_block_0xbeef0019_values );

			FWSI_TEST_ASSERT_IS_NOT_NULL(
			 "error",
			 error );

			libcerror_error_free(
			 &error );
		}
	}
	for( test_number = 0;
	     test_number < number_of_memset_fail_tests;
	     test_number++ )
	{
		/* Test libfwsi_extension_block_0xbeef0019_values_initialize with memset failing
		 */
		fwsi_test_memset_attempts_before_fail = test_number;

		result = libfwsi_extension_block_0xbeef0019_values_initialize(
		          &extension_block_0xbeef0019_values,
		          &error );

		if( fwsi_test_memset_attempts_before_fail != -1 )
		{
			fwsi_test_memset_attempts_before_fail = -1;

			if( extension_block_0xbeef0019_values != NULL )
			{
				libfwsi_extension_block_0xbeef0019_values_free(
				 &extension_block_0xbeef0019_values,
				 NULL );
			}
		}
		else
		{
			FWSI_TEST_ASSERT_EQUAL_INT(
			 "result",
			 result,
			 -1 );

			FWSI_TEST_ASSERT_IS_NULL(
			 "extension_block_0xbeef0019_values",
			 extension_block_0xbeef0019_values );

			FWSI_TEST_ASSERT_IS_NOT_NULL(
			 "error",
			 error );

			libcerror_error_free(
			 &error );
		}
	}
#endif /* defined( HAVE_FWSI_TEST_MEMORY ) */

	return( 1 );

on_error:
	if( error != NULL )
	{
		libcerror_error_free(
		 &error );
	}
	if( extension_block_0xbeef0019_values != NULL )
	{
		libfwsi_extension_block_0xbeef0019_values_free(
		 &extension_block_0xbeef0019_values,
		 NULL );
	}
	return( 0 );
}

/* Tests the libfwsi_extension_block_0xbeef0019_values_free function
 * Returns 1 if successful or 0 if not
 */
int fwsi_test_extension_block_0xbeef0019_values_free(
     void )
{
	libcerror_error_t *error = NULL;
	int result               = 0;

	/* Test error cases
	 */
	result = libfwsi_extension_block_0xbeef0019_values_free(
	          NULL,
	          &error );

	FWSI_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 -1 );

	FWSI_TEST_ASSERT_IS_NOT_NULL(
	 "error",
	 error );

	libcerror_error_free(
	 &error );

	return( 1 );

on_error:
	if( error != NULL )
	{
		libcerror_error_free(
		 &error );
	}
	return( 0 );
}

#endif /* #if defined( __GNUC__ ) && !defined( LIBFWSI_DLL_IMPORT ) */

/* The main program
 */
#if defined( HAVE_WIDE_SYSTEM_CHARACTER )
int wmain(
     int argc FWSI_TEST_ATTRIBUTE_UNUSED,
     wchar_t * const argv[] FWSI_TEST_ATTRIBUTE_UNUSED )
#else
int main(
     int argc FWSI_TEST_ATTRIBUTE_UNUSED,
     char * const argv[] FWSI_TEST_ATTRIBUTE_UNUSED )
#endif
{
	FWSI_TEST_UNREFERENCED_PARAMETER( argc )
	FWSI_TEST_UNREFERENCED_PARAMETER( argv )

#if defined( __GNUC__ ) && !defined( LIBFWSI_DLL_IMPORT )

	FWSI_TEST_RUN(
	 "libfwsi_extension_block_0xbeef0019_values_initialize",
	 fwsi_test_extension_block_0xbeef0019_values_initialize );

	FWSI_TEST_RUN(
	 "libfwsi_extension_block_0xbeef0019_values_free",
	 fwsi_test_extension_block_0xbeef0019_values_free );

	/* TODO: add tests for libfwsi_extension_block_0xbeef0019_values_read */

#endif /* #if defined( __GNUC__ ) && !defined( LIBFWSI_DLL_IMPORT ) */

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

