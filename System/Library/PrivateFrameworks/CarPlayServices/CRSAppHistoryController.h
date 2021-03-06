//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlayServices/BSInvalidatable-Protocol.h>
#import <CarPlayServices/CRSAppHistoryServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSString;
@protocol OS_dispatch_queue;

@interface CRSAppHistoryController : NSObject <CRSAppHistoryServerToClientInterface, BSInvalidatable>
{
    BSServiceConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
}

+ (id)availableFeatureKeys;	// IMP=0x0000000000009dad
- (void).cxx_destruct;	// IMP=0x000000000000a255
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
- (void)invalidate;	// IMP=0x000000000000a173
- (void)fetchSessionFeatureKeysWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a037
- (void)setSessionFeatureKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009e94
- (void)fetchSessionEchoContextsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009c71
- (void)fetchSessionUIContextsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009b35
- (void)fetchUIContextsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000099e2
- (id)init;	// IMP=0x0000000000009474

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

