//========================================================================
//
// annot_stamp_draft.h
//
// Copyright (C) 2021 Mahmoud Ahmed Khalil <mahmoudkhalil11@gmail.com>
// Copyright (C) 2021 Albert Astals Cid <aacid@kde.org>
//
// Mechanically extracted from an SVG created for Okular by Eugene Trounev eugene.trounev@gmail.com
//
// Licensed under GPLv2 or later
//
//========================================================================

#ifndef ANNOT_STAMP_DRAFT_H
#define ANNOT_STAMP_DRAFT_H

#include "Dict.h"
#include "Object.h"
#include "PDFDoc.h"

static const double ANNOT_STAMP_DRAFT_WIDTH = 79.758179;
static const double ANNOT_STAMP_DRAFT_HEIGHT = 26.484743;

static const char *ANNOT_STAMP_DRAFT = "1 0 0 -1 0 26.484741 cm\n"
                                       "q\n"
                                       "1 1 1 rg /a0 gs\n"
                                       "3.406 2.129 m 76.367 2.129 l 77.066 2.129 77.637 2.828 77.637 3.398 c 77.637\n"
                                       " 23.09 l 77.637 23.789 77.07 24.359 76.367 24.359 c 3.406 24.359 l 2.707\n"
                                       " 24.359 2.137 23.66 2.137 23.09 c 2.137 3.398 l 2.137 2.699 2.703 2.129 \n"
                                       "3.406 2.129 c h\n"
                                       "3.406 2.129 m f\n"
                                       "0.215686 0.215686 0.215686 rg /a1 gs\n"
                                       "1 1 1 RG 0.531496 w\n"
                                       "0 J\n"
                                       "0 j\n"
                                       "[] 0.0 d\n"
                                       "4 M q 1 0 0 1 0 0 cm\n"
                                       "28.543 13.016 m 28.543 14.297 28.352 15.426 27.965 16.402 c 27.578 17.371\n"
                                       " 27.051 18.184 26.379 18.84 c 25.707 19.496 24.914 19.992 23.996 20.324 \n"
                                       "c 23.086 20.66 22.102 20.828 21.047 20.828 c 14.82 20.828 l 14.82 5.434 \n"
                                       "l 20.395 5.434 l 21.59 5.434 22.684 5.582 23.684 5.883 c 24.68 6.18 25.543\n"
                                       " 6.641 26.262 7.258 c 26.984 7.879 27.543 8.664 27.945 9.617 c 28.348 10.57\n"
                                       " 28.547 11.703 28.547 13.016 c 25.301 13.016 m 25.301 12.121 25.176 11.352\n"
                                       " 24.93 10.711 c 24.688 10.07 24.352 9.547 23.914 9.137 c 23.477 8.723 22.953\n"
                                       " 8.414 22.34 8.219 c 21.734 8.023 21.066 7.922 20.328 7.922 c 18.043 7.926\n"
                                       " l 18.043 18.34 l 20.773 18.34 l 21.422 18.34 22.02 18.227 22.566 18 c 23.121\n"
                                       " 17.773 23.598 17.438 23.996 16.996 c 24.402 16.543 24.723 15.988 24.945\n"
                                       " 15.324 c 25.18 14.66 25.297 13.895 25.297 13.02 c 31.055 20.832 m 31.055\n"
                                       " 11.785 l 31.055 11.531 31.051 11.262 31.043 10.977 c 31.043 10.691 31.035\n"
                                       " 10.422 31.02 10.168 c 31.012 9.906 31.004 9.672 30.996 9.469 c 30.988 9.258\n"
                                       " 30.977 9.105 30.965 9.012 c 33.895 9.012 l 33.91 9.098 33.922 9.254 33.938\n"
                                       " 9.469 c 33.953 9.68 33.965 9.914 33.98 10.168 c 33.996 10.422 34.008 10.68\n"
                                       " 34.012 10.934 c 34.027 11.18 34.035 11.383 34.035 11.535 c 34.078 11.535\n"
                                       " l 34.23 11.105 34.383 10.723 34.535 10.387 c 34.688 10.043 34.867 9.758\n"
                                       " 35.07 9.523 c 35.281 9.281 35.531 9.102 35.824 8.977 c 36.117 8.844 36.477\n"
                                       " 8.781 36.906 8.781 c 37.09 8.781 37.266 8.801 37.441 8.836 c 37.625 8.863\n"
                                       " 37.762 8.902 37.855 8.945 c 37.855 11.512 l 37.66 11.469 37.457 11.43 37.254\n"
                                       " 11.402 c 37.059 11.367 36.82 11.348 36.543 11.348 c 35.777 11.348 35.18\n"
                                       " 11.656 34.75 12.277 c 34.328 12.898 34.117 13.812 34.117 15.031 c 34.117\n"
                                       " 20.832 l 31.047 20.832 l 42.477 21.051 m 41.91 21.051 41.398 20.973 40.945\n"
                                       " 20.82 c 40.5 20.66 40.121 20.43 39.809 20.133 c 39.496 19.828 39.254 19.453\n"
                                       " 39.086 19.008 c 38.918 18.562 38.836 18.059 38.836 17.488 c 38.836 16.789\n"
                                       " 38.957 16.203 39.195 15.73 c 39.441 15.25 39.777 14.863 40.199 14.57 c \n"
                                       "40.621 14.273 41.117 14.059 41.684 13.926 c 42.25 13.789 42.855 13.715 43.496\n"
                                       " 13.707 c 46.043 13.664 l 46.043 13.062 l 46.043 12.633 46.004 12.277 45.922\n"
                                       " 11.992 c 45.848 11.699 45.738 11.465 45.594 11.281 c 45.449 11.098 45.266\n"
                                       " 10.973 45.047 10.898 c 44.836 10.816 44.59 10.777 44.316 10.777 c 44.062\n"
                                       " 10.777 43.832 10.805 43.629 10.855 c 43.434 10.906 43.262 10.996 43.117\n"
                                       " 11.129 c 42.973 11.254 42.852 11.426 42.758 11.641 c 42.672 11.852 42.609\n"
                                       " 12.121 42.57 12.449 c 39.367 12.297 l 39.453 11.781 39.613 11.309 39.848\n"
                                       " 10.887 c 40.082 10.457 40.402 10.086 40.809 9.773 c 41.223 9.461 41.73 \n"
                                       "9.219 42.328 9.051 c 42.934 8.875 43.641 8.789 44.449 8.789 c 45.184 8.789\n"
                                       " 45.84 8.879 46.418 9.062 c 46.992 9.246 47.48 9.52 47.883 9.883 c 48.285\n"
                                       " 10.238 48.59 10.68 48.801 11.203 c 49.012 11.727 49.117 12.336 49.117 13.027\n"
                                       " c 49.117 17.332 l 49.117 17.609 49.129 17.855 49.148 18.074 c 49.176 18.293\n"
                                       " 49.227 18.477 49.289 18.633 c 49.363 18.777 49.461 18.891 49.586 18.973\n"
                                       " c 49.719 19.047 49.883 19.082 50.09 19.082 c 50.324 19.082 50.547 19.059\n"
                                       " 50.766 19.016 c 50.766 20.676 l 50.582 20.719 50.418 20.758 50.273 20.797\n"
                                       " c 50.129 20.832 49.98 20.863 49.836 20.883 c 49.691 20.906 49.535 20.922\n"
                                       " 49.367 20.938 c 49.207 20.953 49.016 20.961 48.801 20.961 c 48.027 20.961\n"
                                       " 47.457 20.773 47.086 20.395 c 46.723 20.016 46.504 19.457 46.43 18.723 \n"
                                       "c 46.375 18.719 l 45.969 19.453 45.441 20.027 44.801 20.434 c 44.168 20.84\n"
                                       " 43.395 21.047 42.484 21.047 c 46.059 15.355 m 44.484 15.379 l 44.156 15.395\n"
                                       " 43.844 15.422 43.543 15.465 c 43.25 15.5 42.992 15.586 42.766 15.715 c \n"
                                       "42.547 15.84 42.371 16.02 42.242 16.262 c 42.109 16.504 42.047 16.828 42.047\n"
                                       " 17.246 c 42.047 17.809 42.176 18.227 42.43 18.504 c 42.691 18.773 43.039\n"
                                       " 18.91 43.469 18.906 c 43.863 18.906 44.219 18.824 44.539 18.656 c 44.859\n"
                                       " 18.488 45.129 18.27 45.348 18 c 45.574 17.723 45.75 17.406 45.871 17.051\n"
                                       " c 45.996 16.695 46.059 16.328 46.059 15.957 c 46.059 15.355 l 55.816 11.082\n"
                                       " m 55.816 20.828 l 52.758 20.828 l 52.758 11.082 l 51.031 11.082 l 51.031\n"
                                       " 9.008 l 52.758 9.008 l 52.758 7.773 l 52.758 7.32 52.812 6.906 52.922 6.527\n"
                                       " c 53.031 6.141 53.219 5.805 53.48 5.523 c 53.742 5.238 54.098 5.016 54.539\n"
                                       " 4.855 c 54.984 4.695 55.535 4.613 56.199 4.613 c 56.551 4.613 56.891 4.633\n"
                                       " 57.227 4.668 c 57.57 4.703 57.875 4.746 58.145 4.789 c 58.145 6.766 l 58.012\n"
                                       " 6.738 57.863 6.715 57.695 6.699 c 57.535 6.676 57.387 6.668 57.246 6.668\n"
                                       " c 56.961 6.668 56.727 6.695 56.535 6.754 c 56.352 6.812 56.207 6.898 56.098\n"
                                       " 7.016 c 55.996 7.133 55.922 7.281 55.879 7.465 c 55.836 7.641 55.812 7.844\n"
                                       " 55.812 8.078 c 55.812 9.008 l 58.141 9.008 l 58.141 11.082 l 55.812 11.082\n"
                                       " l 62.707 21.027 m 61.805 21.027 61.109 20.785 60.621 20.297 c 60.133 19.801\n"
                                       " 59.891 19.055 59.891 18.059 c 59.891 11.086 l 58.395 11.086 l 58.395 9.012\n"
                                       " l 60.043 9.012 l 61.004 6.234 l 62.926 6.234 l 62.926 9.012 l 65.164 9.012\n"
                                       " l 65.164 11.086 l 62.926 11.086 l 62.926 17.227 l 62.926 17.801 63.035 \n"
                                       "18.227 63.254 18.504 c 63.473 18.773 63.812 18.91 64.27 18.906 c 64.457 \n"
                                       "18.906 64.629 18.891 64.781 18.863 c 64.934 18.836 65.105 18.797 65.293 \n"
                                       "18.754 c 65.293 20.656 l 64.914 20.781 64.512 20.871 64.09 20.93 c 63.668\n"
                                       " 20.996 63.203 21.027 62.703 21.027 c B Q\n"
                                       "Q q\n"
                                       "0.211765 0.211765 0.211765 rg /a1 gs\n"
                                       "1 1 1 RG 0.797243 w\n"
                                       "1 J\n"
                                       "1 j\n"
                                       "[] 0.0 d\n"
                                       "4 M q 1 0 0 1 0 0 cm\n"
                                       "3.398 0.398 m 1.77 0.398 0.398 1.77 0.398 3.398 c 0.398 23.086 l 0.398 \n"
                                       "24.715 1.77 26.086 3.398 26.086 c 76.359 26.086 l 77.988 26.086 79.359 24.715\n"
                                       " 79.359 23.086 c 79.359 3.398 l 79.359 1.77 77.988 0.398 76.359 0.398 c \n"
                                       "h\n"
                                       "3.867 3.844 m 75.914 3.844 l 75.914 22.617 l 3.867 22.617 l h\n"
                                       "3.867 3.844 m B Q\n"
                                       "Q\n";

static Dict *getDraftStampExtGStateDict(PDFDoc *doc)
{
    Dict *a0Dict = new Dict(doc->getXRef());
    a0Dict->add("CA", Object(0.588235));
    a0Dict->add("ca", Object(0.588235));

    Dict *a1Dict = new Dict(doc->getXRef());
    a1Dict->add("CA", Object(1));
    a1Dict->add("ca", Object(1));

    Dict *extGStateDict = new Dict(doc->getXRef());
    extGStateDict->add("a0", Object(a0Dict));
    extGStateDict->add("a1", Object(a1Dict));

    return extGStateDict;
}

#endif
