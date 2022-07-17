//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MDLVolumeGrid : NSObject
{
    struct unique_ptr<ModelIO::SCNOctree, std::default_delete<ModelIO::SCNOctree>> _octree;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000003a7ff1
- (void).cxx_destruct;	// IMP=0x00000000003a7fe1
- (unsigned long long *)trianglesIntersectingRayWithOrigin:(unsigned long long *)arg1 direction:count: /* Error: Ran out of types for this method. */;	// IMP=0x00000000003a7e66
- (id)meshWithStyle:(unsigned long long)arg1;	// IMP=0x00000000003a7e25
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorWidth:(float)arg3 exteriorWidth:(float)arg4 patchRadius:(float)arg5;	// IMP=0x00000000003a7e12
- (id)initWithAsset:(id)arg1 divisions:(int)arg2;	// IMP=0x00000000003a7d44
- (id)initWithObject:(id)arg1 divisions:(int)arg2;	// IMP=0x00000000003a7c76

@end
