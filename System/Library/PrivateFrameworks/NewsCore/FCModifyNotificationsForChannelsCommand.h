//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface FCModifyNotificationsForChannelsCommand
{
    int _deviceDigestMode;	// 8 = 0x8
    NSArray *_channelIDsToAdd;	// 16 = 0x10
    NSArray *_paidChannelIDsToAdd;	// 24 = 0x18
    NSArray *_channelIDsToRemove;	// 32 = 0x20
    NSString *_userID;	// 40 = 0x28
    NSString *_deviceToken;	// 48 = 0x30
    NSString *_storefrontID;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bb4ee
- (void).cxx_destruct;	// IMP=0x00000000000bc7d8
@property(nonatomic) int deviceDigestMode; // @synthesize deviceDigestMode=_deviceDigestMode;
@property(copy, nonatomic) NSString *storefrontID; // @synthesize storefrontID=_storefrontID;
@property(copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSArray *channelIDsToRemove; // @synthesize channelIDsToRemove=_channelIDsToRemove;
@property(copy, nonatomic) NSArray *paidChannelIDsToAdd; // @synthesize paidChannelIDsToAdd=_paidChannelIDsToAdd;
@property(copy, nonatomic) NSArray *channelIDsToAdd; // @synthesize channelIDsToAdd=_channelIDsToAdd;
- (void)coalesceWithCommand:(id)arg1;	// IMP=0x00000000000bc263
- (_Bool)canCoalesceWithCommand:(id)arg1;	// IMP=0x00000000000bc218
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;	// IMP=0x00000000000bb4f6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bb34b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bb151
- (id)initWithChannelIDsToAdd:(id)arg1 paidChannelIDsToAdd:(id)arg2 channelIDsToRemove:(id)arg3 userID:(id)arg4 deviceToken:(id)arg5 storefrontID:(id)arg6 deviceDigestMode:(int)arg7;	// IMP=0x00000000000baf6a

@end
