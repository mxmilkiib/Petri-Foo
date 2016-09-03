/*  Petri-Foo is a fork of the Specimen audio sampler.

    Original Specimen author Pete Bessman
    Copyright 2005 Pete Bessman
    Copyright 2011 James W. Morris

    This file is part of Petri-Foo.

    Petri-Foo is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 2 as
    published by the Free Software Foundation.

    Petri-Foo is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Petri-Foo.  If not, see <http://www.gnu.org/licenses/>.

    This file is a derivative of a Specimen original, modified 2011
*/

#ifndef __JACKDRIVER_H__
#define __JACKDRIVER_H__

#include "config.h"

#include <jack/jack.h>
#include <stdbool.h>

#if HAVE_JACK_SESSION_H
#include <jack/session.h>
void jackdriver_set_session_cb(JackSessionCallback jacksession_cb);
#endif

static int MAX_JACK_CHANNELS = 16;
void            jackdriver_set_autoconnect(bool);
void            jackdriver_set_uuid(char *uuid);
void            jackdriver_set_outputgroup(int o);
jack_client_t*  jackdriver_get_client(void);

/*  if this needs to be called do so before starting jack */
void            jackdriver_disable_jacksession(void);


#endif /* __JACKDRIVER_H__ */
