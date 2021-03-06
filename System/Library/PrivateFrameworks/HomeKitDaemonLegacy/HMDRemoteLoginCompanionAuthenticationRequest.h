//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMRemoteLoginMessageProtocol-Protocol.h>

@class ACAccount, AKDevice, NSDictionary, NSString;

@interface HMDRemoteLoginCompanionAuthenticationRequest <HMRemoteLoginMessageProtocol>
{
    ACAccount *_account;	// 16 = 0x10
    AKDevice *_companionDevice;	// 24 = 0x18
}

+ (id)xpcMessageName;	// IMP=0x0000000000348fae
+ (id)messageName;	// IMP=0x0000000000348fa1
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000348f99
+ (id)objWithMessage:(id)arg1;	// IMP=0x0000000000348e02
+ (id)objWithDict:(id)arg1;	// IMP=0x0000000000348c8d
- (void).cxx_destruct;	// IMP=0x0000000000348c5c
@property(retain, nonatomic) AKDevice *companionDevice; // @synthesize companionDevice=_companionDevice;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000348b23
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000348a00
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

