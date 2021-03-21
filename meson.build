# This file is part of sim-kernel
#
# Copyright (C) 2021 Juan R. Garcia Blanco
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

project(
  'sim',
  'cpp',
  version : '0.0.1',
  default_options : ['warning_level=3']
)

project_source_files = [
  'src/main.cpp',
  'src/scheduler.cpp'
]

# project_dependencies = [
#   dependency('mylib', fallback : ['mylib', 'mylib_dep']),
#   dependency('headeronly', fallback : ['headeronly', 'headeronly_dep']),
# ]

build_args = [
]


# ===================================================================

# ======
# Target
# ======

build_args += [
  '-DPROJECT_NAME=' + meson.project_name(),
  '-DPROJECT_VERSION=' + meson.project_version(),
]

project_target = executable(
  meson.project_name(),
  project_source_files,
  #  dependencies: project_dependencies,
  install : true,
  c_args : build_args,
)

test('basic', project_target)
