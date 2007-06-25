#ifndef _IPLUGIN_H_
#define _IPLUGIN_H_

#include <config.h>
#include <string>
#include <tools/name.h>

/**
 * @brief Plugin Interface
 */
class IPlugin : public CName
{
	public:
		/*!
		 * @brief dtor.
		 */
		virtual ~IPlugin(){}

		/*!
		 * @brief Get name.
		 */
		virtual IPlugin* createInstance() = 0; 
};
#endif 	//_IPLUGIN_H_
