# Packaged from the iacore/coz fork.
#
# Unlike the AUR coz package (upstream 0.2.2, Makefile build) this packages the
# fork at 0.2.5, which builds with CMake and requires LIEF. LIEF 0.17.0 is
# fetched by CMake at build time, so the build needs network access. libelfin is
# vendored under libelfin/ so the fork can carry the zero-length-string guard
# that lets coz profile Zig binaries.

pkgname=coz
pkgver=0.2.5
pkgrel=1
pkgdesc="A new kind of profiler that measures optimization potential"
arch=('x86_64')
url="https://github.com/iacore/coz"
license=('BSD')
depends=('python' 'zlib')
makedepends=('cmake' 'ninja' 'git')
# The tarball is the fork's source tree without this PKGBUILD, so the checksum
# does not depend on the file that records it.
source=("$pkgname-$pkgver.tar.xz")
b2sums=('9d43be91d0a6a04b1b58ec97be606cbcb941c99578935f413998bd863c8e4bececcd3a5140fc9b27e89076edfea6bdebbccc33e76c02288a9db3ba3caa9d2a4b')

build() {
  cd "$pkgname-$pkgver"
  # coz compiles with -g, and LIEF's bundled spdlog bakes a __FILE__ path into
  # the library; remap the build root so the package carries no $srcdir.
  export CFLAGS="${CFLAGS} -ffile-prefix-map=${srcdir}=."
  export CXXFLAGS="${CXXFLAGS} -ffile-prefix-map=${srcdir}=."
  cmake -S . -B build -G Ninja \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_INSTALL_PREFIX=/usr \
    -DINSTALL_COZ=ON \
    -DBUILD_BENCHMARKS=OFF
  cmake --build build
}

package() {
  cd "$pkgname-$pkgver"
  DESTDIR="$pkgdir" cmake --install build
}

# vim:set ts=2 sw=2 et: