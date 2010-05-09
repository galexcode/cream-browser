/*
 *  Copyright (c) 2010, David Delassus <linkdd@ydb.me>
 *
 *  This file is part of Cream-Browser
 *
 *  Permission is hereby granted, free of charge, to any person
 *  obtaining a copy of this software and associated documentation
 *  files (the "Software"), to deal in the Software without
 *  restriction, including without limitation the rights to use,
 *  copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following
 *  conditions:
 *
 *  The above copyright notice and this permission notice shall be
 *  included in all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 *  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 *  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 *  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *  OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef __CALLBACKS_H
#define __CALLBACKS_H

gboolean control_socket (GIOChannel *channel);
gboolean control_client_socket (GIOChannel *channel);

void cb_cream_destroy (GtkWidget *emit, gpointer data);
void cb_cream_update_notebook_title (GtkWidget *child, gpointer data);
void cb_cream_notebook_close_page (GtkButton *button, GtkWidget *child);
gboolean cb_inputbox_keys (GtkEntry *inputbox, GdkEventKey *event, CreamTabbed *obj);
void cb_tray_view (GtkMenuItem *item, gpointer window);
void cb_tray_hide (GtkMenuItem *item, gpointer window);
void cb_tray_activated (GObject *trayIcon, gpointer window);
void cb_tray_popup (GtkStatusIcon *status_icon, guint button, guint32 activate_time, gpointer popUpMenu);

#endif /* __CALLBACKS_H */

