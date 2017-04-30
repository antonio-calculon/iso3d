AC_INIT([iso3d], [0.0.0])
AM_INIT_AUTOMAKE

: ${CXXFLAGS:=-g -Wall}

AC_SUBST([pkgconfigdir], ['${libdir}/pkgconfig'])

AC_PROG_CXX
LT_INIT
dnl AC_PROG_RANLIB

PKG_CHECK_MODULES([AL5], [allegro-debug-5])

AC_CONFIG_FILES([ \
  Makefile \
  iso3d/Makefile \
])
AC_OUTPUT
