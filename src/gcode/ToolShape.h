/******************************************************************************\

  CAMotics is an Open-Source simulation and CAM software.
  Copyright (C) 2011-2019 Joseph Coffland <joseph@cauldrondevelopment.com>

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

\******************************************************************************/

#ifndef CBANG_ENUM_EXPAND
#ifndef GCODE_TOOL_SHAPE_H
#define GCODE_TOOL_SHAPE_H

#define CBANG_ENUM_NAME ToolShape
#define CBANG_ENUM_NAMESPACE GCode
#define CBANG_ENUM_PATH gcode
#define CBANG_ENUM_PREFIX 3
#include <cbang/enum/MakeEnumeration.def>

#endif // GCODE_TOOL_SHAPE_H
#else // CBANG_ENUM_EXPAND

CBANG_ENUM_EXPAND(TS_CYLINDRICAL,   0)
CBANG_ENUM_ALIAS(TS_CYLINDER,       TS_CYLINDRICAL)
CBANG_ENUM_EXPAND(TS_CONICAL,       1)
CBANG_ENUM_ALIAS(TS_CONE,           TS_CONICAL)
CBANG_ENUM_EXPAND(TS_BALLNOSE,      2)
CBANG_ENUM_EXPAND(TS_SPHEROID,      3)
CBANG_ENUM_ALIAS(TS_SPHERE,         TS_SPHEROID)
CBANG_ENUM_EXPAND(TS_SNUBNOSE,      4)

#endif // CBANG_ENUM_EXPAND
