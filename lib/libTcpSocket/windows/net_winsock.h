#pragma once
/*
 *      Copyright (C) 2011 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#ifndef _WINSOCKAPI_
#define _WINSOCKAPI_
#endif
#pragma warning(disable:4005) // Disable "warning C4005: '_WINSOCKAPI_' : macro redefinition"
#include <winsock2.h>
#pragma warning(default:4005)
#include <ws2spi.h>
#include <ws2ipdef.h>
#include <ws2tcpip.h>
#include <io.h>

#define SHUT_RDWR SD_BOTH

#ifndef ETIMEDOUT
#define ETIMEDOUT WSAETIMEDOUT
#endif

typedef SOCKET socket_t;
typedef int socklen_t;

int tcp_connect_addr_socket_nonblocking(struct addrinfo* addr, socket_t fdSock,
    char *szErrbuf, size_t nErrbufSize, int nTimeout);
