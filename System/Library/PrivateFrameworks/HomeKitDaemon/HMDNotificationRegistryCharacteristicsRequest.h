//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSUUID;

@interface HMDNotificationRegistryCharacteristicsRequest
{
    NSUUID *_accessoryUUID;	// 32 = 0x20
    NSMutableSet *_characteristicInstanceIDs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000007384b1
@property(retain) NSMutableSet *characteristicInstanceIDs; // @synthesize characteristicInstanceIDs=_characteristicInstanceIDs;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)attributeDescriptions;	// IMP=0x00000000007382b4
- (id)initWithEnable:(_Bool)arg1 userID:(id)arg2 accessoryUUID:(id)arg3;	// IMP=0x00000000007381ad

@end

