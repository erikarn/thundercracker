/* -*- mode: C; c-basic-offset: 4; intent-tabs-mode: nil -*-
 *
 * STIR -- Sifteo Tiled Image Reducer
 * M. Elizabeth Scott <beth@sifteo.com>
 *
 * Copyright <c> 2011 Sifteo, Inc. All rights reserved.
 */

/*
 * AUTOMATICALLY GENERATED by proof_html.py
 * Do not edit by hand!
 */

#include "proof.h"

const char *Stir::ProofWriter::header =
    "<!DOCTYPE html>\n"
    "<html>\n"
    "<head> \n"
    "  <script> \n"
    " \n"
    "     /*\n"
    "      * Define a tile pool (per-group)\n"
    "      */\n"
    "\n"
    "     function defineTiles(prefix, tiles) {\n"
    "       for (var i = 0; i < tiles.length; i++) {\n"
    "         var img = new Image(8, 8);\n"
    "         img.src = prefix + tiles[i];\n"
    "         tiles[i] = img;\n"
    "       }\n"
    "       return tiles;\n"
    "     }\n"
    "\n"
    "     /*\n"
    "      * Object for a single TileGrid, with some interactive features.\n"
    "      * Renders onto an HTML5 Canvas\n"
    "      */\n"
    "\n"
    "     allTileGrids = []\n"
    "\n"
    "     function TileGrid(pool, canvasId) {\n"
    "         allTileGrids.push(this);\n"
    "         this.pool = pool;\n"
    "         this.canvas = document.getElementById(canvasId);\n"
    "         this.ctx = this.canvas.getContext(\"2d\");\n"
    "         this.width = this.canvas.width / 8;\n"
    "         this.height = this.canvas.height / 8;\n"
    "     }\n"
    "\n"
    "     TileGrid.prototype.range = function(begin, end) {\n"
    "         this.tiles = [];\n"
    "         for (var i = begin; i < end; i++)\n"
    "             this.tiles[i - begin] = i;\n"
    "     }\n"
    "\n"
    "     TileGrid.prototype.array = function(a) {\n"
    "         this.tiles = a;\n"
    "     }\n"
    "\n"
    "     TileGrid.prototype.draw = function() {\n"
    "       var i = 0;\n"
    "\n"
    "       for (var y = 0; y < this.height; y++)\n"
    "         for (var x = 0; x < this.width; x++) {\n"
    "\n"
    "           this.ctx.drawImage(this.pool[this.tiles[i]], x*8, y*8);\n"
    "\n"
    "           i++;\n"
    "           if (i >= this.tiles.length)\n"
    "             return;\n"
    "         }\n"
    "     }\n"
    "\n"
    "     /*\n"
    "      * Draw all TileGrids after our images have loaded\n"
    "      */\n"
    "\n"
    "     function drawAllTileGrids() {\n"
    "       for (var i in allTileGrids)\n"
    "         allTileGrids[i].draw();\n"
    "     }\n"
    " \n"
    "  </script> \n"
    "  <style> \n"
    " \n"
    "    body { \n"
    "      color: #eee; \n"
    "      background: #222; \n"
    "      font-family: verdana, tahoma, helvetica, arial, sans-serif; \n"
    "      font-size: 12px; \n"
    "      margin: 10px 5px 50px 5px; \n"
    "    } \n"
    "  \n"
    "    h1 { \n"
    "      background: #fff; \n"
    "      color: #222; \n"
    "      font-size: 22px; \n"
    "      font-weight: normal; \n"
    "      padding: 10px; \n"
    "      margin: 0; \n"
    "    } \n"
    " \n"
    "    h2 { \n"
    "      color: #fff; \n"
    "      font-size: 16px; \n"
    "      font-weight: normal; \n"
    "      padding: 10px; \n"
    "      margin: 0; \n"
    "    } \n"
    " \n"
    "    p { \n"
    "      padding: 0 10px; \n"
    "    } \n"
    "\n"
    "    canvas {\n"
    "      padding: 0;\n"
    "      margin: 0;\n"
    "    }\n"
    " \n"
    "  </style> \n"
    "</head> \n"
    "<body onload=\"drawAllTileGrids()\"> \n"
    "\n";
