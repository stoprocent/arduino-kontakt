/*
    Copyright (c) 2014 RedBearLab, All rights reserved.

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
    See the GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
    IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
    CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
    TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
    SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
#include "Arduino.h"
#include "pin_transform.h"

/**********************************************************************
name :
function :
**********************************************************************/
PinName Pin_nRF51822_to_Arduino(uint32_t pin)
{
    PinName return_pin = (PinName)NC;

#ifdef SMART_BEACON_22
    switch(pin)
    {
        case 0 : return_pin = P0_24;break;      //D0/RXD/MISO
        case 1 : return_pin = P0_25;break;       //D1/TXD/MOSI
        case 2 : return_pin = P0_26;break;      //D2/CTS/CS/SDA
        case 3 : return_pin = P0_27;break;       //D3/RTS/SCK/SCL

        case 4 : return_pin = P0_3;break;      //D4
        case 5 : return_pin = P0_4;break;      //D5
        case 6 : return_pin = P0_5;break;      //D6
        case 7 : return_pin = P0_6;break;       //D7

        default : return_pin = (PinName)NC;break;
    }
#endif

#ifdef NRF51_DONGLE
    switch(pin)
    {
        case 0 : return_pin = P0_15;break;      //D0/RXD/MISO
        case 1 : return_pin = P0_16;break;       //D1/TXD/MOSI
        case 2 : return_pin = P0_17;break;      //D2/CTS/CS/SDA
        case 3 : return_pin = P0_18;break;       //D3/RTS/SCK/SCL
        case 4 : return_pin = P0_19;break;      //D4
        case 5 : return_pin = P0_20;break;      //D5

        default : return_pin = (PinName)NC;break;
    }
#endif

#ifdef SMART_BEACON_24
    switch(pin)
    {
        case 0 : return_pin = P0_5;break;      //D0/RXD
        case 1 : return_pin = P0_6;break;       //D1/TXD
        case 2 : return_pin = P0_27;break;      //D2/SDA
        case 3 : return_pin = P0_24;break;       //D3/SCL

        default : return_pin = (PinName)NC;break;
    }
#endif

#ifdef USB_BEACON_11
    switch(pin)
    {
        case 0 : return_pin = P0_26;break;      //D0/RXD
        case 1 : return_pin = P0_27;break;       //D1/TXD

        default : return_pin = (PinName)NC;break;
    }
#endif

    return (return_pin);
}
