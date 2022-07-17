//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKAccountInfo, CKContainer, CKKSCondition, CKKSNearFutureScheduler, MISSING_TYPE, NSError, NSMapTable, NSString, OTCliqueStatusWrapper, SOSAccountStatus;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKKSAccountStateTracker : NSObject
{
    _Bool _firstCKAccountFetch;	// 8 = 0x8
    _Bool _forceReload;	// 9 = 0x9
    NSString *_octagonPeerID;	// 16 = 0x10
    CKKSCondition *_finishedInitialDispatches;	// 24 = 0x18
    CKKSNearFutureScheduler *_fetchCKAccountStatusScheduler;	// 32 = 0x20
    CKAccountInfo *_currentCKAccountInfo;	// 40 = 0x28
    CKKSCondition *_ckAccountInfoInitialized;	// 48 = 0x30
    NSString *_ckdeviceID;	// 56 = 0x38
    NSError *_ckdeviceIDError;	// 64 = 0x40
    CKKSCondition *_ckdeviceIDInitialized;	// 72 = 0x48
    SOSAccountStatus *_currentCircleStatus;	// 80 = 0x50
    NSString *_accountCirclePeerID;	// 88 = 0x58
    MISSING_TYPE *_accountCirclePeerIDError;	// 96 = 0x60
    CKKSCondition *_accountCirclePeerIDInitialized;	// 104 = 0x68
    OTCliqueStatusWrapper *_octagonStatus;	// 112 = 0x70
    CKKSCondition *_octagonInformationInitialized;	// 120 = 0x78
    long long _hsa2iCloudAccountStatus;	// 128 = 0x80
    CKKSCondition *_hsa2iCloudAccountInitialized;	// 136 = 0x88
    Class _nsnotificationCenterClass;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_queue;	// 152 = 0x98
    NSMapTable *_ckChangeListeners;	// 160 = 0xa0
    CKContainer *_container;	// 168 = 0xa8
}

+ (id)stringFromAccountStatus:(long long)arg1;	// IMP=0x0020000000038d58
+ (id)getCircleStatus;	// IMP=0x0010000000038c34
+ (void)fetchCirclePeerID:(CDUnknownBlockType)arg1;	// IMP=0x0010000000038b95
- (void).cxx_destruct;	// IMP=0x0020000000036b5a
@property _Bool forceReload; // @synthesize forceReload=_forceReload;
@property _Bool firstCKAccountFetch; // @synthesize firstCKAccountFetch=_firstCKAccountFetch;
@property(retain) CKContainer *container; // @synthesize container=_container;
@property(retain) NSMapTable *ckChangeListeners; // @synthesize ckChangeListeners=_ckChangeListeners;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) Class nsnotificationCenterClass; // @synthesize nsnotificationCenterClass=_nsnotificationCenterClass;
@property(retain) CKKSCondition *hsa2iCloudAccountInitialized; // @synthesize hsa2iCloudAccountInitialized=_hsa2iCloudAccountInitialized;
@property long long hsa2iCloudAccountStatus; // @synthesize hsa2iCloudAccountStatus=_hsa2iCloudAccountStatus;
@property(retain) CKKSCondition *octagonInformationInitialized; // @synthesize octagonInformationInitialized=_octagonInformationInitialized;
@property(retain) OTCliqueStatusWrapper *octagonStatus; // @synthesize octagonStatus=_octagonStatus;
@property(retain) CKKSCondition *accountCirclePeerIDInitialized; // @synthesize accountCirclePeerIDInitialized=_accountCirclePeerIDInitialized;
@property(retain) NSError *accountCirclePeerIDError; // @synthesize accountCirclePeerIDError=_accountCirclePeerIDError;
@property(retain) NSString *accountCirclePeerID; // @synthesize accountCirclePeerID=_accountCirclePeerID;
@property(retain) SOSAccountStatus *currentCircleStatus; // @synthesize currentCircleStatus=_currentCircleStatus;
@property(retain) CKKSCondition *ckdeviceIDInitialized; // @synthesize ckdeviceIDInitialized=_ckdeviceIDInitialized;
@property(retain) NSError *ckdeviceIDError; // @synthesize ckdeviceIDError=_ckdeviceIDError;
@property(copy) NSString *ckdeviceID; // @synthesize ckdeviceID=_ckdeviceID;
@property(retain) CKKSCondition *ckAccountInfoInitialized; // @synthesize ckAccountInfoInitialized=_ckAccountInfoInitialized;
@property(retain) CKAccountInfo *currentCKAccountInfo; // @synthesize currentCKAccountInfo=_currentCKAccountInfo;
@property(readonly) CKKSNearFutureScheduler *fetchCKAccountStatusScheduler; // @synthesize fetchCKAccountStatusScheduler=_fetchCKAccountStatusScheduler;
@property(retain) CKKSCondition *finishedInitialDispatches; // @synthesize finishedInitialDispatches=_finishedInitialDispatches;
@property(retain) NSString *octagonPeerID; // @synthesize octagonPeerID=_octagonPeerID;
- (void)setHSA2iCloudAccountStatus:(long long)arg1;	// IMP=0x00100000000367e3
- (void)triggerOctagonStatusFetch;	// IMP=0x00100000000365f8
- (id)checkForAllDeliveries;	// IMP=0x00100000000364d8
- (void)notifyCircleStatusChangeAndWaitForSignal;	// IMP=0x001000000003649a
- (void)notifyCKAccountStatusChangeAndWaitForSignal;	// IMP=0x0010000000036481
- (_Bool)notifyCKAccountStatusChangeAndWait:(unsigned long long)arg1;	// IMP=0x0010000000036430
- (void)recheckCKAccountStatus;	// IMP=0x0010000000036384
- (void)_onqueueDeliverCurrentCloudKitState:(id)arg1 listenerQueue:(id)arg2 oldStatus:(id)arg3 group:(id)arg4;	// IMP=0x001000000003623c
- (void)_onqueueDeliverCloudKitStateChanges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00100000000360a3
- (void)_onqueueUpdateAccountState:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x0010000000035db8
- (void)_onqueueUpdateAccountState:(id)arg1 deliveredSemaphore:(id)arg2;	// IMP=0x0010000000035c29
- (void)_onqueueUpdateCirclePeerID:(id)arg1;	// IMP=0x0010000000035a3f
- (id)notifyCircleChange:(id)arg1;	// IMP=0x001000000003593d
- (void)_onqueueUpdateCKDeviceID:(id)arg1;	// IMP=0x00100000000357b8
- (id)notifyCKAccountStatusChange:(id)arg1;	// IMP=0x00100000000354f6
- (id)registerForNotificationsOfCloudKitAccountStatusChange:(id)arg1;	// IMP=0x0010000000035408
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionInternal:(id)arg1;	// IMP=0x0010000000035269
- (void)dealloc;	// IMP=0x00100000000351ee
- (void)performInitialDispatches;	// IMP=0x0010000000035164
- (id)init:(id)arg1 nsnotificationCenterClass:(Class)arg2;	// IMP=0x0010000000034cc1

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
