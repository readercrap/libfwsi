/*
 * Python object definition of the libfwsi extension block
 *
 * Copyright (C) 2010-2016, Joachim Metz <joachim.metz@gmail.com>
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

#if !defined( _PYFWSI_EXTENSION_BLOCK_H )
#define _PYFWSI_EXTENSION_BLOCK_H

#include <common.h>
#include <types.h>

#include "pyfwsi_item.h"
#include "pyfwsi_libcerror.h"
#include "pyfwsi_libfwsi.h"
#include "pyfwsi_python.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct pyfwsi_extension_block pyfwsi_extension_block_t;

struct pyfwsi_extension_block
{
	/* Python object initialization
	 */
	PyObject_HEAD

	/* The libfwsi extension block
	 */
	libfwsi_extension_block_t *extension_block;

	/* The item object
	 */
	pyfwsi_item_t *item_object;
};

extern PyMethodDef pyfwsi_extension_block_object_methods[];
extern PyTypeObject pyfwsi_extension_block_type_object;

PyObject *pyfwsi_extension_block_new(
           PyTypeObject *type_object,
           libfwsi_extension_block_t *extension_block,
           pyfwsi_item_t *item_object );

int pyfwsi_extension_block_init(
     pyfwsi_extension_block_t *pyfwsi_extension_block );

void pyfwsi_extension_block_free(
      pyfwsi_extension_block_t *pyfwsi_extension_block );

PyObject *pyfwsi_extension_block_get_signature(
           pyfwsi_extension_block_t *pyfwsi_extension_block,
           PyObject *arguments );

PyObject *pyfwsi_extension_block_get_data_size(
           pyfwsi_extension_block_t *pyfwsi_extension_block,
           PyObject *arguments );

#ifdef TODO
PyObject *pyfwsi_extension_block_get_data(
           pyfwsi_extension_block_t *pyfwsi_extension_block,
           PyObject *arguments );
#endif

#if defined( __cplusplus )
}
#endif

#endif

