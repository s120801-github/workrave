// LinkException.hh --- Link exception
//
// Copyright (C) 2007 Rob Caelers <robc@krandor.nl>
// All rights reserved.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// $Id$
//

#ifndef LINKEXCEPTION_HH
#define LINKEXCEPTION_HH

#include "Exception.hh"

class LinkException : public Exception
{
public:
  explicit LinkException(const std::string &detail)
    : Exception(detail)
  {
  }

  virtual ~LinkException() throw()
  {
  }
};

#endif // LINKEXCEPTION_HH