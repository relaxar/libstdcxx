// { dg-do compile }
// 2001-07-17  Benjamin Kosnik  <bkoz@redhat.com>

// Copyright (C) 2001, 2003 Free Software Foundation
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.

// 22.2.7 The message retrieval category

#include <locale>

void test01()
{
  // Check for required base class.
  typedef std::messages_byname<char> test_type;
  typedef std::messages<char> base_type;
  const test_type& obj = std::use_facet<test_type>(std::locale::classic()); 
  const base_type* base __attribute__((unused)) = &obj;

  // Check for required typedefs
  typedef test_type::char_type char_type;
  typedef test_type::string_type string_type;
}

int main()
{
  test01();
  return 0;
}
