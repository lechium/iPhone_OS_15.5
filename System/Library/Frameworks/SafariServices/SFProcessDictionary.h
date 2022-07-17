//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFProcessDictionary : NSObject
{
    NSMutableDictionary *_pidToBundleIdentifierMap;	// 8 = 0x8
    NSMutableSet *_pidsPendingTermination;	// 16 = 0x10
    NSMutableArray *_recentlyReferencedPIDs;	// 24 = 0x18
    NSCountedSet *_references;	// 32 = 0x20
    BKSApplicationStateMonitor *_stateMonitor;	// 40 = 0x28
    NSMutableDictionary *_values;	// 48 = 0x30
    unsigned long long _cacheCapacity;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000f7762
@property(readonly, nonatomic) unsigned long long cacheCapacity; // @synthesize cacheCapacity=_cacheCapacity;
- (id)incrementReferenceForPID:(int)arg1 bundleIdentifier:(id)arg2 valueCreationBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f75a9
- (void)_removeUnreferencedObjectsIfNeeded;	// IMP=0x00000000000f71fd
- (void)decrementReferenceForPID:(int)arg1;	// IMP=0x00000000000f70e7
- (void)_removeValueForPID:(id)arg1;	// IMP=0x00000000000f7055
- (void)_handleProcessTermination:(int)arg1;	// IMP=0x00000000000f6ec1
- (void)_handleApplicationStateUpdate:(id)arg1;	// IMP=0x00000000000f6de1
- (void)_updateInterestedApplications;	// IMP=0x00000000000f6cb6
- (void)dealloc;	// IMP=0x00000000000f6c74
- (id)init;	// IMP=0x00000000000f69cf
- (id)initWithCacheCapacity:(unsigned long long)arg1;	// IMP=0x00000000000f69ae

@end
