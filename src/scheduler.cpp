/** This file is part of sim-kernel
 *
 * Copyright (C) 2021 Juan R. Garcia Blanco
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "scheduler.h"

using namespace sim;

const int NB_EVENTS_INIT = 32;

scheduler::scheduler()
    : m_first_ptr(0)
    , m_free_slots_ptr(-1)
{
    m_events.reserve(NB_EVENTS_INIT);
    m_queue.reserve(NB_EVENTS_INIT);
}

scheduler::~scheduler()
{}

bool
scheduler::add_event(const std::string& name, uint64_t offset, uint64_t period, int64_t repeats)
{
    user_event ev;
    ev.name = name;
    ev.offset = offset;
    ev.period = period;
    ev.repeats = repeats;
    ev.triggered = 0;

    uint64_t delta = offset ? offset : period;

    if (m_free_slots_ptr == -1) {
    }

    queued_event& queued_ev = m_queue[m_free_slots_ptr];
    queued_ev.delta = delta;

    return true;
}
