//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDRemoteLoginCompanionAuthenticationRequest;

@interface HMDRemoteLoginReceiverCompanionAuthentication
{
    HMDRemoteLoginCompanionAuthenticationRequest *_request;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x000000000043ee02
- (void).cxx_destruct;	// IMP=0x000000000043ec37
@property(readonly, nonatomic) HMDRemoteLoginCompanionAuthenticationRequest *request; // @synthesize request=_request;
- (void)_authenticateAccount:(id)arg1 alreadyExists:(_Bool)arg2 withCompanionDevice:(id)arg3;	// IMP=0x000000000043e8a0
- (void)_authenticate;	// IMP=0x000000000043e793
- (void)authenticate;	// IMP=0x000000000043e722
- (id)description;	// IMP=0x000000000043e668
- (void)dealloc;	// IMP=0x000000000043e578
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6;	// IMP=0x000000000043e4e1

@end
