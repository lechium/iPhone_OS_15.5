//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCThrottleBase, BRCTransferStream, BRCUserDefaults, CKContainer, CKContainerID, NSDate, NSHashTable, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCSyncContext : NSObject
{
    CKContainer *_ckContainer;	// 8 = 0x8
    NSString *_contextIdentifier;	// 16 = 0x10
    _Bool _isShared;	// 24 = 0x18
    _Bool _isCancelled;	// 25 = 0x19
    int _notifyTokenForFramework;	// 28 = 0x1c
    NSMutableSet *_foregroundClients;	// 32 = 0x20
    NSString *_lastForegroundClientDescription;	// 40 = 0x28
    NSDate *_dateWhenLastForegroundClientLeft;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_timerForGraceForegroundPeriod;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_timerForForcedForegroundPeriod;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_foregroundStateQueue;	// 72 = 0x48
    unsigned long long _foregroundState;	// 80 = 0x50
    NSHashTable *_nonDiscretionaryModifyOperations;	// 88 = 0x58
    NSHashTable *_discretionaryModifyOperations;	// 96 = 0x60
    NSOperationQueue *_nonDiscretionaryRecursiveListOperationQueue;	// 104 = 0x68
    NSOperationQueue *_discretionaryRecursiveListOperationQueue;	// 112 = 0x70
    BRCAccountSession *_session;	// 120 = 0x78
    BRCThrottleBase *_readerThrottle;	// 128 = 0x80
    BRCThrottleBase *_applyThrottle;	// 136 = 0x88
    BRCThrottleBase *_downloadThrottle;	// 144 = 0x90
    BRCThrottleBase *_uploadThrottle;	// 152 = 0x98
    BRCThrottleBase *_uploadFileModifiedThrottle;	// 160 = 0xa0
    BRCThrottleBase *_perItemSyncUpThrottle;	// 168 = 0xa8
    BRCTransferStream *_uploadStream;	// 176 = 0xb0
    BRCTransferStream *_downloadStream;	// 184 = 0xb8
}

+ (id)transferContextForServerZone:(id)arg1 appLibrary:(id)arg2;	// IMP=0x0000000000265195
+ (id)transferContextIdentifierForMangledID:(id)arg1;	// IMP=0x0000000000265181
+ (id)metadataContextIdentifierForMangledID:(id)arg1;	// IMP=0x000000000026516a
+ (id)_contextIdentifierForMangledID:(id)arg1 metadata:(_Bool)arg2;	// IMP=0x0000000000265076
- (void).cxx_destruct;	// IMP=0x00000000002689b1
@property(readonly, nonatomic) _Bool isShared; // @synthesize isShared=_isShared;
@property(readonly, nonatomic) BRCTransferStream *downloadStream; // @synthesize downloadStream=_downloadStream;
@property(readonly, nonatomic) BRCTransferStream *uploadStream; // @synthesize uploadStream=_uploadStream;
@property(readonly, nonatomic) BRCThrottleBase *perItemSyncUpThrottle; // @synthesize perItemSyncUpThrottle=_perItemSyncUpThrottle;
@property(readonly, nonatomic) BRCThrottleBase *uploadFileModifiedThrottle; // @synthesize uploadFileModifiedThrottle=_uploadFileModifiedThrottle;
@property(readonly, nonatomic) BRCThrottleBase *uploadThrottle; // @synthesize uploadThrottle=_uploadThrottle;
@property(readonly, nonatomic) BRCThrottleBase *downloadThrottle; // @synthesize downloadThrottle=_downloadThrottle;
@property(readonly, nonatomic) BRCThrottleBase *applyThrottle; // @synthesize applyThrottle=_applyThrottle;
@property(readonly, nonatomic) BRCThrottleBase *readerThrottle; // @synthesize readerThrottle=_readerThrottle;
@property(readonly, nonatomic) NSString *contextIdentifier; // @synthesize contextIdentifier=_contextIdentifier;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
- (void)_notifyContainerBeingNowForeground;	// IMP=0x0000000000268780
- (void)_notifyFrameworkContainersMonitorWithState:(_Bool)arg1;	// IMP=0x0000000000268680
- (void)_armForegroundGraceTimerForClientDescription:(id)arg1;	// IMP=0x000000000026804a
- (void)didReceiveHandoffRequest;	// IMP=0x0000000000267fcd
- (id)foregroundClients;	// IMP=0x0000000000267f71
- (_Bool)isForeground;	// IMP=0x0000000000267f04
- (void)removeForegroundClient:(id)arg1;	// IMP=0x0000000000267ddd
- (void)addForegroundClient:(id)arg1;	// IMP=0x0000000000267b7d
- (void)forceContainerForegroundForDuration:(double)arg1;	// IMP=0x00000000002677e9
- (void)dumpToContext:(id)arg1;	// IMP=0x00000000002674c0
- (void)close;	// IMP=0x0000000000267320
- (void)waitForAllOperations;	// IMP=0x00000000002672b6
- (void)cancel;	// IMP=0x0000000000267221
- (void)resume;	// IMP=0x0000000000267133
- (void)addOperation:(id)arg1 allowsCellularAccess:(id)arg2 nonDiscretionary:(id)arg3;	// IMP=0x00000000002668e8
- (void)addOperation:(id)arg1 nonDiscretionary:(_Bool)arg2;	// IMP=0x0000000000266865
- (void)addOperation:(id)arg1 allowsCellularAccess:(id)arg2;	// IMP=0x0000000000266850
- (void)addOperation:(id)arg1;	// IMP=0x0000000000266839
- (_Bool)allowsCellularAccess;	// IMP=0x00000000002667ee
- (void)_preventConcurrentModifyRecordsOperations:(id)arg1 nonDiscretionary:(_Bool)arg2;	// IMP=0x0000000000266328
- (void)notifyDuetFromAccessByBundleID:(id)arg1;	// IMP=0x0000000000266322
- (id)_database;	// IMP=0x00000000002662ea
@property(readonly, nonatomic) CKContainerID *ckContainerID;
@property(readonly, nonatomic) CKContainer *ckContainer;
- (void)setupIfNeeded;	// IMP=0x0000000000265f1d
- (void)dealloc;	// IMP=0x0000000000265edf
- (id)initWithSession:(id)arg1 contextIdentifier:(id)arg2 isShared:(_Bool)arg3;	// IMP=0x000000000026524e
- (id)description;	// IMP=0x0000000000265035
@property(readonly, nonatomic) BRCUserDefaults *defaults;

@end

