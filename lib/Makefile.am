## Process this file with automake to produce Makefile.in
#
# Author: Niklas Karlsson <nkarlsson@physics.umn.edu>
#

testdir = $(includedir)/test

test_HEADERS = TObject.h

test_SOURCE = TObject.cpp

LIB_VERSION = 1:0:0

library_includedir = $(includedir)/test

lib_LTLIBRARIES = libtest.la
libtest_la_SOURCES = $(test_HEADERS) $(test_SOURCE)
libtest_la_LDFLAGS = -version-info $(LIB_VERSION)
