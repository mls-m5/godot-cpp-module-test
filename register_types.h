#pragma once

#include "summator.h"

void register_summator_types() {
        ClassDB::register_class<Summator>();
}

void unregister_summator_types() {
        // Nothing to do here in this example.
}
