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

+ (id)logCategory;	// IMP=0x0000000000ac11ba
+ (_Bool)transportSupportsDevice:(id)arg1;	// IMP=0x0000000000ac10eb
+ (long long)priorityForMessage:(id)arg1;	// IMP=0x0000000000ac10af
+ (unsigned long long)restriction;	// IMP=0x0000000000ac10a4
- (void).cxx_destruct;	// IMP=0x0000000000ac1073
@property(readonly, nonatomic) HMDCompanionManager *companionManager; // @synthesize companionManager=_companionManager;
@property(readonly, nonatomic) HMDWatchManager *watchManager; // @synthesize watchManager=_watchManager;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000000ac0e3e
- (id)sendMessage:(id)arg1 fromHandle:(id)arg2 destination:(id)arg3 priority:(long long)arg4 timeout:(double)arg5 options:(unsigned long long)arg6 queueOneID:(id)arg7 error:(id *)arg8;	// IMP=0x0000000000ac0dbf
- (_Bool)isDeviceConnected:(id)arg1;	// IMP=0x0000000000ac0d29
- (_Bool)canSendMessage:(id)arg1;	// IMP=0x0000000000ac0a2c
- (int)transportType;	// IMP=0x0000000000ac0a21
- (id)watchDeviceForDevice:(id)arg1;	// IMP=0x0000000000ac0746
- (id)deviceForHandle:(id)arg1;	// IMP=0x0000000000ac06e0
- (id)deviceForSenderContext:(id)arg1;	// IMP=0x0000000000ac067e
- (id)remoteMessageFromMessage:(id)arg1;	// IMP=0x0000000000ac0406
- (long long)qualityOfService;	// IMP=0x0000000000ac03fb
- (_Bool)isSecure;	// IMP=0x0000000000ac03f3
- (id)initWithAccountRegistry:(id)arg1;	// IMP=0x0000000000ac01c1

@end

