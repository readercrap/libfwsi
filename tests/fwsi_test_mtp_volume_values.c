/*
 * Library mtp_volume_values type test program
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

#include "../libfwsi/libfwsi_mtp_volume_values.h"

uint8_t fwsi_test_mtp_volume_values_data1[ 1278 ] = {
	0xfc, 0x04, 0x00, 0x00, 0xf6, 0x04, 0x05, 0x20, 0x31, 0x10, 0x03, 0x00, 0x00, 0x00, 0x1e, 0x00,
	0x20, 0x00, 0x00, 0x80, 0x0b, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xb4, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x15, 0x00,
	0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x54, 0x00, 0x43, 0x00, 0x4e, 0x00, 0x41, 0x00, 0x4e, 0x00,
	0x44, 0x00, 0x30, 0x00, 0x00, 0x00, 0x53, 0x00, 0x49, 0x00, 0x44, 0x00, 0x2d, 0x00, 0x7b, 0x00,
	0x31, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x31, 0x00, 0x2c, 0x00, 0x30, 0x00, 0x37, 0x00,
	0x38, 0x00, 0x31, 0x00, 0x30, 0x00, 0x30, 0x00, 0x35, 0x00, 0x42, 0x00, 0x33, 0x00, 0x30, 0x00,
	0x30, 0x00, 0x33, 0x00, 0x30, 0x00, 0x34, 0x00, 0x43, 0x00, 0x37, 0x00, 0x2c, 0x00, 0x31, 0x00,
	0x30, 0x00, 0x34, 0x00, 0x30, 0x00, 0x39, 0x00, 0x34, 0x00, 0x31, 0x00, 0x30, 0x00, 0x35, 0x00,
	0x36, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x47, 0x00, 0x65, 0x00, 0x6e, 0x00, 0x65, 0x00, 0x72, 0x00,
	0x69, 0x00, 0x63, 0x00, 0x20, 0x00, 0x68, 0x00, 0x69, 0x00, 0x65, 0x00, 0x72, 0x00, 0x61, 0x00,
	0x72, 0x00, 0x63, 0x00, 0x68, 0x00, 0x69, 0x00, 0x63, 0x00, 0x61, 0x00, 0x6c, 0x00, 0x00, 0x00,
	0x7b, 0x00, 0x34, 0x00, 0x41, 0x00, 0x44, 0x00, 0x32, 0x00, 0x43, 0x00, 0x38, 0x00, 0x35, 0x00,
	0x45, 0x00, 0x2d, 0x00, 0x35, 0x00, 0x45, 0x00, 0x32, 0x00, 0x44, 0x00, 0x2d, 0x00, 0x34, 0x00,
	0x35, 0x00, 0x45, 0x00, 0x35, 0x00, 0x2d, 0x00, 0x38, 0x00, 0x38, 0x00, 0x36, 0x00, 0x34, 0x00,
	0x2d, 0x00, 0x34, 0x00, 0x46, 0x00, 0x32, 0x00, 0x32, 0x00, 0x39, 0x00, 0x45, 0x00, 0x33, 0x00,
	0x43, 0x00, 0x36, 0x00, 0x43, 0x00, 0x46, 0x00, 0x30, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x7b, 0x00,
	0x31, 0x00, 0x41, 0x00, 0x33, 0x00, 0x33, 0x00, 0x46, 0x00, 0x37, 0x00, 0x45, 0x00, 0x34, 0x00,
	0x2d, 0x00, 0x41, 0x00, 0x46, 0x00, 0x31, 0x00, 0x33, 0x00, 0x2d, 0x00, 0x34, 0x00, 0x38, 0x00,
	0x46, 0x00, 0x35, 0x00, 0x2d, 0x00, 0x39, 0x00, 0x39, 0x00, 0x34, 0x00, 0x45, 0x00, 0x2d, 0x00,
	0x37, 0x00, 0x37, 0x00, 0x33, 0x00, 0x36, 0x00, 0x39, 0x00, 0x44, 0x00, 0x46, 0x00, 0x45, 0x00,
	0x30, 0x00, 0x34, 0x00, 0x41, 0x00, 0x33, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x41, 0x00,
	0x41, 0x00, 0x31, 0x00, 0x38, 0x00, 0x37, 0x00, 0x33, 0x00, 0x37, 0x00, 0x45, 0x00, 0x2d, 0x00,
	0x35, 0x00, 0x30, 0x00, 0x30, 0x00, 0x39, 0x00, 0x2d, 0x00, 0x34, 0x00, 0x38, 0x00, 0x46, 0x00,
	0x41, 0x00, 0x2d, 0x00, 0x41, 0x00, 0x45, 0x00, 0x32, 0x00, 0x31, 0x00, 0x2d, 0x00, 0x38, 0x00,
	0x35, 0x00, 0x46, 0x00, 0x32, 0x00, 0x34, 0x00, 0x33, 0x00, 0x38, 0x00, 0x33, 0x00, 0x42, 0x00,
	0x34, 0x00, 0x45, 0x00, 0x36, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x32, 0x00, 0x38, 0x00,
	0x44, 0x00, 0x38, 0x00, 0x44, 0x00, 0x33, 0x00, 0x31, 0x00, 0x45, 0x00, 0x2d, 0x00, 0x32, 0x00,
	0x34, 0x00, 0x39, 0x00, 0x43, 0x00, 0x2d, 0x00, 0x34, 0x00, 0x35, 0x00, 0x34, 0x00, 0x45, 0x00,
	0x2d, 0x00, 0x41, 0x00, 0x41, 0x00, 0x42, 0x00, 0x43, 0x00, 0x2d, 0x00, 0x33, 0x00, 0x34, 0x00,
	0x38, 0x00, 0x38, 0x00, 0x33, 0x00, 0x31, 0x00, 0x36, 0x00, 0x38, 0x00, 0x45, 0x00, 0x36, 0x00,
	0x33, 0x00, 0x34, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x32, 0x00, 0x37, 0x00, 0x45, 0x00,
	0x32, 0x00, 0x45, 0x00, 0x33, 0x00, 0x39, 0x00, 0x32, 0x00, 0x2d, 0x00, 0x41, 0x00, 0x31, 0x00,
	0x31, 0x00, 0x31, 0x00, 0x2d, 0x00, 0x34, 0x00, 0x38, 0x00, 0x45, 0x00, 0x30, 0x00, 0x2d, 0x00,
	0x41, 0x00, 0x42, 0x00, 0x30, 0x00, 0x43, 0x00, 0x2d, 0x00, 0x45, 0x00, 0x31, 0x00, 0x37, 0x00,
	0x37, 0x00, 0x30, 0x00, 0x35, 0x00, 0x41, 0x00, 0x30, 0x00, 0x35, 0x00, 0x46, 0x00, 0x38, 0x00,
	0x35, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x03, 0xd5, 0x15, 0x0c, 0x17, 0xd0,
	0xce, 0x47, 0x90, 0x16, 0x7b, 0x3f, 0x97, 0x87, 0x21, 0xcc, 0x0f, 0x00, 0x00, 0x00, 0x7a, 0x05,
	0xa3, 0x01, 0xd6, 0x74, 0x80, 0x4e, 0xbe, 0xa7, 0xdc, 0x4c, 0x21, 0x2c, 0xe5, 0x0a, 0x02, 0x00,
	0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x7a, 0x05, 0xa3, 0x01, 0xd6, 0x74,
	0x80, 0x4e, 0xbe, 0xa7, 0xdc, 0x4c, 0x21, 0x2c, 0xe5, 0x0a, 0x03, 0x00, 0x00, 0x00, 0x1f, 0x00,
	0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x47, 0x00, 0x65, 0x00, 0x6e, 0x00, 0x65, 0x00, 0x72, 0x00,
	0x69, 0x00, 0x63, 0x00, 0x20, 0x00, 0x68, 0x00, 0x69, 0x00, 0x65, 0x00, 0x72, 0x00, 0x61, 0x00,
	0x72, 0x00, 0x63, 0x00, 0x68, 0x00, 0x69, 0x00, 0x63, 0x00, 0x61, 0x00, 0x6c, 0x00, 0x00, 0x00,
	0x7a, 0x05, 0xa3, 0x01, 0xd6, 0x74, 0x80, 0x4e, 0xbe, 0xa7, 0xdc, 0x4c, 0x21, 0x2c, 0xe5, 0x0a,
	0x0b, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7a, 0x05, 0xa3, 0x01,
	0xd6, 0x74, 0x80, 0x4e, 0xbe, 0xa7, 0xdc, 0x4c, 0x21, 0x2c, 0xe5, 0x0a, 0x04, 0x00, 0x00, 0x00,
	0x15, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0b, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x7a, 0x05, 0xa3, 0x01,
	0xd6, 0x74, 0x80, 0x4e, 0xbe, 0xa7, 0xdc, 0x4c, 0x21, 0x2c, 0xe5, 0x0a, 0x05, 0x00, 0x00, 0x00,
	0x15, 0x00, 0x00, 0x00, 0x7b, 0x84, 0x6a, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x7a, 0x05, 0xa3, 0x01,
	0xd6, 0x74, 0x80, 0x4e, 0xbe, 0xa7, 0xdc, 0x4c, 0x21, 0x2c, 0xe5, 0x0a, 0x06, 0x00, 0x00, 0x00,
	0x15, 0x00, 0x00, 0x00, 0x63, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7a, 0x05, 0xa3, 0x01,
	0xd6, 0x74, 0x80, 0x4e, 0xbe, 0xa7, 0xdc, 0x4c, 0x21, 0x2c, 0xe5, 0x0a, 0x07, 0x00, 0x00, 0x00,
	0x1f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x54, 0x00, 0x43, 0x00, 0x4e, 0x00, 0x41, 0x00,
	0x4e, 0x00, 0x44, 0x00, 0x30, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x6b, 0xef, 0xd8, 0x5c, 0x7a, 0x43,
	0xaf, 0xfc, 0xda, 0x8b, 0x60, 0xee, 0x4a, 0x3c, 0x05, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00,
	0x50, 0x00, 0x00, 0x00, 0x53, 0x00, 0x49, 0x00, 0x44, 0x00, 0x2d, 0x00, 0x7b, 0x00, 0x31, 0x00,
	0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x31, 0x00, 0x2c, 0x00, 0x30, 0x00, 0x37, 0x00, 0x38, 0x00,
	0x31, 0x00, 0x30, 0x00, 0x30, 0x00, 0x35, 0x00, 0x42, 0x00, 0x33, 0x00, 0x30, 0x00, 0x30, 0x00,
	0x33, 0x00, 0x30, 0x00, 0x34, 0x00, 0x43, 0x00, 0x37, 0x00, 0x2c, 0x00, 0x31, 0x00, 0x30, 0x00,
	0x34, 0x00, 0x30, 0x00, 0x39, 0x00, 0x34, 0x00, 0x31, 0x00, 0x30, 0x00, 0x35, 0x00, 0x36, 0x00,
	0x7d, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x6b, 0xef, 0xd8, 0x5c, 0x7a, 0x43, 0xaf, 0xfc, 0xda, 0x8b,
	0x60, 0xee, 0x4a, 0x3c, 0x04, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
	0x54, 0x00, 0x43, 0x00, 0x4e, 0x00, 0x41, 0x00, 0x4e, 0x00, 0x44, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x7a, 0x05, 0xa3, 0x01, 0xd6, 0x74, 0x80, 0x4e, 0xbe, 0xa7, 0xdc, 0x4c, 0x21, 0x2c, 0xe5, 0x0a,
	0x08, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x30, 0x00, 0x37, 0x00,
	0x38, 0x00, 0x31, 0x00, 0x30, 0x00, 0x30, 0x00, 0x35, 0x00, 0x42, 0x00, 0x33, 0x00, 0x30, 0x00,
	0x30, 0x00, 0x33, 0x00, 0x30, 0x00, 0x34, 0x00, 0x43, 0x00, 0x37, 0x00, 0x00, 0x00, 0x0d, 0x49,
	0x6b, 0xef, 0xd8, 0x5c, 0x7a, 0x43, 0xaf, 0xfc, 0xda, 0x8b, 0x60, 0xee, 0x4a, 0x3c, 0x06, 0x00,
	0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x30, 0x6c, 0xae, 0x04, 0x48, 0x98, 0xba,
	0xc5, 0x7b, 0x46, 0x96, 0x5f, 0xe7, 0x0d, 0x49, 0x6b, 0xef, 0xd8, 0x5c, 0x7a, 0x43, 0xaf, 0xfc,
	0xda, 0x8b, 0x60, 0xee, 0x4a, 0x3c, 0x1a, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0d, 0x49, 0x6b, 0xef, 0xd8, 0x5c, 0x7a, 0x43, 0xaf, 0xfc, 0xda, 0x8b, 0x60, 0xee, 0x4a, 0x3c,
	0x07, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x60, 0x01, 0xed, 0x99, 0xff, 0x17, 0x44, 0x4c,
	0x9d, 0x98, 0x1d, 0x7a, 0x6f, 0x94, 0x19, 0x21, 0x93, 0x2d, 0x05, 0x8f, 0xca, 0xab, 0xc5, 0x4f,
	0xa5, 0xac, 0xb0, 0x1d, 0xf4, 0xdb, 0xe5, 0x98, 0x02, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00,
	0xbc, 0x5b, 0xf0, 0x23, 0xde, 0x15, 0x2a, 0x4c, 0xa5, 0x5b, 0xa9, 0xaf, 0x5c, 0xe4, 0x12, 0xef,
	0x0d, 0x49, 0x6b, 0xef, 0xd8, 0x5c, 0x7a, 0x43, 0xaf, 0xfc, 0xda, 0x8b, 0x60, 0xee, 0x4a, 0x3c,
	0x17, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x73, 0x00, 0x31, 0x00,
	0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

#if defined( __GNUC__ ) && !defined( LIBFWSI_DLL_IMPORT )

/* Tests the libfwsi_mtp_volume_values_initialize function
 * Returns 1 if successful or 0 if not
 */
