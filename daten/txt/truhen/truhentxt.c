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

const const unsigned char truheleer [] =
{
  0x73,0x7A,0x7A,0x6D,0x5A,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};

const unsigned char tschluessel [] =
{
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x6C,0x7C,
  0x77,0x73,0x6A,0x7A,0x6C,0x6C,0x7A,0x73,0x7F,0x7A,
  0x6D,0x77,0x7E,0x73,0x53,0x7F,0x6B,0x7A,0x71,0x5A,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};

const unsigned char aspektberg[] =
{
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7E,
  0x6C,0x6F,0x7A,0x74,0x6B,0x7F,0x7B,0x7A,0x6C,0x7F,
  0x7D,0x7A,0x6D,0x78,0x7A,0x6C,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7A,0x6D,0x77,0x7E,0x73,0x6B,0x7A,0x71,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};

const unsigned char aspektwald[] =
{
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7E,
  0x6C,0x6F,0x7A,0x74,0x6B,0x7F,0x7B,0x7A,0x6C,0x7F,
  0x68,0x7E,0x73,0x7B,0x6C,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7A,0x6D,0x77,0x7E,0x73,0x6B,0x7A,0x71,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};

const unsigned char ausdauertrank[] =
{
  0x76,0x77,0x6D,0x7F,0x74,0x70,0x7A,0x71,0x71,0x6B,
  0x7F,0x71,0x76,0x7C,0x77,0x6B,0x7F,0x7F,0x71,0x70,
  0x7C,0x77,0x7F,0x72,0x7A,0x77,0x6D,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7E,0x6A,0x6C,0x7B,
  0x7E,0x6A,0x7A,0x6D,0x6B,0x6D,0x7E,0x7A,0x71,0x74,
  0x7A,0x7F,0x7F,0x7F,0x6B,0x6D,0x7E,0x78,0x7A,0x71,
  0x59,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};

const unsigned char brotfach[] =
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7D,0x6D,
  0x70,0x6B,0x79,0x7E,0x7C,0x77,0x00,0x78,0x7A,0x79,
  0x6A,0x71,0x7B,0x7A,0x71,0x5A,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x51
};

const unsigned char brotbuechse_1[] =
{
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7D,0x6D,
  0x70,0x6B,0x7D,0x6A,0x7A,0x7C,0x77,0x6C,0x7A,0x7F,
  0x64,0x7F,0x78,0x7A,0x53,0x7F,0x79,0x6A,0x71,0x7B,
  0x7A,0x71,0x5A,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};

const const unsigned char brotbuechse_2[] =
{
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7D,0x6D,
  0x70,0x6B,0x7D,0x6A,0x7A,0x7C,0x77,0x6C,0x7A,0x7F,
  0x63,0x7F,0x78,0x7A,0x53,0x7F,0x79,0x6A,0x71,0x7B,
  0x7A,0x71,0x5A,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};

const unsigned char erhalten[] =
{
  0x7F,0x55,0x7F,0x7F,0x7A,0x6D,0x77,0x7E,0x73,0x6B,
  0x7A,0x71,0x5A,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};

const unsigned char erz[] =
{
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x37,0x55,
  0x64,0x7F,0x78,0x7A,0x79,0x6A,0x71,0x7B,0x7A,0x71,
  0x5A,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};

const unsigned char geldkatze1[] =
{
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x78,0x7A,
  0x73,0x7B,0x74,0x7E,0x6B,0x65,0x7A,0x7F,0x64,0x7F,
  0x78,0x7A,0x79,0x6A,0x71,0x53,0x7B,0x7A,0x71,0x5A,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};

const unsigned char geldkatze2[] =
{
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x78,0x7A,
  0x73,0x7B,0x74,0x7E,0x6B,0x65,0x7A,0x7F,0x63,0x7F,
  0x78,0x7A,0x79,0x6A,0x71,0x53,0x7B,0x7A,0x71,0x5A,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};

const unsigned char geldfach[] =
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x7A,
  0x73,0x7B,0x79,0x7E,0x7C,0x77,0x7F,0x78,0x7A,0x79,
  0x6A,0x71,0x7B,0x7A,0x71,0x5A,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x51
};

const unsigned char goldvoll[] =
{
  0x76,0x77,0x6D,0x7F,0x74,0x70,0x7A,0x71,0x71,0x6B,
  0x7F,0x71,0x76,0x7C,0x77,0x6B,0x7F,0x7F,0x71,0x70,
  0x7C,0x77,0x7F,0x72,0x7A,0x77,0x6D,0x7F,0x78,0x70,
  0x73,0x7B,0x53,0x7F,0x7F,0x7F,0x72,0x6A,0x7A,0x71,
  0x65,0x7A,0x71,0x7F,0x6B,0x6D,0x7E,0x78,0x7A,0x71,
  0x59,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};

const unsigned char heiltrank[] =
{
  0x76,0x77,0x6D,0x7F,0x74,0x70,0x7A,0x71,0x71,0x6B,
  0x7F,0x71,0x76,0x7C,0x77,0x6B,0x7F,0x7F,0x71,0x70,
  0x7C,0x77,0x7F,0x72,0x7A,0x77,0x6D,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x77,0x7A,0x76,0x73,
  0x6B,0x6D,0x7E,0x7A,0x71,0x74,0x7A,0x7F,0x6B,0x6D,
  0x7E,0x53,0x7F,0x7F,0x78,0x7A,0x71,0x59,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};

const unsigned char kartetruhe[] =
{
  0x74,0x7E,0x6D,0x6B,0x7A,0x7F,0x7A,0x6D,0x77,0x7E,
  0x73,0x6B,0x7A,0x71,0x5A,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};

const unsigned char stoff[] =
{
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x36,0x55,
  0x64,0x7F,0x78,0x7A,0x79,0x6A,0x71,0x7B,0x7A,0x71,
  0x5A,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
  0x7F,0x51
};
