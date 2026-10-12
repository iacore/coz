#!/bin/sh
# Regenerate the source tarball the PKGBUILD consumes (coz-<pkgver>.tar.xz) from
# this tree, and refresh its b2sums. Run this after any source change, then
# build with `makepkg`.
#
# The tarball is the fork's tree without the packaging files (PKGBUILD,
# .SRCINFO, build/makepkg output), so its checksum never depends on the
# PKGBUILD that records it.
set -eu
cd "$(dirname "$0")"

pkgver=$(sed -n 's/^pkgver=//p' PKGBUILD)
tarball="coz-$pkgver.tar.xz"

rm -rf "$tarball"
entries=$(ls -A | grep -vEx "\.git|build|build-.*|_deps|src|pkg|PKGBUILD|\.SRCINFO|$tarball|.*\.pkg\.tar\.zst")
# shellcheck disable=SC2086
tar cJf "$tarball" --transform="s,^,coz-$pkgver/," $entries

sum=$(b2sum "$tarball" | cut -d' ' -f1)
sed -i "s|^b2sums=.*|b2sums=('$sum')|" PKGBUILD
echo "$tarball  $sum"