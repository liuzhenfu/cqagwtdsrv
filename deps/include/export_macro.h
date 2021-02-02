/**
*  Copyright (c) 2019 Archforce Financial Technology.  All rights reserved.
*  Redistribution and use in source and binary forms, with or without  modification, are not permitted.
*  For more information about Archforce, welcome to archforce.cn.
**/
#ifdef _MSC_VER
# pragma once
#endif
#ifndef EXPORT_MACRO_H
#define EXPORT_MACRO_H
#    if defined (_WIN32)
#        if defined (EXPORT_MACRO)
#		    define EXPORT_MACRO_DEFINE __declspec(dllexport)
#		else
#		    define EXPORT_MACRO_DEFINE __declspec(dllimport)
#		endif
#	else
#   	    define EXPORT_MACRO_DEFINE
#	endif
#endif /* EXPORT_MACRO_H */
