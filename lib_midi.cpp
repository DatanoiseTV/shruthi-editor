// Shruthi-Editor: An unofficial Editor for the Shruthi hardware synthesizer. For 
// informations about the Shruthi, see <http://www.mutable-instruments.net/shruthi1>. 
//
// Copyright (C) 2011 Manuel Krönig
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

#include "lib_midi.h"

// ******************************************
const unsigned char Midi::sysexHead[6]={240,0,32,119,0,2};
// ******************************************


// ******************************************
const unsigned char Midi::sysexFoot=247;
// ******************************************


// ******************************************
unsigned char Midi::calculateChecksum(unsigned char sysex[], unsigned int start, unsigned int end) {
// ******************************************
    unsigned long chk=0;
    for(unsigned int i=start; i<end;i++) {
        chk+=sysex[i];
    }
    return (unsigned char) (chk % 256);
}
