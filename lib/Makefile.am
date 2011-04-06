## Process this file with automake to produce Makefile.in
#
# Author: Niklas Karlsson <nkarlsson@physics.umn.edu>
#

pytestdir = $(includedir)/pytest

pytest_HEADERS = TObject.h

pytest_SOURCE = TObject.cpp

LIB_VERSION = 1:0:0

library_includedir = $(includedir)/pytest

lib_LTLIBRARIES = libpytest.la
libpytest_la_SOURCES = $(pytest_HEADERS) $(pytest_SOURCE)
libpytest_la_LDFLAGS = -version-info $(LIB_VERSION)
