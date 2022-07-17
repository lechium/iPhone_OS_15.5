//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HAPEncryptedSession-Protocol.h>
#import <CoreHAP/HMFLogging-Protocol.h>

@class HAPSecuritySessionEncryption, NSData, NSDate, NSDictionary, NSObject, NSString;
@protocol HAPSecuritySessionDelegate, HMFLocking, OS_dispatch_queue;

@interface HAPSecuritySession : HMFObject <HMFLogging, HAPEncryptedSession>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    unsigned long long _resumeSessionID;	// 24 = 0x18
    NSData *_broadcastKey;	// 32 = 0x20
    NSDictionary *_additionalDerivedKeys;	// 40 = 0x28
    NSDate *_sessionStartTime;	// 48 = 0x30
    id <HAPSecuritySessionDelegate> _delegate;	// 56 = 0x38
    unsigned long long _role;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    struct PairingSessionPrivate *_pairingSession;	// 80 = 0x50
    HAPSecuritySessionEncryption *_encryption;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x000000000006000c
- (void).cxx_destruct;	// IMP=0x000000000005ea11
@property(retain, nonatomic) HAPSecuritySessionEncryption *encryption; // @synthesize encryption=_encryption;
@property(nonatomic) struct PairingSessionPrivate *pairingSession; // @synthesize pairingSession=_pairingSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long role; // @synthesize role=_role;
@property(readonly) __weak id <HAPSecuritySessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSDate *sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
- (id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005e664
- (id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005e499
- (void)_closeWithError:(id)arg1;	// IMP=0x000000000005e32f
- (void)closeWithError:(id)arg1;	// IMP=0x000000000005e27e
- (void)close;	// IMP=0x000000000005e20d
- (void)_notifyOpened;	// IMP=0x000000000005e170
- (void)_notifyOpening;	// IMP=0x000000000005e0d3
- (void)reallyOpen;	// IMP=0x000000000005e062
- (void)open;	// IMP=0x000000000005dea3
- (void)_handleSetupExchangeComplete;	// IMP=0x000000000005d561
- (id)_broadcastInfo;	// IMP=0x000000000005d53c
- (id)_outputInfo;	// IMP=0x000000000005d4d3
- (id)_inputInfo;	// IMP=0x000000000005d46a
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;	// IMP=0x000000000005d38e
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;	// IMP=0x000000000005d2b2
- (void)_initiateClientSessionSetupExchange;	// IMP=0x000000000005d1c6
- (id)_handlePeerPairingIdentityRequestWithIdentifier:(id)arg1 status:(int *)arg2;	// IMP=0x000000000005ce99
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)arg1;	// IMP=0x000000000005cba8
- (_Bool)_initializeSetupSession:(unsigned long long)arg1;	// IMP=0x000000000005c918
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, getter=isOpening) _Bool opening;
@property(readonly, getter=isOpen) _Bool open;
- (void)setResumeSessionID:(unsigned long long)arg1;	// IMP=0x000000000005c67a
@property(readonly, nonatomic) unsigned long long resumeSessionID; // @synthesize resumeSessionID=_resumeSessionID;
- (void)setAdditionalDerivedKeys:(id)arg1;	// IMP=0x000000000005c4b6
@property(readonly) NSDictionary *additionalDerivedKeys; // @synthesize additionalDerivedKeys=_additionalDerivedKeys;
- (void)setBroadcastKey:(id)arg1;	// IMP=0x000000000005c2bf
@property(readonly) NSData *broadcastKey; // @synthesize broadcastKey=_broadcastKey;
@property unsigned long long state; // @synthesize state=_state;
- (void)dealloc;	// IMP=0x000000000005bf4d
- (id)initWithRole:(unsigned long long)arg1 resumeSessionID:(unsigned long long)arg2 delegate:(id)arg3;	// IMP=0x000000000005bd26

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
