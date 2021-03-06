#ifndef P0_TRACER_H
#define P0_TRACER_H

#include "structures.h"

bool getIntersection(prim_t &p, ray_t &r, double &t);

color_t getColor(int x, int y, scene_t &scene); // return pixel color, also calculates initial ray parameters

color_t trace(ray_t &ray, scene_t &scene, int depth, double currRefr); // traces a ray

vector_t getNormal(prim_t &p, point_t &intrPoint); // returns normal in intersection point

vector_t correctDir(vector_t &normal, vector_t &dir); // corrects the normal direction

#endif