# Generated automatically from Makefile.in by configure.
# Makefile.in generated automatically by automake 1.4 from Makefile.am

# Copyright (C) 1994, 1995-8, 1999 Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.

# Copyright (C) 1998, 1999, 2000, 2001 Free Software Foundation, Inc.
#
# This file is part of GnuPG.
#
# GnuPG is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
# 
# GnuPG is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA


SHELL = sh.exe

srcdir = .
top_srcdir = ..
prefix = /usr/local
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include

DESTDIR =

pkgdatadir = $(datadir)/gnupg
pkglibdir = $(libdir)/gnupg
pkgincludedir = $(includedir)/gnupg

top_builddir = ..

ACLOCAL = c:/Ports/gnupg-1.0.6/scripts/missing aclocal
AUTOCONF = autoconf
AUTOMAKE = c:/Ports/gnupg-1.0.6/scripts/missing automake
AUTOHEADER = autoheader

INSTALL = G:/System/Unixroot/bin/install.exe -c
INSTALL_PROGRAM = ${INSTALL} $(AM_INSTALL_PROGRAM_FLAGS)
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL_PROGRAM}
transform = s,x,x,

NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_alias = i386-pc-os2_emx
build_triplet = i386-pc-os2_emx
host_alias = i386-pc-os2_emx
host_triplet = i386-pc-os2_emx
target_alias = i386-pc-os2_emx
target_triplet = i386-pc-os2_emx
AS = @AS@
AWK = gawk
BUILD_INCLUDED_LIBINTL = no
CATALOGS = 
CATOBJEXT = 
CC = gcc
CPP = gcc.exe -E
DATADIRNAME = 
DLLTOOL = @DLLTOOL@
DOCBOOK_TO_MAN = no
DOCBOOK_TO_TEXI = no
DYNAMIC_CIPHER_MODS =  rndlinux rndunix rndegd tiger
DYNLINK_LDFLAGS = 
DYNLINK_MOD_CFLAGS = -shared -fPIC
FAQPROG = : 
GENCAT = 
GLIBC21 = 
GMOFILES = 
GMSGFMT = 
INSTOBJEXT = 
INTLBISON = 
INTLLIBS = 
INTLOBJS = 
INTL_LIBTOOL_SUFFIX_PREFIX = 
LIBICONV = 
MAINT = #
MAKEINFO = makeinfo
MKINSTALLDIRS = 
MPI_EXTRA_ASM_OBJS = 
MPI_OPT_FLAGS = 
MPI_SFLAGS = 
MSGFMT = 
NM = nm.exe
PACKAGE = gnupg
POFILES = 
POSUB = 
RANLIB = ar.exe s
STATIC_CIPHER_NAMES =  sha1 rmd160 md5
STATIC_CIPHER_OBJS =  sha1.o rmd160.o md5.o
USE_INCLUDED_LIBINTL = no
USE_NLS = no
VERSION = 1.0.6
ZLIBS = ../zlib/libzlib.a

INCLUDES = -I$(top_srcdir)/include -I$(top_srcdir)/intl

noinst_LIBRARIES = libutil.a

#libutil_a_LDFLAGS =
libutil_a_SOURCES = g10u.c logger.c fileutil.c miscutil.c strgutil.c  		     ttyio.c  argparse.c memory.c secmem.c errors.c iobuf.c 		     dotlock.c http.c simple-gettext.c w32reg.c

mkinstalldirs = $(SHELL) $(top_srcdir)/scripts/mkinstalldirs
CONFIG_HEADER = ../config.h
CONFIG_CLEAN_FILES = 
LIBRARIES =  $(noinst_LIBRARIES)


DEFS = -DHAVE_CONFIG_H -I. -I$(srcdir) -I..
CPPFLAGS = 
LDFLAGS = -s -Zmt -Zcrtdll -Zsysv-signals -Zbin-files
LIBS =  -lsocket
libutil_a_LIBADD = 
libutil_a_OBJECTS =  g10u.o logger.o fileutil.o miscutil.o strgutil.o \
ttyio.o argparse.o memory.o secmem.o errors.o iobuf.o dotlock.o http.o \
simple-gettext.o w32reg.o
AR = ar
CFLAGS = -O2 -m486 -Zmt -Wall
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(LDFLAGS) -o $@
DIST_COMMON =  ChangeLog Makefile.am Makefile.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = tar
GZIP_ENV = --best
SOURCES = $(libutil_a_SOURCES)
OBJECTS = $(libutil_a_OBJECTS)

all: all-redirect
.SUFFIXES:
.SUFFIXES: .S .c .o .s
$(srcdir)/Makefile.in: # Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4) 
	cd $(top_srcdir) && $(AUTOMAKE) --gnu --include-deps util/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status


mostlyclean-noinstLIBRARIES:

clean-noinstLIBRARIES:
	-test -z "$(noinst_LIBRARIES)" || rm -f $(noinst_LIBRARIES)

distclean-noinstLIBRARIES:

maintainer-clean-noinstLIBRARIES:

.c.o:
	$(COMPILE) -c $<

.s.o:
	$(COMPILE) -c $<

.S.o:
	$(COMPILE) -c $<

mostlyclean-compile:
	-rm -f *.o core *.core

clean-compile:

distclean-compile:
	-rm -f *.tab.c

maintainer-clean-compile:

libutil.a: $(libutil_a_OBJECTS) $(libutil_a_DEPENDENCIES)
	-rm -f libutil.a
	$(AR) cru libutil.a $(libutil_a_OBJECTS) $(libutil_a_LIBADD)
	$(RANLIB) libutil.a

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP)
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	here=`pwd` && cd $(srcdir) \
	  && mkid -f$$here/ID $$unique $(LISP)

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$unique$(LISP)$$tags" \
	  || (cd $(srcdir) && etags $(ETAGS_ARGS) $$tags  $$unique $(LISP) -o $$here/TAGS)

