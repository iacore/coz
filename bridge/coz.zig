const std = @import("std");
const memcpy = std.zig.c_builtins.__builtin_memcpy;
const dlsym = std.c.dlsym;

const coz_counter_t = extern struct {
    count: usize,
    backoff: usize,
};
const coz_get_counter_t = ?fn (c_int, [*c]const u8) callconv(.C) [*c]coz_counter_t;
fn _call_coz_get_counter(arg_type_1: c_int, arg_name: [*c]const u8) callconv(.C) [*c]coz_counter_t {
    var type_1 = arg_type_1;
    var name = arg_name;
    const _initialized = struct {
        var static: u8 = 0;
    };
    const @"fn" = struct {
        var static: coz_get_counter_t = @import("std").mem.zeroes(coz_get_counter_t);
    };
    if (!(_initialized.static != 0)) {
        var p: ?*c_void = dlsym(@intToPtr(?*c_void, @as(c_int, 0)), "_coz_get_counter");
        _ = memcpy(@ptrCast(?*c_void, &@"fn".static), @ptrCast(?*const c_void, &p), @sizeOf(?*c_void));
        _initialized.static = 1;
    }
    if (@"fn".static != null) return @"fn".static.?(type_1, name) else return null;
    return null;
}
const coz_get_arrivals_t = ?fn (...) callconv(.C) [*c]usize;
fn _call_coz_get_local_arrivals() callconv(.C) [*c]usize {
    const _initialized = struct {
        var static: u8 = 0;
    };
    const @"fn" = struct {
        var static: coz_get_arrivals_t = @import("std").mem.zeroes(coz_get_arrivals_t);
    };
    if (!(_initialized.static != 0)) {
        var p: ?*c_void = dlsym(@intToPtr(?*c_void, @as(c_int, 0)), "_coz_get_local_arrivals");
        _ = memcpy(@ptrCast(?*c_void, &@"fn".static), @ptrCast(?*const c_void, &p), @sizeOf(?*c_void));
        _initialized.static = 1;
    }
    if (@"fn".static != null) return @"fn".static.?() else return null;
    return null;
}
fn _call_coz_get_global_arrivals() callconv(.C) [*c]usize {
    const _initialized = struct {
        var static: u8 = 0;
    };
    const @"fn" = struct {
        var static: coz_get_arrivals_t = @import("std").mem.zeroes(coz_get_arrivals_t);
    };
    if (!(_initialized.static != 0)) {
        var p: ?*c_void = dlsym(@intToPtr(?*c_void, @as(c_int, 0)), "_coz_get_global_arrivals");
        _ = memcpy(@ptrCast(?*c_void, &@"fn".static), @ptrCast(?*const c_void, &p), @sizeOf(?*c_void));
        _initialized.static = 1;
    }
    if (@"fn".static != null) return @"fn".static.?() else return null;
    return null;
}
fn _coz_wrapper_increment_counter(counter_type: c_int, name: [:0]const u8) void {
    const _initialized = struct {
        var static: u8 = 0;
    };
    const _counter = struct {
        var static: [*c]coz_counter_t = null;
    };
    if (!(_initialized.static != 0)) {
        _counter.static = _call_coz_get_counter(counter_type, name);
        _initialized.static = 1;
    }
    if (_counter.static != null) {
        _ = @atomicRmw(@TypeOf(_counter.static.*.count), &_counter.static.*.count, .Add, 1, .Monotonic);
    }
}

/// Specify a progress point for throughput profiling
pub fn progress(name: [:0]const u8) void {
    _coz_wrapper_increment_counter(1, name);
}
/// Specify the begin of a transaction for latency profiling
pub fn begin(name: [:0]const u8) void {
    _coz_wrapper_increment_counter(2, name);
}
/// Specify the end of a transaction for latency profiling
pub fn end(name: [:0]const u8) void {
    _coz_wrapper_increment_counter(3, name);
}
