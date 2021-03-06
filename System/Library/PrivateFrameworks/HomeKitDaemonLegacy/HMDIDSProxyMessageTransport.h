//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCompanionManager, HMDWatchManager;

@interface HMDIDSProxyMessageTransport
{
    HMDWatchManager *_watchManager;	// 16 = 0x10
    HMDCompanionManager *_companionManager;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000a0f84c
+ (_Bool)transportSupportsDevice:(id)arg1;	// IMP=0x0000000000a0f77d
+ (long long)priorityForMessage:(id)arg1;	// IMP=0x0000000000a0f741
+ (unsigned long long)restriction;	// IMP=0x0000000000a0f736
- (void).cxx_destruct;	// IMP=0x0000000000a0f705
@property(readonly, nonatomic) HMDCompanionManager *companionManager; // @synthesize companionManager=_companionManager;
@property(readonly, nonatomic) HMDWatchManager *watchManager; // @synthesize watchManager=_watchManager;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000000a0f4d0
- (id)sendMessage:(id)arg1 fromHandle:(id)arg2 destination:(id)arg3 priority:(long long)arg4 timeout:(double)arg5 options:(unsigned long long)arg6 queueOneID:(id)arg7 error:(id *)arg8;	// IMP=0x0000000000a0f451
- (_Bool)isDeviceConnected:(id)arg1;	// IMP=0x0000000000a0f3bb
- (_Bool)canSendMessage:(id)arg1;	// IMP=0x0000000000a0f0be
- (int)transportType;	// IMP=0x0000000000a0f0b3
- (id)watchDeviceForDevice:(id)arg1;	// IMP=0x0000000000a0edd8
- (id)deviceForHandle:(id)arg1;	// IMP=0x0000000000a0ed72
- (id)deviceForSenderContext:(id)arg1;	// IMP=0x0000000000a0ed10
- (id)remoteMessageFromMessage:(id)arg1;	// IMP=0x0000000000a0ea98
- (long long)qualityOfService;	// IMP=0x0000000000a0ea8d
- (_Bool)isSecure;	// IMP=0x0000000000a0ea85
- (id)initWithAccountRegistry:(id)arg1;	// IMP=0x0000000000a0e853

@end

