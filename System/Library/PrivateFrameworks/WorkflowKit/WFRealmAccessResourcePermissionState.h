//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, RLMLinkingObjects;

@interface WFRealmAccessResourcePermissionState
{
    NSString *_identifier;	// 24 = 0x18
    NSData *_data;	// 32 = 0x20
    RLMLinkingObjects *_trustedResources;	// 40 = 0x28
}

+ (id)linkingObjectsProperties;	// IMP=0x00000000001b140f
+ (id)requiredProperties;	// IMP=0x00000000001b139d
- (void).cxx_destruct;	// IMP=0x00000000001b1534
@property(readonly) RLMLinkingObjects *trustedResources; // @synthesize trustedResources=_trustedResources;
@property(copy) NSData *data; // @synthesize data=_data;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;

@end