int fwsi_test_mtp_volume_values_initialize(
     void )
{
	libcerror_error_t *error                       = NULL;
	libfwsi_mtp_volume_values_t *mtp_volume_values = NULL;
	int result                                     = 0;

#if defined( HAVE_FWSI_TEST_MEMORY )
	int number_of_malloc_fail_tests                = 1;
	int number_of_memset_fail_tests                = 1;
	int test_number                                = 0;
#endif

	/* Test regular cases
	 */
	result = libfwsi_mtp_volume_values_initialize(
	          &mtp_volume_values,
	          &error );

	FWSI_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 1 );

	FWSI_TEST_ASSERT_IS_NOT_NULL(
	 "mtp_volume_values",
	 mtp_volume_values );

	FWSI_TEST_ASSERT_IS_NULL(
	 "error",
	 error );

	result = libfwsi_mtp_volume_values_free(
	          &mtp_volume_values,
	          &error );

	FWSI_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 1 );

	FWSI_TEST_ASSERT_IS_NULL(
	 "mtp_volume_values",
	 mtp_volume_values );

	FWSI_TEST_ASSERT_IS_NULL(
	 "error",
	 error );

	/* Test error cases
	 */
	result = libfwsi_mtp_volume_values_initialize(
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

	mtp_volume_values = (libfwsi_mtp_volume_values_t *) 0x12345678UL;

	result = libfwsi_mtp_volume_values_initialize(
	          &mtp_volume_values,
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

	mtp_volume_values = NULL;

#if defined( HAVE_FWSI_TEST_MEMORY )

	for( test_number = 0;
	     test_number < number_of_malloc_fail_tests;
	     test_number++ )
	{
		/* Test libfwsi_mtp_volume_values_initialize with malloc failing
		 */
		fwsi_test_malloc_attempts_before_fail = test_number;

		result = libfwsi_mtp_volume_values_initialize(
		          &mtp_volume_values,
		          &error );

		if( fwsi_test_malloc_attempts_before_fail != -1 )
		{
			fwsi_test_malloc_attempts_before_fail = -1;

			if( mtp_volume_values != NULL )
			{
				libfwsi_mtp_volume_values_free(
				 &mtp_volume_values,
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
			 "mtp_volume_values",
			 mtp_volume_values );

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
		/* Test libfwsi_mtp_volume_values_initialize with memset failing
		 */
		fwsi_test_memset_attempts_before_fail = test_number;

		result = libfwsi_mtp_volume_values_initialize(
		          &mtp_volume_values,
		          &error );

		if( fwsi_test_memset_attempts_before_fail != -1 )
		{
			fwsi_test_memset_attempts_before_fail = -1;

			if( mtp_volume_values != NULL )
			{
				libfwsi_mtp_volume_values_free(
				 &mtp_volume_values,
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
			 "mtp_volume_values",
			 mtp_volume_values );

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
	if( mtp_volume_values != NULL )
	{
		libfwsi_mtp_volume_values_free(
		 &mtp_volume_values,
		 NULL );
	}
	return( 0 );
}

/* Tests the libfwsi_mtp_volume_values_free function
 * Returns 1 if successful or 0 if not
 */
int fwsi_test_mtp_volume_values_free(
     void )
{
	libcerror_error_t *error = NULL;
	int result               = 0;

	/* Test error cases
	 */
	result = libfwsi_mtp_volume_values_free(
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

/* Tests the libfwsi_mtp_volume_values_read_data function
 * Returns 1 if successful or 0 if not
 */
int fwsi_test_mtp_volume_values_read_data(
     void )
{
	libcerror_error_t *error                       = NULL;
	libfwsi_mtp_volume_values_t *mtp_volume_values = NULL;
	int result                                     = 0;

	/* Initialize test
	 */
	result = libfwsi_mtp_volume_values_initialize(
	          &mtp_volume_values,
	          &error );

	FWSI_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 1 );

	FWSI_TEST_ASSERT_IS_NOT_NULL(
	 "mtp_volume_values",
	 mtp_volume_values );

	FWSI_TEST_ASSERT_IS_NULL(
	 "error",
	 error );

	/* Test regular cases
	 */
	result = libfwsi_mtp_volume_values_read_data(
	          mtp_volume_values,
	          fwsi_test_mtp_volume_values_data1,
	          1278,
	          &error );

	FWSI_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 1 );

	FWSI_TEST_ASSERT_IS_NULL(
	 "error",
	 error );

	/* Test error cases
	 */
	result = libfwsi_mtp_volume_values_read_data(
	          NULL,
	          fwsi_test_mtp_volume_values_data1,
	          1278,
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

	result = libfwsi_mtp_volume_values_read_data(
	          mtp_volume_values,
	          NULL,
	          1278,
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

	result = libfwsi_mtp_volume_values_read_data(
	          mtp_volume_values,
	          fwsi_test_mtp_volume_values_data1,
	          (size_t) SSIZE_MAX + 1,
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

	/* Clean up
	 */
	result = libfwsi_mtp_volume_values_free(
	          &mtp_volume_values,
	          &error );

	FWSI_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 1 );

	FWSI_TEST_ASSERT_IS_NULL(
	 "mtp_volume_values",
	 mtp_volume_values );

	FWSI_TEST_ASSERT_IS_NULL(
	 "error",
	 error );

	return( 1 );

on_error:
	if( error != NULL )
	{
		libcerror_error_free(
		 &error );
	}
	if( mtp_volume_values != NULL )
	{
		libfwsi_mtp_volume_values_free(
		 &mtp_volume_values,
		 NULL );
	}
	return( 0 );
}

#endif /* defined( __GNUC__ ) && !defined( LIBFWSI_DLL_IMPORT ) */

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
	 "libfwsi_mtp_volume_values_initialize",
	 fwsi_test_mtp_volume_values_initialize );

	FWSI_TEST_RUN(
	 "libfwsi_mtp_volume_values_free",
	 fwsi_test_mtp_volume_values_free );

	FWSI_TEST_RUN(
	 "libfwsi_mtp_volume_values_read_data",
	 fwsi_test_mtp_volume_values_read_data );

#endif /* defined( __GNUC__ ) && !defined( LIBFWSI_DLL_IMPORT ) */

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

