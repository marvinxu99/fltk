//
// Code dialogs for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2023 by Bill Spitzak and others.
//
// This library is free software. Distribution and use rights are outlined in
// the file "COPYING" which should have been included with this file.  If this
// file is missing or damaged, see the license at:
//
//     https://www.fltk.org/COPYING.php
//
// Please see the following page on how to report bugs and issues:
//
//     https://www.fltk.org/bugs.php
//

// generated by Fast Light User Interface Designer (fluid) version 1.0400

#ifndef sourceview_panel_h
#define sourceview_panel_h
#include <FL/Fl.H>
void update_sourceview_position();
void update_sourceview_position_cb(class Fl_Tabs*, void*);
void update_sourceview_cb(class Fl_Button*, void*);
void update_sourceview_timer(void*);
void sourceview_defer_update();
void sourceview_toggle_visibility();
#include <FL/Fl_Double_Window.H>
extern void toggle_sourceview_cb(Fl_Double_Window*, void*);
extern Fl_Double_Window *sourceview_panel;
#include <FL/Fl_Tabs.H>
extern Fl_Tabs *sv_tab;
#include <FL/Fl_Group.H>
#include "CodeEditor.h"
extern CodeViewer *sv_source;
extern CodeViewer *sv_header;
extern TextViewer *sv_strings;
extern TextViewer *sv_project;
#include <FL/Fl_Button.H>
#include <FL/Fl_Light_Button.H>
extern Fl_Light_Button *sv_autorefresh;
extern Fl_Light_Button *sv_autoposition;
extern void toggle_sourceview_b_cb(Fl_Button*, void*);
#include <FL/Fl_Box.H>
Fl_Double_Window* make_sourceview();
#endif

//