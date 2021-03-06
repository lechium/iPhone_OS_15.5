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

+ (id)logCategory;	// IMP=0x000000000058ffd7
- (void).cxx_destruct;	// IMP=0x000000000058ff3c
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_authenticate;	// IMP=0x000000000058fab6
- (void)authenticate;	// IMP=0x000000000058fa45
- (int)loginType;	// IMP=0x000000000058fa3a
- (id)description;	// IMP=0x000000000058f9a7
- (void)dealloc;	// IMP=0x000000000058f8b7
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 account:(id)arg6;	// IMP=0x000000000058f820

@end

