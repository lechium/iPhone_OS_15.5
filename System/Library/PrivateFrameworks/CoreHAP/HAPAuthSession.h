//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HMFLogging-Protocol.h>

@class NSData, NSNumber, NSObject, NSString, NSUUID;
@protocol HAPAuthSessionDelegate, OS_dispatch_queue;

@interface HAPAuthSession : HMFObject <HMFLogging>
{
    unsigned char _currentTID;	// 8 = 0x8
    id <HAPAuthSessionDelegate> _delegate;	// 16 = 0x10
    long long _role;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    unsigned long long _currentState;	// 40 = 0x28
    NSNumber *_instanceId;	// 48 = 0x30
    NSData *_token1;	// 56 = 0x38
    NSData *_token2;	// 64 = 0x40
    NSUUID *_provisionUUID;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x0000000000004bce
- (void).cxx_destruct;	// IMP=0x0000000000004779
@property(retain, nonatomic) NSUUID *provisionUUID; // @synthesize provisionUUID=_provisionUUID;
@property(retain, nonatomic) NSData *token2; // @synthesize token2=_token2;
@property(retain, nonatomic) NSData *token1; // @synthesize token1=_token1;
@property(retain, nonatomic) NSNumber *instanceId; // @synthesize instanceId=_instanceId;
@property(nonatomic) unsigned char currentTID; // @synthesize currentTID=_currentTID;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) long long role; // @synthesize role=_role;
@property(readonly) __weak id <HAPAuthSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleTokenUpdateResponse:(id)arg1 withHeader:(_Bool)arg2;	// IMP=0x00000000000043ae
- (_Bool)getToken:(id *)arg1 uuid:(id *)arg2;	// IMP=0x00000000000041d9
- (void)_sendTokenUpdateRequest:(id)arg1;	// IMP=0x0000000000003eb0
- (void)sendTokenUpdateRequest:(id)arg1;	// IMP=0x0000000000003dff
- (void)_handleTokenResponse:(id)arg1 withHeader:(_Bool)arg2;	// IMP=0x0000000000003a6d
- (void)_sendTokenRequest;	// IMP=0x0000000000003734
- (void)continueAuthAfterValidation:(_Bool)arg1;	// IMP=0x00000000000036b8
- (void)_handleAuthExchangeData:(id)arg1 withHeader:(_Bool)arg2;	// IMP=0x0000000000003524
- (void)handleAuthExchangeData:(id)arg1 withHeader:(_Bool)arg2;	// IMP=0x000000000000346d
- (void)resetSession;	// IMP=0x00000000000033fc
- (void)_reportAuthFailure;	// IMP=0x000000000000324b
- (void)_resetSession;	// IMP=0x00000000000030cb
- (id)initWithRole:(long long)arg1 instanceId:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000002dfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
