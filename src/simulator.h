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

#ifndef SIM_SIMULATOR_H_
#define SIM_SIMULATOR_H_

#include "sim_types.h"

namespace sim {
class scheduler;

class simulator
{
public:
  simulator();
  virtual ~simulator();

private:
  scheduler* m_scheduler;
};
}

#endif // SIM_SIMULATOR_H_
