//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMRemoteLoginMessageProtocol-Protocol.h>

@class ACAccount, NSDictionary, NSString;

@interface HMDRemoteLoginAuthenticationResponse <HMRemoteLoginMessageProtocol>
{
    ACAccount *_loggedInAccount;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x0000000000387dca
+ (id)messageName;	// IMP=0x0000000000387dbd
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000387db5
+ (id)objWithMessage:(id)arg1;	// IMP=0x0000000000387c1e
+ (id)objWithDict:(id)arg1;	// IMP=0x0000000000387aa9
- (void).cxx_destruct;	// IMP=0x0000000000387a96
@property(retain, nonatomic) ACAccount *loggedInAccount; // @synthesize loggedInAccount=_loggedInAccount;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003879d6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003878f1
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

