#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(MYDLLMODULE_LIB)
#  define MYDLLMODULE_EXPORT Q_DECL_EXPORT
# else
#  define MYDLLMODULE_EXPORT Q_DECL_IMPORT
# endif
#else
# define MYDLLMODULE_EXPORT
#endif