mostlyclean-tags:

clean-tags:

distclean-tags:
	-rm -f TAGS ID

maintainer-clean-tags:

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = util

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  d=$(srcdir); \
	  if test -d $$d/$$file; then \
	    cp -pr $$d/$$file $(distdir)/$$file; \
	  else \
	    test -f $(distdir)/$$file \
	    || ln $$d/$$file $(distdir)/$$file 2> /dev/null \
	    || cp -p $$d/$$file $(distdir)/$$file || :; \
	  fi; \
	done
argparse.o: argparse.c ../config.h ../g10defs.h ../include/util.h \
	../include/types.h ../include/errors.h ../include/mpi.h \
	../include/iobuf.h ../include/memory.h ../include/i18n.h
dotlock.o: dotlock.c ../config.h ../g10defs.h ../include/types.h \
	../include/util.h ../include/errors.h ../include/mpi.h \
	../include/iobuf.h ../include/memory.h
errors.o: errors.c ../config.h ../g10defs.h ../include/errors.h \
	../include/i18n.h
fileutil.o: fileutil.c ../config.h ../g10defs.h ../include/util.h \
	../include/types.h ../include/errors.h ../include/mpi.h \
	../include/iobuf.h ../include/memory.h ../include/ttyio.h
g10u.o: g10u.c ../config.h ../g10defs.h ../include/mpi.h \
	../include/iobuf.h ../include/types.h ../include/memory.h \
	../include/util.h ../include/errors.h
http.o: http.c ../config.h ../g10defs.h ../include/util.h \
	../include/types.h ../include/errors.h ../include/mpi.h \
	../include/iobuf.h ../include/memory.h ../include/i18n.h \
	../include/http.h
iobuf.o: iobuf.c ../config.h ../g10defs.h ../include/memory.h \
	../include/util.h ../include/types.h ../include/errors.h \
	../include/mpi.h ../include/iobuf.h
logger.o: logger.c ../config.h ../g10defs.h ../include/util.h \
	../include/types.h ../include/errors.h ../include/mpi.h \
	../include/iobuf.h ../include/memory.h ../include/i18n.h
memory.o: memory.c ../config.h ../g10defs.h ../include/types.h \
	../include/memory.h ../include/util.h ../include/errors.h \
	../include/mpi.h ../include/iobuf.h
miscutil.o: miscutil.c ../config.h ../g10defs.h ../include/types.h \
	../include/util.h ../include/errors.h ../include/mpi.h \
	../include/iobuf.h ../include/memory.h ../include/i18n.h
secmem.o: secmem.c ../config.h ../g10defs.h ../include/types.h \
	../include/memory.h ../include/util.h ../include/errors.h \
	../include/mpi.h ../include/iobuf.h ../include/i18n.h
simple-gettext.o: simple-gettext.c ../config.h ../g10defs.h
strgutil.o: strgutil.c ../config.h ../g10defs.h ../include/types.h \
	../include/util.h ../include/errors.h ../include/mpi.h \
	../include/iobuf.h ../include/memory.h
ttyio.o: ttyio.c ../config.h ../g10defs.h ../include/util.h \
	../include/types.h ../include/errors.h ../include/mpi.h \
	../include/iobuf.h ../include/memory.h ../include/ttyio.h
w32reg.o: w32reg.c ../config.h ../g10defs.h

info-am:
info: info-am
dvi-am:
dvi: dvi-am
check-am: all-am
check: check-am
installcheck-am:
installcheck: installcheck-am
install-exec-am:
install-exec: install-exec-am

install-data-am:
install-data: install-data-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
install: install-am
uninstall-am:
uninstall: uninstall-am
all-am: Makefile $(LIBRARIES)
all-redirect: all-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) AM_INSTALL_PROGRAM_FLAGS=-s install
installdirs:


mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*

maintainer-clean-generic:
mostlyclean-am:  mostlyclean-noinstLIBRARIES mostlyclean-compile \
		mostlyclean-tags mostlyclean-generic

mostlyclean: mostlyclean-am

clean-am:  clean-noinstLIBRARIES clean-compile clean-tags clean-generic \
		mostlyclean-am

clean: clean-am

distclean-am:  distclean-noinstLIBRARIES distclean-compile \
		distclean-tags distclean-generic clean-am

distclean: distclean-am

maintainer-clean-am:  maintainer-clean-noinstLIBRARIES \
		maintainer-clean-compile maintainer-clean-tags \
		maintainer-clean-generic distclean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

maintainer-clean: maintainer-clean-am

.PHONY: mostlyclean-noinstLIBRARIES distclean-noinstLIBRARIES \
clean-noinstLIBRARIES maintainer-clean-noinstLIBRARIES \
mostlyclean-compile distclean-compile clean-compile \
maintainer-clean-compile tags mostlyclean-tags distclean-tags \
clean-tags maintainer-clean-tags distdir info-am info dvi-am dvi check \
check-am installcheck-am installcheck install-exec-am install-exec \
install-data-am install-data install-am install uninstall-am uninstall \
all-redirect all-am all installdirs mostlyclean-generic \
distclean-generic clean-generic maintainer-clean-generic clean \
mostlyclean distclean maintainer-clean


http-test:  http.c
	gcc -DHAVE_CONFIG_H -I. -I. -I.. $(INCLUDES) -g -Wall -DTEST \
	    -o http-test http.c libutil.a ../mpi/libmpi.a 

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
