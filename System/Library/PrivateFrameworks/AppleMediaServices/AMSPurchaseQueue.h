//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>
#import <AppleMediaServices/AMSPurchaseDelegate-Protocol.h>

@class AMSPurchaseQueueConfiguration, AMSURLSession, NSLock, NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface AMSPurchaseQueue : NSObject <AMSPurchaseDelegate, AMSBagConsumer>
{
    AMSURLSession *_session;	// 8 = 0x8
    _Bool _isSuspeneded;	// 16 = 0x10
    NSMutableArray *_batches;	// 24 = 0x18
    AMSPurchaseQueueConfiguration *_config;	// 32 = 0x20
    NSMutableSet *_preAuthenticatedDSIDs;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    NSLock *_lock;	// 56 = 0x38
}

+ (id)bagKeySet;	// IMP=0x00000000001e7b36
+ (id)createBagForSubProfile;	// IMP=0x00000000001e61b7
+ (id)bagSubProfileVersion;	// IMP=0x00000000001e619e
+ (id)bagSubProfile;	// IMP=0x00000000001e6185
- (void).cxx_destruct;	// IMP=0x00000000001e7be8
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool isSuspeneded; // @synthesize isSuspeneded=_isSuspeneded;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSMutableSet *preAuthenticatedDSIDs; // @synthesize preAuthenticatedDSIDs=_preAuthenticatedDSIDs;
@property(retain, nonatomic) AMSPurchaseQueueConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) NSMutableArray *batches; // @synthesize batches=_batches;
- (void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e79b7
- (void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e7838
- (void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e76b9
- (void)_processPurchase:(id)arg1;	// IMP=0x00000000001e6bd4
- (id)_performPreauthenticateForPurchaseTask:(id)arg1;	// IMP=0x00000000001e64fa
- (void)_handleNextPurchase;	// IMP=0x00000000001e61d0
- (void)setSuspended:(_Bool)arg1 logUUID:(id)arg2;	// IMP=0x00000000001e5e62
- (id)enquePurchases:(id)arg1;	// IMP=0x00000000001e5a25
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000001e596c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
