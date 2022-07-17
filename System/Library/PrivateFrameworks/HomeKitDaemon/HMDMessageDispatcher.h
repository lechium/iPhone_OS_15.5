//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageDispatcher.h>

@class HMDHomeManager, HMDMessageFilterChain, HMDSecureRemoteMessageFilter, HMDSecureRemoteMessageTransport, HMDXPCMessageTransport, NSMutableDictionary;

@interface HMDMessageDispatcher : HMFMessageDispatcher
{
    HMDXPCMessageTransport *_XPCTransport;	// 8 = 0x8
    HMDSecureRemoteMessageTransport *_secureRemoteTransport;	// 16 = 0x10
    HMDMessageFilterChain *_messageFilterChain;	// 24 = 0x18
    NSMutableDictionary *_remoteGateways;	// 32 = 0x20
    HMDSecureRemoteMessageFilter *_secureRemoteMessageFilter;	// 40 = 0x28
    HMDHomeManager *_homeManager;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0000000000589aa3
+ (id)defaultDispatcher;	// IMP=0x0000000000589a40
+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(_Bool)arg4 accountRegistry:(id)arg5;	// IMP=0x00000000005898aa
+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(_Bool)arg4;	// IMP=0x00000000005897dd
- (void).cxx_destruct;	// IMP=0x00000000005893ba
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMDSecureRemoteMessageFilter *secureRemoteMessageFilter; // @synthesize secureRemoteMessageFilter=_secureRemoteMessageFilter;
@property(retain, nonatomic) NSMutableDictionary *remoteGateways; // @synthesize remoteGateways=_remoteGateways;
@property(readonly, nonatomic) HMDMessageFilterChain *messageFilterChain; // @synthesize messageFilterChain=_messageFilterChain;
@property(readonly, nonatomic) HMDSecureRemoteMessageTransport *secureRemoteTransport; // @synthesize secureRemoteTransport=_secureRemoteTransport;
@property(readonly, nonatomic) HMDXPCMessageTransport *XPCTransport; // @synthesize XPCTransport=_XPCTransport;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000058923a
- (void)dispatchMessage:(id)arg1;	// IMP=0x0000000000588e92
- (void)configureHTTPTransport:(id)arg1;	// IMP=0x0000000000588de1
- (void)disableMessageServer;	// IMP=0x0000000000588da2
- (void)enableMessageServer;	// IMP=0x0000000000588d60
- (id)httpMessageTransport;	// IMP=0x0000000000588bf4
- (void)configureHomeManager:(id)arg1;	// IMP=0x0000000000588b43
- (void)reset;	// IMP=0x0000000000588b06
- (id)filterClasses;	// IMP=0x00000000005889c8
- (void)dealloc;	// IMP=0x0000000000588953
- (id)initWithXPCTransport:(id)arg1 secureRemoteTransport:(id)arg2 messageFilterChain:(id)arg3;	// IMP=0x0000000000588796
- (id)prepareAnswerForRequestedCapabilities:(id)arg1;	// IMP=0x000000000058b4c2
- (void)removeHome:(id)arg1;	// IMP=0x000000000058b450
- (void)updateHome:(id)arg1 configurationVersion:(long long)arg2;	// IMP=0x000000000058b3d8
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000058ac1a
- (id)remoteAccessDeviceForHome:(id)arg1;	// IMP=0x000000000058abca
- (id)residentCommunicationHandlerForHome:(id)arg1;	// IMP=0x000000000058aa8b
- (void)_setRemoteAccessDevice:(id)arg1 forHome:(id)arg2 sendNotification:(_Bool)arg3;	// IMP=0x0000000000589fe0
- (void)setRemoteAccessDevice:(id)arg1 forHome:(id)arg2;	// IMP=0x0000000000589f04
- (void)setCompanionDevice:(id)arg1 forHome:(id)arg2;	// IMP=0x0000000000589e28
- (void)handleSecureSessionError:(id)arg1;	// IMP=0x0000000000589d77

@end
