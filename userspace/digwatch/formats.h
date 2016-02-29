#pragma once

#include "sinsp.h"
#include "lua_parser.h"

class sinsp_evt_formatter;

class digwatch_formats
{
 public:
	digwatch_formats(sinsp* inspector, lua_State *ls);

	// formatter = digwatch.formatter(format_string)
	static int formatter(lua_State *ls);

	// formatted_string = digwatch.format_event(evt, formatter)
	static int format_event(lua_State *ls);

 private:
	lua_State* m_ls;
};
