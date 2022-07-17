//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockRegistrationLockSession
{
    NSData *_requestData;	// 8 = 0x8
    long long _state;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000021bb03
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
- (void)transport:(id)arg1 didReceiveMessageACKForIdentifier:(id)arg2;	// IMP=0x001000000021bab6
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x001000000021b912
- (void)handleFinalize:(id)arg1;	// IMP=0x001000000021b46f
- (void)handleInitialResponse:(id)arg1;	// IMP=0x001000000021ae3a
- (void)sendInitialRequest;	// IMP=0x001000000021abec
- (void)onQueue_start;	// IMP=0x001000000021ab2b
- (void)start;	// IMP=0x001000000021aaa4
- (id)initWithDevice:(id)arg1 sessionID:(id)arg2;	// IMP=0x001000000021aa61

@end
