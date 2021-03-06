//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/VCSpotlightSyncOperationDelegate-Protocol.h>
#import <VoiceShortcuts/WFDatabaseObjectObserver-Protocol.h>

@class CSSearchableIndex, NSMutableSet, NSString, VCDaemonXPCEventHandler, VCSpotlightSyncOperation, WFDatabaseResult, WFDebouncer;
@protocol OS_dispatch_queue, WFDatabaseProvider;

@interface VCSpotlightSyncService : NSObject <WFDatabaseObjectObserver, VCSpotlightSyncOperationDelegate>
{
    _Bool _isFetchingClientState;	// 8 = 0x8
    _Bool _hasAddedXPCEventHandlerObserver;	// 9 = 0x9
    WFDatabaseResult *_workflows;	// 16 = 0x10
    WFDebouncer *_debouncer;	// 24 = 0x18
    VCDaemonXPCEventHandler *_eventHandler;	// 32 = 0x20
    VCSpotlightSyncOperation *_syncOperation;	// 40 = 0x28
    id <WFDatabaseProvider> _databaseProvider;	// 48 = 0x30
    CSSearchableIndex *_index;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSMutableSet *_queuedModified;	// 72 = 0x48
    NSMutableSet *_queuedInserted;	// 80 = 0x50
    NSMutableSet *_queuedRemoved;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000006d66d
@property(nonatomic) _Bool hasAddedXPCEventHandlerObserver; // @synthesize hasAddedXPCEventHandlerObserver=_hasAddedXPCEventHandlerObserver;
@property(nonatomic) _Bool isFetchingClientState; // @synthesize isFetchingClientState=_isFetchingClientState;
@property(retain, nonatomic) NSMutableSet *queuedRemoved; // @synthesize queuedRemoved=_queuedRemoved;
@property(retain, nonatomic) NSMutableSet *queuedInserted; // @synthesize queuedInserted=_queuedInserted;
@property(retain, nonatomic) NSMutableSet *queuedModified; // @synthesize queuedModified=_queuedModified;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
@property(readonly, nonatomic) id <WFDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(retain, nonatomic) VCSpotlightSyncOperation *syncOperation; // @synthesize syncOperation=_syncOperation;
@property(readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) WFDebouncer *debouncer; // @synthesize debouncer=_debouncer;
@property(readonly, nonatomic) WFDatabaseResult *workflows; // @synthesize workflows=_workflows;
- (void)syncOperationFinishedWithRequestToRelaunch:(_Bool)arg1;	// IMP=0x000000000006d525
- (void)syncWithModifiedObjects:(id)arg1 inserted:(id)arg2 removed:(id)arg3;	// IMP=0x000000000006d2e3
- (void)sync;	// IMP=0x000000000006d2ca
- (void)requestSync;	// IMP=0x000000000006d1f1
- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;	// IMP=0x000000000006cec8
- (void)start;	// IMP=0x000000000006cde1
- (void)dealloc;	// IMP=0x000000000006cd6c
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;	// IMP=0x000000000006cab9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

