//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDSPSyncedDefaultsVersionInfo, NSArray, NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface HDSPSyncedDefaultsConfiguration : NSObject
{
    NSDictionary *_keySetMap;	// 8 = 0x8
    HDSPSyncedDefaultsVersionInfo *_versionInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000450a4
@property(readonly, nonatomic) HDSPSyncedDefaultsVersionInfo *versionInfo; // @synthesize versionInfo=_versionInfo;
- (id)filteredKeySetsWithKeysToSync:(id)arg1;	// IMP=0x0000000000044e03
- (id)keySetForIdentifier:(id)arg1;	// IMP=0x0000000000044ded
- (id)_keySetForKey:(id)arg1;	// IMP=0x0000000000044cc6
- (_Bool)shouldSyncKey:(id)arg1;	// IMP=0x0000000000044c4f
- (_Bool)shouldPersistKey:(id)arg1;	// IMP=0x0000000000044bd8
@property(readonly, nonatomic) NSDictionary *allPerGizmoDefaultValues;
@property(readonly, nonatomic) NSSet *allPerGizmoKeys;
@property(readonly, nonatomic) NSSet *allKeysToSync;
@property(readonly, nonatomic) NSSet *allKeysToPersist;
- (id)_accumulateKeysWithBlock:(CDUnknownBlockType)arg1 includeVersionInfo:(_Bool)arg2;	// IMP=0x0000000000044784
@property(readonly, nonatomic) NSArray *keySets;
- (id)_createKeySetMapForKeySets:(id)arg1;	// IMP=0x000000000004463d
- (id)initWithVersionInfo:(id)arg1 keySets:(id)arg2;	// IMP=0x0000000000044578

@end
