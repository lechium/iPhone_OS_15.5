//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HDSPSyncedDefaultsKeySet : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_modificationDateKey;	// 16 = 0x10
    NSSet *_keysToPersist;	// 24 = 0x18
    NSSet *_keysToSync;	// 32 = 0x20
    NSSet *_perGizmoKeys;	// 40 = 0x28
    NSDictionary *_perGizmoDefaultValues;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000045415
@property(readonly, nonatomic) NSDictionary *perGizmoDefaultValues; // @synthesize perGizmoDefaultValues=_perGizmoDefaultValues;
@property(readonly, nonatomic) NSSet *perGizmoKeys; // @synthesize perGizmoKeys=_perGizmoKeys;
@property(readonly, nonatomic) NSSet *keysToSync; // @synthesize keysToSync=_keysToSync;
@property(readonly, nonatomic) NSSet *keysToPersist; // @synthesize keysToPersist=_keysToPersist;
@property(readonly, copy, nonatomic) NSString *modificationDateKey; // @synthesize modificationDateKey=_modificationDateKey;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_allKeysToSync;	// IMP=0x00000000000453bc
- (id)_allKeysToPersist;	// IMP=0x000000000004539f
- (id)initWithIdentifier:(id)arg1 modficationDateKey:(id)arg2 keysToPersist:(id)arg3 keysToSync:(id)arg4 perGizmoKeys:(id)arg5 perGizmoDefaultValues:(id)arg6;	// IMP=0x0000000000045259
- (id)initWithIdentifier:(id)arg1 modficationDateKey:(id)arg2 keysToPersist:(id)arg3 keysToSync:(id)arg4;	// IMP=0x0000000000045179

@end

