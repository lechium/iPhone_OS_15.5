//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DRProcessInfo, NSMutableArray, NSString, PBDataTransferMonitor, PBItemCollection;
@protocol DRDataTransferSessionDelegate;

@interface DRDataTransferSession : NSObject
{
    DRProcessInfo *_sourceProcessInfo;	// 8 = 0x8
    DRProcessInfo *_destinationProcessInfo;	// 16 = 0x10
    PBItemCollection *_destinationItemCollection;	// 24 = 0x18
    PBDataTransferMonitor *_dataTransferMonitor;	// 32 = 0x20
    _Bool _destinationIsAnotherDevice;	// 40 = 0x28
    NSMutableArray *_transferQueue_requestsQueue;	// 48 = 0x30
    NSMutableArray *_transferQueue_requestsInProgress;	// 56 = 0x38
    _Bool _transferQueue_canTellDelegateAboutFinishedTransfers;	// 64 = 0x40
    _Bool _transferQueue_shouldSendBeganCallback;	// 65 = 0x41
    _Bool _transferQueue_shouldSendFinishedCallback;	// 66 = 0x42
    id <DRDataTransferSessionDelegate> _delegate;	// 72 = 0x48
    PBItemCollection *_sourceItemCollection;	// 80 = 0x50
}

+ (_Bool)_shouldRestrictOpenInPlaceFor:(id)arg1 destinationAuditToken:(CDStruct_4c969caf)arg2;	// IMP=0x0020000000012b8c
- (void).cxx_destruct;	// IMP=0x0020000000015436
@property(readonly, nonatomic) DRProcessInfo *destinationProcessInfo; // @synthesize destinationProcessInfo=_destinationProcessInfo;
@property(readonly, nonatomic) DRProcessInfo *sourceProcessInfo; // @synthesize sourceProcessInfo=_sourceProcessInfo;
@property(retain, nonatomic) PBItemCollection *sourceItemCollection; // @synthesize sourceItemCollection=_sourceItemCollection;
@property(nonatomic) __weak id <DRDataTransferSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDataProviderEndpoint:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;	// IMP=0x001000000001536c
- (void)dataTransferMonitorFinishedTransfers:(id)arg1;	// IMP=0x00100000000152e5
- (void)dataTransferMonitorBeganTransfers:(id)arg1;	// IMP=0x001000000001525e
- (void)cancelDataTransfer;	// IMP=0x0010000000015248
- (void)startSendingDelegateCallbacks;	// IMP=0x0010000000015195
- (void)_transferQueue_sendDelegateCallbacksIfNeeded;	// IMP=0x0010000000014f2e
- (void)_transferQueue_scheduleNextTransfer;	// IMP=0x00100000000141c9
- (id)_registerRequestFromSourceItem:(id)arg1 typeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013dbb
- (void)_setupItem:(id)arg1 forLoadingFromSourceItem:(id)arg2 destinationBundleID:(id)arg3 destinationAuditToken:(CDStruct_4c969caf)arg4 destinationIsSameTeam:(_Bool)arg5 destinationIsSameProcess:(_Bool)arg6 destinationIsAppleProcess:(_Bool)arg7 destinationIsAnotherDevice:(_Bool)arg8;	// IMP=0x0010000000012c31
- (id)destinationDataProviderEndpoint;	// IMP=0x0010000000012ab2
- (id)_copyItemCollectionForDestination;	// IMP=0x0010000000012560
- (void)clearDestinationAuditToken;	// IMP=0x0010000000012527
@property(readonly, nonatomic) PBItemCollection *destinationItemCollection;
- (_Bool)setDestinationAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x001000000001246c
- (id)initWithSourceItemCollection:(id)arg1 sourceAuditToken:(CDStruct_4c969caf)arg2 dataProviderEndpoint:(id)arg3;	// IMP=0x00100000000121ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
