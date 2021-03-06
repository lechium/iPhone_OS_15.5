//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSKnownKeysDictionary, PLManagedObject;

@interface PLObjectSnapshot : NSObject
{
    PLManagedObject *_managedObject;	// 8 = 0x8
    NSKnownKeysDictionary *_snapshotValues;	// 16 = 0x10
    struct __CFDictionary *_indexMaps;	// 24 = 0x18
}

+ (struct __CFDictionary *)_createIndexMapsSnapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2;	// IMP=0x00000000002c2e04
+ (id)snapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 useCommitedValues:(_Bool)arg3;	// IMP=0x00000000002c2802
- (void).cxx_destruct;	// IMP=0x00000000002c266e
@property(readonly, nonatomic) PLManagedObject *managedObject; // @synthesize managedObject=_managedObject;
- (void)setAssetsSnapshot:(id)arg1;	// IMP=0x00000000002c25a8
- (id)_allSnapshotValuesDescription;	// IMP=0x00000000002c24d9
- (id)_snapshotValueForProperty:(id)arg1;	// IMP=0x00000000002c2438
- (id)description;	// IMP=0x00000000002c2309
- (id)filteredIndexesForFilter:(id)arg1;	// IMP=0x00000000002c22b2
- (id)indexMapStateForDerivedObject:(id)arg1;	// IMP=0x00000000002c2288
- (_Bool)hasSnapshotValueForProperty:(id)arg1;	// IMP=0x00000000002c2255
- (id)snapshotValueForProperty:(id)arg1;	// IMP=0x00000000002c21e2
- (id)initWithManagedObject:(id)arg1 properties:(id)arg2 toOneRelationships:(id)arg3 indexMaps:(struct __CFDictionary *)arg4 useCommitedValues:(_Bool)arg5;	// IMP=0x00000000002c1ae0
- (void)dealloc;	// IMP=0x00000000002c1aa1
- (id)init;	// IMP=0x00000000002c1a93

@end

