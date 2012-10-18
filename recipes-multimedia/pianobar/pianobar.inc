DESCRIPTION = "Console-based pandora.com player"
HOMEPAGE = "http://6xq.net/projects/pianobar/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://COPYING;md5=7f7d65c519eee701c4884152c5d9fddc"

DEPENDS = "libao gnutls libgcrypt libjson faad2"

INC_PR = "r0"

SRC_URI = "git://github.com/PromyLOPh/pianobar;protocol=git"

CFLAGS_append = " -std=c99"

do_compile () {
    oe_runmake 'DISABLE_MAD=1'
}

do_install () {
    oe_runmake 'PREFIX=${D}${prefix}' install
}