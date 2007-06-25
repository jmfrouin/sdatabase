#ifndef _CSV_PLUGIN_H_
#define _CSV_PLUGIN_H_

#include <config.h>
#include <plugins/iplugin.h>

class CcsvPlugin : public IPlugin
{
	public:
		CcsvPlugin();
		~CcsvPlugin();

		/*
		* @brief From IPlugin.
		*/
		bool Write(const std::string& _path);
};

#endif 	//_CSV_PLUGIN_H_

