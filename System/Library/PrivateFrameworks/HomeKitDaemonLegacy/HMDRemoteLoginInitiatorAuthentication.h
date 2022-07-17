//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HMDRemoteLoginInitiatorAuthenticationDelegate;

@interface HMDRemoteLoginInitiatorAuthentication
{
    id <HMDRemoteLoginInitiatorAuthenticationDelegate> _delegate;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0000000000a347a0
- (void).cxx_destruct;	// IMP=0x0000000000a3478f
@property(readonly, nonatomic) __weak id <HMDRemoteLoginInitiatorAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleAuthenticationResponse:(id)arg1 error:(id)arg2;	// IMP=0x0000000000a345c8
- (int)loginType;	// IMP=0x0000000000a34520
- (void)authenticate;	// IMP=0x0000000000a34478
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5;	// IMP=0x0000000000a343ea

@end
