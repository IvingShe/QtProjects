#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(MYFIRSTDLLMODULE_LIB)
#  define MYFIRSTDLLMODULE_EXPORT Q_DECL_EXPORT
# else
#  define MYFIRSTDLLMODULE_EXPORT Q_DECL_IMPORT
# endif
#else
# define MYFIRSTDLLMODULE_EXPORT
#endif
