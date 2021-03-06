/*
* Copyright (c) 2011, The Linux Foundation. All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are
* met:
*     * Redistributions of source code must retain the above copyright
*       notice, this list of conditions and the following disclaimer.
*     * Redistributions in binary form must reproduce the above
*       copyright notice, this list of conditions and the following
*       disclaimer in the documentation and/or other materials provided
*       with the distribution.
*     * Neither the name of The Linux Foundation nor the names of its
*       contributors may be used to endorse or promote products derived
*       from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
* ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
* BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
* BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
* WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
* OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
* IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

// API for the network plug-in
#ifndef NET_HTTP_NET_PLUGIN_BRIDGE_EXPORTS_H_
#define NET_HTTP_NET_PLUGIN_BRIDGE_EXPORTS_H_

// export these functions from libwebcore, may be used by the plug-in
extern bool HeadersIsRedirect(const net::HttpResponseHeaders* h, std::string& s)
    __attribute__ ((visibility ("default"), used));
extern GURL GurlResolveOrigin(const net::HttpRequestInfo* req, std::string& s)
    __attribute__ ((visibility ("default"), used));
extern GURL GurlOrigin(const net::HttpRequestInfo* req)
    __attribute__ ((visibility ("default"), used));
extern void NetPreconnect(net::HttpNetworkSession*, GURL const&)
    __attribute__ ((visibility ("default"), used));

#endif /* NET_HTTP_NET_PLUGIN_BRIDGE_EXPORTS_H_ */
