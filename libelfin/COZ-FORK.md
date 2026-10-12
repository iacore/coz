# Vendored libelfin (patched for Zig)

This directory is a copy of [plasma-umass/libelfin](https://github.com/plasma-umass/libelfin)
at commit `5a032d5896f98aa57200e6e58e93f1dac0527a90` (`origin/improved_dwarf5_support`),
which is the revision coz's CMake normally fetches. It is vendored so coz can carry a
one-line fix.

`CMakeLists.txt` picks this directory up automatically when `libelfin/elf/elf.cc`
exists (before falling back to FetchContent).

## The patch

`dwarf/value.cc`, `value::as_string` copied a DWARF string without guarding the
zero-length case:

```diff
 buf.resize(size);
-memmove(&buf.front(), p, size);
+if (size > 0) {
+        memmove(&buf.front(), p, size);
+}
```

`std::string::front()` on an empty string trips `_GLIBCXX_ASSERTIONS`, so coz aborted
with `basic_string.h:... Assertion '!empty()' failed.` whenever it read a zero-length
DWARF string attribute. Zig emits such an attribute, so coz could not profile any Zig
binary until this guard was added. (libelfin's own `dwarf/cursor.cc`, `cursor::string`,
already had the same guard.)

Licence: libelfin is BSD-2-Clause — see `LICENSE`.