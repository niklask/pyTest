dnl Process this file with autoconf to produce a configure script
dnl
dnl Author: Niklas Karlsson <nkarlsson@physics.umn.edu>
dnl

AC_INIT([pyTest], [0.1.0])
AC_CONFIG_SRCDIR([python/TObject.h])
AM_CONFIG_HEADER(config.h)
AC_CONFIG_AUX_DIR(config)
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE
dnl Do not forget to change library interface versions if used!

AC_CONFIG_MACRO_DIR([m4])

dnl Do compilation tests with C++
AC_LANG_CPLUSPLUS

dnl Check for programs
AC_PROG_CXX
AC_PROG_LN_S

dnl Disable build of static libraries
AM_DISABLE_STATIC

dnl Setup install program
AM_PROG_INSTALL

dnl Setup libtool
AM_PROG_LIBTOOL

dnl Check for gmake and use it
AC_CHECK_PROG(GMAKE, gmake, gmake, make)
AC_SUBST(GMAKE)

dnl Check for C++ header files
AC_CHECK_HEADERS([cerrno cfloat cstdio cstdlib ctime])

dnl Turn on -Wall if compiling with gcc
#AC_COMPILE_WARNINGS

dnl
dnl Check for Python 2.6+
dnl
AM_PATH_PYTHON(2.6)

dnl The following code adopted from HippoDraw by Paul F. Kunz
python_include_path=`$PYTHON -c "from distutils import sysconfig; print sysconfig.get_python_inc()"`
python_lib_path=`$PYTHON -c "from distutils import sysconfig; print sysconfig.get_python_lib(standard_lib=False)"`

AC_SUBST([PYTHON_INCLUDE],[$python_include_path] )
AC_SUBST([PYTHON_LIB],[$python_lib_path])

AM_SANITY_CHECK

dnl
dnl Files to be generated
dnl
AC_OUTPUT(Makefile \
          python/Makefile
)

dnl
dnl Output config status message
dnl
AC_MSG_RESULT([
pyTest successfully configured!])
