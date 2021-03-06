//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSXPCListenerDelegate-Protocol.h>

@class NSCountedSet, NSDate, NSMutableDictionary, NSString, NSURL, NSXPCListener, WBSHistoryDatabaseAccessBroker, WBSHistoryURLCompletionDataStore;
@protocol OS_dispatch_queue;

@interface WBSHistoryService : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_historyServiceQueue;	// 16 = 0x10
    NSMutableDictionary *_openedDatabases;	// 24 = 0x18
    NSCountedSet *_openedDatabasesRefCounts;	// 32 = 0x20
    NSDate *_initDate;	// 40 = 0x28
    WBSHistoryDatabaseAccessBroker *_databaseAccessBroker;	// 48 = 0x30
    WBSHistoryURLCompletionDataStore *_urlCompletionDataStore;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000e088e
@property(readonly, nonatomic) WBSHistoryURLCompletionDataStore *urlCompletionDataStore; // @synthesize urlCompletionDataStore=_urlCompletionDataStore;
@property(readonly, nonatomic) WBSHistoryDatabaseAccessBroker *databaseAccessBroker; // @synthesize databaseAccessBroker=_databaseAccessBroker;
- (void)disconnectDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e0692
- (void)connectWithOptions:(id)arg1 connection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e0336
- (id)_openOrReuseExistingDatabaseWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000df9a8
@property(readonly, nonatomic) NSURL *databaseURL;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000df5c1
- (_Bool)_connectionIsEntitledToUseUserDatabase:(id)arg1;	// IMP=0x00000000000df423
- (void)shutdown;	// IMP=0x00000000000df34d
- (void)resume;	// IMP=0x00000000000df2db
- (id)_createListener;	// IMP=0x00000000000df2ab
- (void)dealloc;	// IMP=0x00000000000df200
- (id)init;	// IMP=0x00000000000df080

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

