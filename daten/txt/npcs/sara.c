//   Verlies - ein Adventure im Retrodesign
//
//   Copyright (C) 2018-2022 Heiko Wolf
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License As published by
//   the Free Software Foundation; either version 2 of the License, or
//   (at your option) any later version.
//
//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY Or FITNESS For A PARTICULAR PURPOSE.  See the
//   GNU General Public License For more details.
//
//   You should have received a copy of the GNU General Public License along
//   With this program; if not, write to the Free Software Foundation, Inc.,
//   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
//   Kontakt: projekte@kabelmail.net

//#pragma bank=10

const unsigned char saratxt1[] =
{
  0x6C,0x7E,0x6D,0x7E,0x56,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7B,0x76,
  0x7A,0x6C,0x7A,0x00,0x69,0x7A,0x6D,0x7B,0x7E,0x72,
  0x72,0x6B,0x7A,0x71,0x00,0x00,0x70,0x78,0x7A,0x6D,
  0x5A,0x00,0x77,0x7E,0x7D,0x7A,0x71,0x00,0x7B,0x76,
  0x7A,0x6C,0x7A,0x71,0x6C,0x6B,0x7A,0x76,0x71,0x00,
  0x76,0x71,0x00,0x7B,0x76,0x7A,0x00,0x00,0x00,0x00,
  0x00,0x50
};

const unsigned char saratxt2[] =
{
  0x6C,0x6B,0x7E,0x7B,0x6B,0x00,0x78,0x7A,0x6C,0x7C,
  0x77,0x73,0x7A,0x6A,0x53,0x00,0x00,0x00,0x7B,0x7A,
  0x6D,0x6B,0x59,0x00,0x68,0x76,0x7A,0x00,0x6C,0x70,
  0x73,0x73,0x00,0x76,0x7C,0x77,0x65,0x6A,0x72,0x00,
  0x72,0x7E,0x6D,0x74,0x6B,0x69,0x76,0x7A,0x6D,0x6B,
  0x7A,0x73,0x00,0x00,0x74,0x70,0x72,0x72,0x7A,0x71,
  0x57,0x00,0x74,0x70,0x7A,0x71,0x71,0x6B,0x00,0x00,
  0x00,0x50
};

const unsigned char saratxt3[] =
{
  0x76,0x77,0x6D,0x00,0x7B,0x7A,0x71,0x00,0x6C,0x6B,
  0x7A,0x76,0x71,0x00,0x7A,0x71,0x6B,0x53,0x79,0x7A,
  0x6D,0x71,0x7A,0x71,0x57,0x00,0x76,0x77,0x6D,0x00,
  0x7D,0x7A,0x74,0x70,0x72,0x53,0x72,0x6B,0x00,0x63,
  0x55,0x3B,0x00,0x79,0x6A,0x7A,0x6D,0x00,0x7A,0x6A,
  0x6D,0x7A,0x00,0x00,0x72,0x6A,0x7A,0x77,0x7A,0x5A,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x51
};


const unsigned char saratxt4[] =
{
  0x6C,0x7E,0x6D,0x7E,0x56,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x77,0x7E,
  0x7D,0x6B,0x00,0x76,0x77,0x6D,0x00,0x7A,0x76,0x71,
  0x7A,0x71,0x00,0x68,0x7A,0x78,0x78,0x7A,0x79,0x6A,
  0x71,0x7B,0x7A,0x71,0x00,0x7B,0x7A,0x71,0x00,0x6C,
  0x6B,0x7A,0x76,0x71,0x65,0x6A,0x00,0x7A,0x71,0x6B,
  0x79,0x7A,0x6D,0x71,0x7A,0x71,0x57,0x00,0x00,0x00,
  0x00,0x51
};

const unsigned char saratxt5[] =
{
  0x6C,0x7E,0x6D,0x7E,0x56,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x77,0x6A,
  0x6D,0x6D,0x7E,0x5A,0x00,0x76,0x77,0x6D,0x00,0x77,
  0x7E,0x7D,0x6B,0x00,0x7A,0x6C,0x7A,0x71,0x7B,0x73,
  0x76,0x7C,0x77,0x00,0x78,0x7A,0x6C,0x7C,0x77,0x7E,
  0x79,0x79,0x6B,0x59,0x77,0x76,0x7A,0x6D,0x00,0x76,
  0x6C,0x6B,0x00,0x7A,0x6A,0x6D,0x7A,0x00,0x00,0x00,
  0x00,0x50
};

const unsigned char saratxt6[] =
{
  0x7D,0x7A,0x73,0x70,0x77,0x71,0x6A,0x71,0x78,0x5A,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x7F,0x7F,0x7F,0x7F,0x7F,0x00,0x00,0x00,0x63,
  0x55,0x3B,0x7F,0x7A,0x6D,0x77,0x7E,0x73,0x6B,0x7A,
  0x71,0x5A,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x00,0x00,0x00,
  0x00,0x50
};

const unsigned char saratxt7[] =
{
  0x6C,0x7E,0x6D,0x7E,0x56,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x00,0x00,0x00,0x69,0x76,
  0x7A,0x73,0x7A,0x71,0x7F,0x7B,0x7E,0x71,0x74,0x5A,
  0x00,0x7F,0x7F,0x7F,0x7F,0x7F,0x00,0x00,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x00,0x00,0x00,
  0x00,0x51
};
