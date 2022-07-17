//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMRemoteLoginMessageProtocol-Protocol.h>

@class ACAccount, AKDevice, NSDictionary, NSString;

@interface HMDRemoteLoginCompanionAuthenticationRequest <HMRemoteLoginMessageProtocol>
{
    ACAccount *_account;	// 16 = 0x10
    AKDevice *_companionDevice;	// 24 = 0x18
}

+ (id)xpcMessageName;	// IMP=0x0000000000386eaa
+ (id)messageName;	// IMP=0x0000000000386e9d
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000386e95
+ (id)objWithMessage:(id)arg1;	// IMP=0x0000000000386cfe
+ (id)objWithDict:(id)arg1;	// IMP=0x0000000000386b89
- (void).cxx_destruct;	// IMP=0x0000000000386b58
@property(retain, nonatomic) AKDevice *companionDevice; // @synthesize companionDevice=_companionDevice;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000386a1f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003868fc
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
