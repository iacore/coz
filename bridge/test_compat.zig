const std = @import("std");
const coz = @import("coz_wrapper.zig");

fn sleep() void {
    coz.begin("long sleep");
    std.time.sleep(std.time.ns_per_ms * 10); // sleep for 10 ms
    coz.end("long sleep");
}

pub fn main() void {
    var i: usize = 0;
    while (i < 100) : (i += 1) {
        coz.progress("main loop");
    }
    i = 0;
    while (i < 10) : (i += 1) {
        sleep();
    }
}
