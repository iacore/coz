#include <coz.h>

void coz_wrapper_progress() {
    COZ_PROGRESS
}

void coz_wrapper_progress_named() {
    COZ_PROGRESS_NAMED("coz_wrapper_progress_name")
}

void coz_wrapper_begin() {
    COZ_BEGIN("transaction name")
}

void coz_wrapper_end() {
    COZ_END("transaction name")
}

void coz_wrapper_begin2() {
    COZ_BEGIN("transaction nam")
}

void coz_wrapper_end2() {
    COZ_END("transaction nam")
}
