//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface HMDCompositeSettingsOwnerToZoneManagerRegistry : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMapTable *_settingOwnerToZoneManagerTable;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000093f205
- (void)removeZoneWithZoneName:(id)arg1 uuid:(id)arg2 workQueue:(id)arg3;	// IMP=0x000000000093f01e
- (void)createZoneManagerIfNotExistForUUID:(id)arg1 workQueue:(id)arg2 zoneName:(id)arg3;	// IMP=0x000000000093eea5
- (id)zoneManagerForUUID:(id)arg1;	// IMP=0x000000000093edd3
- (id)init;	// IMP=0x000000000093ed66

@end
