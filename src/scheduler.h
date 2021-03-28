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

#ifndef SIM_SCHEDULER_H_
#define SIM_SCHEDULER_H_

#include "sim_types.h"

#include <string>
#include <vector>

namespace sim {
class scheduler
{
public:
  scheduler();
  virtual ~scheduler();
  bool add_event(const std::string& name,
                 uint64_t offset,
                 uint64_t period,
                 int64_t repeats);

private:
  struct user_event
  {
    std::string name;
    uint64_t offset;
    uint64_t period;
    int64_t repeats;
    int64_t triggered;
  };
  typedef std::vector<user_event> user_event_list_t;

  struct queued_event
  {
    uint64_t delta;
    int next;
    user_event* ev;
  };
  typedef std::vector<queued_event> queued_event_list_t;

  user_event_list_t m_events;
  queued_event_list_t m_queue;
  int m_first_ptr;
  int m_free_slots_ptr;
};
}

#endif // SIM_SCHEDULER_H_
