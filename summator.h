#pragma once

#include "core/object/ref_counted.h"

class Summator : public RefCounted {
        GDCLASS(Summator, RefCounted);

        int count = 0;

        static void _bind_methods();

public:
        void add(int p_value);
        void reset();
        int get_total() const;

        Summator() = default;
};
