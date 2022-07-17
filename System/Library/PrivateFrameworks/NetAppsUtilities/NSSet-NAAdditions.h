//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@interface NSSet (NAAdditions)
+ (id)na_setWithSafeObject:(id)arg1;	// IMP=0x000000000001670c
- (id)na_dictionaryByBucketingObjectsUsingKeyGenerator:(CDUnknownBlockType)arg1;	// IMP=0x000000000001690d
- (id)na_dictionaryWithKeyGenerator:(CDUnknownBlockType)arg1;	// IMP=0x000000000001674a
- (id)na_setByDiffingWithSet:(id)arg1;	// IMP=0x000000000001663e
- (id)na_setByRemovingObjectsFromSet:(id)arg1;	// IMP=0x00000000000165d8
- (id)na_setByIntersectingWithSet:(id)arg1;	// IMP=0x0000000000016572
- (id)na_setByFlattening;	// IMP=0x0000000000016438
- (void)na_each:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016399
- (_Bool)na_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016282
- (_Bool)na_all:(CDUnknownBlockType)arg1;	// IMP=0x000000000001614c
- (_Bool)na_any:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016035
- (id)na_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015ec8
- (id)na_filter:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015e19
- (id)na_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015c57
- (id)na_map:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015b1a
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(CDUnknownBlockType)arg2;	// IMP=0x000000000001597e
- (_Bool)na_safeContainsObject:(id)arg1;	// IMP=0x0000000000015963
@end
