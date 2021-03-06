//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSUUID;

@interface HMDNotificationRegistryMediaPropertiesRequest
{
    NSUUID *_mediaProfileUUID;	// 32 = 0x20
    NSMutableSet *_mediaProperties;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000007387e6
@property(retain) NSMutableSet *mediaProperties; // @synthesize mediaProperties=_mediaProperties;
@property(readonly, copy) NSUUID *mediaProfileUUID; // @synthesize mediaProfileUUID=_mediaProfileUUID;
- (id)attributeDescriptions;	// IMP=0x00000000007385e9
- (id)initWithEnable:(_Bool)arg1 userID:(id)arg2 mediaProfileUUID:(id)arg3;	// IMP=0x00000000007384e2

@end

