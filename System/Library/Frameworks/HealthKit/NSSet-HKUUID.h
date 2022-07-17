//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

#import <HealthKit/HKUUIDCollection-Protocol.h>

@class NSString;

@interface NSSet (HKUUID) <HKUUIDCollection>
+ (id)hk_typesForDictionaryMapping:(Class)arg1 to:(Class)arg2;	// IMP=0x0000000000182914
+ (id)hk_typesForSetOf:(Class)arg1;	// IMP=0x00000000001828dc
+ (id)hk_typesForArrayOf:(Class)arg1;	// IMP=0x00000000001828a0
+ (id)hk_setByUnioningSet:(id)arg1 otherSet:(id)arg2;	// IMP=0x0000000000181bb3
- (id)hk_dataForAllUUIDs;	// IMP=0x0000000000066b32
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066b22
- (_Bool)hk_allObjectsPassTestWithError:(id *)arg1 test:(CDUnknownBlockType)arg2;	// IMP=0x00000000001826c2
- (_Bool)hk_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000182588
- (id)hk_mapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x0000000000182318
- (id)hk_anyObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000001821c2
- (id)hk_firstSortedObjectWithComparison:(CDUnknownBlockType)arg1;	// IMP=0x0000000000182037
- (id)hk_intersection:(id)arg1;	// IMP=0x0000000000181fd1
- (id)hk_minus:(id)arg1;	// IMP=0x0000000000181f6b
- (id)hk_filter:(CDUnknownBlockType)arg1;	// IMP=0x0000000000181e87
- (id)hk_map:(CDUnknownBlockType)arg1;	// IMP=0x0000000000181c5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
