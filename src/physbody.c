/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt).
 * https://decomp.me/scratch/zLgfx - all at objdiff 100% unless marked NONMATCHING. */
typedef struct PhysPair { int f0; float shapeA; float shapeB; float bodyA; float bodyB; } PhysPair;
typedef struct Vec4 { float x, y, z, w; } Vec4;
typedef struct PhysBody { char pad0[0x20]; Vec4 v20; Vec4 v30; Vec4 torque; Vec4 v50; Vec4 angVel; float gravityScale; char pad74[0x80 - 0x74]; Vec4 force; char pad90[0xb0 - 0x90]; Vec4 velocity; float material; char padc4[0xe0 - 0xc4]; int flags; int groupMask; int collideMask; } PhysBody;
void Vec3_AddInPlace(Vec4 *a, Vec4 *b);

void PhysPair_SetBodyA(PhysPair *p, float v) { p->bodyA = v; }
void PhysPair_SetBodyB(PhysPair *p, float v) { p->bodyB = v; }
float PhysPair_GetBodyA(PhysPair *p) { return p->bodyA; }
float PhysPair_GetBodyB(PhysPair *p) { return p->bodyB; }
void PhysPair_SetShapeA(PhysPair *p, float v) { p->shapeA = v; }
void PhysPair_SetShapeB(PhysPair *p, float v) { p->shapeB = v; }
void Vec3_AddInPlace_Wrap(PhysBody *b, Vec4 *v) { Vec3_AddInPlace(&b->v20, v); }
void PhysBody_SetMaterial(PhysBody *b, float v) { b->material = v; }
/* NONMATCHING (0%): the game copies the vector with one lq/sq (a 128-bit type); a float struct copy gives four lwc1/swc1. */
void PhysBody_SetVelocity(PhysBody *b, Vec4 *v) { b->velocity = *v; }
void PhysBody_ClearCollideMask(PhysBody *b, int m) { b->collideMask &= ~m; }
void PhysBody_SetCollideMask(PhysBody *b, int m) { b->collideMask |= m; }
void PhysBody_ClearGroupMask(PhysBody *b, int m) { b->groupMask &= ~m; }
void PhysBody_SetGroupMask(PhysBody *b, int m) { b->groupMask |= m; }
void PhysBody_ClearFlags(PhysBody *b, int m) { b->flags &= ~m; }
Vec4 *PhysBody_GetForce(PhysBody *b) { return &b->force; }
void PhysBody_AddForce(PhysBody *b, Vec4 *v) { Vec3_AddInPlace(&b->force, v); }
Vec4 *PhysBody_GetTorque(PhysBody *b) { return &b->torque; }
void PhysBody_AddTorque(PhysBody *b, Vec4 *v) { Vec3_AddInPlace(&b->torque, v); }
void PhysBody_SetGravityScale(PhysBody *b, float v) { b->gravityScale = v; }
Vec4 *PhysBody_GetAngularVelocity(PhysBody *b) { return &b->angVel; }
