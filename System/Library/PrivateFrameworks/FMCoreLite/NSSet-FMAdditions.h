//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@interface NSSet (FMAdditions)
+ (id)fm_setWithSafeObject:(id)arg1;	// IMP=0x000000000000f393
- (id)fm_setByRemovingObjectsFromSet:(id)arg1;	// IMP=0x000000000000f32d
- (id)fm_setByIntersectingWithSet:(id)arg1;	// IMP=0x000000000000f2c7
- (id)fm_setByFlattening;	// IMP=0x000000000000f18d
- (void)fm_each:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f0ee
- (_Bool)fm_any:(CDUnknownBlockType)arg1;	// IMP=0x000000000000efd7
- (id)fm_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ee45
- (id)fm_filter:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ed96
- (id)fm_map:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ec59
@end

