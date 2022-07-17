//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableIndexSet, NSString, SSXPCConnection;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface XPCClient : NSObject
{
    NSString *_clientIdentifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSDictionary *_entitlements;	// 24 = 0x18
    _Bool _legacyEntitlements;	// 32 = 0x20
    SSXPCConnection *_outputConnection;	// 40 = 0x28
    BOOL _appleSigned;	// 48 = 0x30
    unsigned int _applicationState;	// 52 = 0x34
    NSData *_auditTokenData;	// 56 = 0x38
    NSArray *_backgroundModes;	// 64 = 0x40
    NSMutableDictionary *_backgroundTasks;	// 72 = 0x48
    long long _clientType;	// 80 = 0x50
    NSString *_clientVersion;	// 88 = 0x58
    NSMutableIndexSet *_inflightMessages;	// 96 = 0x60
    NSObject<OS_xpc_object> *_inputConnection;	// 104 = 0x68
    BOOL _isNewsstandApp;	// 112 = 0x70
    BOOL _isBetaApp;	// 113 = 0x71
    BOOL _isAdHocCodeSigned;	// 114 = 0x72
    int _pid;	// 116 = 0x74
    id _stateChangeObserver;	// 120 = 0x78
    NSString *_userAgent;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000000b533b
@property(readonly) NSData *auditTokenData; // @synthesize auditTokenData=_auditTokenData;
- (_Bool)_isAdHocCodeSigned;	// IMP=0x00100000000b530f
- (_Bool)_isBetaApp;	// IMP=0x00100000000b52f7
- (_Bool)_isNewsstandApp;	// IMP=0x00100000000b5258
- (void)_invalidateBackgroundTaskAssertion:(id)arg1;	// IMP=0x00100000000b4e9c
- (void)_handleOutputConnectionDisconnect;	// IMP=0x00100000000b4d70
@property(readonly, nonatomic) long long _clientType;
@property(readonly, nonatomic) unsigned int _applicationState;
- (id)_applicationBackgroundModes;	// IMP=0x00100000000b4b17
- (void)_applicationStateChanged:(id)arg1;	// IMP=0x00100000000b4718
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b4690
- (unsigned long long)hash;	// IMP=0x00100000000b467a
- (id)description;	// IMP=0x00100000000b45f4
- (id)valueForEntitlement:(id)arg1;	// IMP=0x00100000000b45de
@property(readonly) NSString *userAgent;
- (void)setOutputConnectionWithConnection:(id)arg1;	// IMP=0x00100000000b43fb
- (void)sendCoalescedMessageWithIdentifier:(unsigned long long)arg1;	// IMP=0x00100000000b423d
@property(readonly) int processIdentifier;
@property(readonly) SSXPCConnection *outputConnection;
- (void)loadSpringBoardStateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b403d
@property(readonly, getter=isAdHocCodeSigned) _Bool adHocCodeSigned;
@property(readonly, getter=isBetaApp) _Bool betaApp;
@property(readonly, getter=isNewsstandApp) _Bool newsstandApp;
@property(readonly, getter=isAppleSigned) _Bool appleSigned;
@property(readonly) _Bool hasEntitlements;
- (void)endBackgroundTaskWithIdentifier:(id)arg1;	// IMP=0x00100000000b3a92
- (id)copyInputConnection;	// IMP=0x00100000000b39bf
- (id)copyApplicationBackgroundModes;	// IMP=0x00100000000b38a7
@property(readonly) long long clientType;
@property(readonly) NSString *clientIdentifierHeader;
@property(readonly) NSString *clientVersion;
@property(readonly) NSString *clientIdentifier;
@property(readonly) _Bool canReceiveMessages;
- (id)beginBackgroundTaskWithReason:(unsigned int)arg1 expirationBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b3187
@property(readonly) unsigned int applicationState;
- (void)dealloc;	// IMP=0x00100000000b2e1a
- (id)initWithApplicationIdentifier:(id)arg1 isAppleSigned:(_Bool)arg2;	// IMP=0x00100000000b2d94
- (id)initWithInputConnection:(id)arg1;	// IMP=0x00100000000b2820
- (id)init;	// IMP=0x00100000000b280c
- (id)_initCommon;	// IMP=0x00100000000b279f

@end
