## Process this file with automake to produce Makefile.in
#
# Author: Niklas Karlsson <nkarlsson@physics.umn.edu>
#

EXTRA_DIST = __init__.py

INCLUDES = -I$(top_srcdir)

#pytestcommondir = $(includedir)/pytest

pytest_la_SOURCE = TObject_boost.cpp

LIB_VERSION = 1:0:0

library_includedir = $(includedir)/test

pkgpyexec_PYTHON = __init__.py
pkgpyexec_LTLIBRARIES = libpytest.la
libpytest_la_SOURCES = $(pytest_la_SOURCE)
libpytest_la_CXXFLAGS = -I$(PYTHON_INCLUDE)
libpytest_la_LDFLAGS = -module
libpytest_la_LIBADD = ../lib/libtest.la -lboost_python
