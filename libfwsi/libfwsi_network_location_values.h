/*
 * Network location (shell item) values functions
 *
 * Copyright (C) 2010-2020, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFWSI_NETWORK_LOCATION_VALUES_H )
#define _LIBFWSI_NETWORK_LOCATION_VALUES_H

#include <common.h>
#include <types.h>

#include "libfwsi_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libfwsi_network_location_values libfwsi_network_location_values_t;

struct libfwsi_network_location_values
{
	/* The location
	 */
	uint8_t *location;

	/* The location size
	 */
	size_t location_size;

	/* The description
	 */
	uint8_t *description;

	/* The description size
	 */
	size_t description_size;

	/* The comments
	 */
	uint8_t *comments;

	/* The comments size
	 */
	size_t comments_size;

	/* The ASCII codepage
	 */
	int ascii_codepage;
};

int libfwsi_network_location_values_initialize(
     libfwsi_network_location_values_t **network_location_values,
     libcerror_error_t **error );

int libfwsi_network_location_values_free(
     libfwsi_network_location_values_t **network_location_values,
     libcerror_error_t **error );

int libfwsi_network_location_values_read_data(
     libfwsi_network_location_values_t *network_location_values,
     const uint8_t *data,
     size_t data_size,
     int ascii_codepage,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFWSI_NETWORK_LOCATION_VALUES_H ) */

