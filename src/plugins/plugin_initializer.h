/*
-------------------------------------------------------------------------
Project : sdatabase
-------------------------------------------------------------------------
Creator : Frouin Jean-Michel
-------------------------------------------------------------------------
$Date$
$Rev$
$Author$
-------------------------------------------------------------------------
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; version 2 of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
-------------------------------------------------------------------------
*/

#ifndef _PLUGIN_INITIALIZER_H_
#define _PLUGIN_INITIALIZER_H_

#include <config.h>
#include <iostream>

#include "plugin_manager.h"

template <class T>
class CPluginInitializer
{
	public:
		CPluginInitializer()
		{
			CPluginManager* l_pfm = CPluginManager::instance();
			T* l_obj = new T;
			l_pfm->add(l_obj);
		}
};

#endif 	//_PLUGIN_INITIALIZER_H_
