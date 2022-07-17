//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount;

@interface HMDRemoteLoginInitiatorCompanionAuthentication
{
    ACAccount *_account;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0000000000536197
- (void).cxx_destruct;	// IMP=0x00000000005360fc
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_authenticate;	// IMP=0x0000000000535c76
- (void)authenticate;	// IMP=0x0000000000535c05
- (int)loginType;	// IMP=0x0000000000535bfa
- (id)description;	// IMP=0x0000000000535b67
- (void)dealloc;	// IMP=0x0000000000535a77
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 account:(id)arg6;	// IMP=0x00000000005359e0

@end
