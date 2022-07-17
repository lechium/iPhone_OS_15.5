//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUPairingSession, SFService;

__attribute__((visibility("hidden")))
@interface SFServiceSession
{
    CUPairingSession *_pairSetupSession;	// 176 = 0xb0
    unsigned int _pairSetupXID;	// 184 = 0xb8
    CUPairingSession *_pairVerifySession;	// 192 = 0xc0
    unsigned long long _sendLastTicks;	// 200 = 0xc8
    SFService *_service;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000010803a
@property(retain, nonatomic) SFService *service; // @synthesize service=_service;
@property(nonatomic) unsigned long long sendLastTicks; // @synthesize sendLastTicks=_sendLastTicks;
- (int)_pairVerifyCompleted:(int)arg1;	// IMP=0x0000000000107d87
- (void)pairVerify:(id)arg1 start:(_Bool)arg2;	// IMP=0x00000000001075b3
- (void)tryPIN:(id)arg1;	// IMP=0x0000000000107596
- (int)_pairSetupCompleted:(int)arg1;	// IMP=0x000000000010732a
- (void)pairSetup:(id)arg1 start:(_Bool)arg2;	// IMP=0x000000000010677e
- (void)pairSetupWithFlags:(unsigned int)arg1;	// IMP=0x0000000000105e0d
- (id)pairingDeriveKeyForIdentifier:(id)arg1 keyLength:(unsigned long long)arg2;	// IMP=0x0000000000105c1b
- (_Bool)pairingContainsACL:(id)arg1;	// IMP=0x0000000000105b58
- (void)sessionReceivedFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x0000000000105a66
- (void)_sendWithFlags:(unsigned int)arg1 object:(id)arg2;	// IMP=0x00000000001059ee
- (void)sendWithFlags:(unsigned int)arg1 object:(id)arg2;	// IMP=0x000000000010592e
- (void)_sendRequestWithFlags:(unsigned int)arg1 object:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010574e
- (void)sendRequestWithFlags:(unsigned int)arg1 object:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010565f
- (void)_sendFrameType:(unsigned char)arg1 unencryptedObject:(id)arg2;	// IMP=0x00000000001055f4
- (void)_sendFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x0000000000105589
- (void)sendFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x00000000001054c8
- (void)sendEncryptedObject:(id)arg1;	// IMP=0x00000000001050d0
- (void)receivedStartRequest:(id)arg1;	// IMP=0x0000000000104e2e
- (void)_receivedResponseID:(id)arg1 object:(id)arg2 flags:(unsigned int)arg3;	// IMP=0x0000000000104aae
- (void)_receivedRequestID:(id)arg1 object:(id)arg2 flags:(unsigned int)arg3;	// IMP=0x00000000001046f2
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x0000000000104540
- (void)receivedUnencryptedData:(id)arg1 type:(unsigned char)arg2;	// IMP=0x000000000010423b
- (void)receivedEncryptedData:(id)arg1 type:(unsigned char)arg2;	// IMP=0x0000000000103c95
- (void)_hearbeatTimer;	// IMP=0x0000000000103a34
- (void)invalidate;	// IMP=0x000000000010369e
- (void)activate;	// IMP=0x00000000001034b4
- (void)clearEncryptionInfo;	// IMP=0x0000000000103402
- (int)setEncryptionReadKey:(const char *)arg1 readKeyLen:(unsigned long long)arg2 writeKey:(const char *)arg3 writeKeyLen:(unsigned long long)arg4;	// IMP=0x000000000010326d
- (void)dealloc;	// IMP=0x0000000000103210
- (id)init;	// IMP=0x00000000001031b2

@end
