//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KeyboardServices/APSConnectionDelegate-Protocol.h>
#import <KeyboardServices/NSXPCListenerDelegate-Protocol.h>
#import <KeyboardServices/_KSTextReplacementCancellation-Protocol.h>
#import <KeyboardServices/_KSTextReplacementStoreProtocol-Protocol.h>
#import <KeyboardServices/_KSTextReplacementSyncProtocol-Protocol.h>

@class APSConnection, NSString, NSXPCListener, _KSTRClient, _KSTextReplacementManager;
@protocol OS_dispatch_queue;

@interface _KSTextReplacementServer : NSObject <NSXPCListenerDelegate, APSConnectionDelegate, _KSTextReplacementSyncProtocol, _KSTextReplacementStoreProtocol, _KSTextReplacementCancellation>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    _KSTRClient *_daemonClient;	// 16 = 0x10
    _KSTextReplacementManager *_textReplacementManager;	// 24 = 0x18
    APSConnection *_pushConnection;	// 32 = 0x20
    NSXPCListener *_listener;	// 40 = 0x28
    NSString *_directoryPath;	// 48 = 0x30
}

+ (_Bool)isBlackListed:(unsigned int)arg1;	// IMP=0x000000000002b0f8
+ (id)textReplacementServer;	// IMP=0x00000000000282bb
- (void).cxx_destruct;	// IMP=0x000000000002b14f
@property(copy, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
- (void)buddySetupDidFinish;	// IMP=0x000000000002b06b
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x000000000002b065
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x000000000002b05f
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x000000000002af07
- (void)registerForPushNotifications;	// IMP=0x000000000002af01
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000002ad1d
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a85e
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a3d9
- (id)textReplacementEntriesForClient:(id)arg1;	// IMP=0x000000000002a128
- (id)textReplacementEntries;	// IMP=0x000000000002a112
- (_Bool)_cancelPendingUpdateForClient:(id)arg1;	// IMP=0x000000000002a0e7
- (void)requestSync:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029ffb
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029fe4
- (void)cancelPendingUpdates;	// IMP=0x0000000000029fce
- (void)removeAllEntries;	// IMP=0x0000000000029dc0
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 forClient:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000028f03
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000028eea
- (void)shutdown;	// IMP=0x0000000000028e76
- (void)start;	// IMP=0x0000000000028de4
- (void)_performCleanup;	// IMP=0x0000000000028cf9
- (void)cleanup;	// IMP=0x0000000000028aff
@property(retain, nonatomic) _KSTextReplacementManager *textReplacementManager; // @synthesize textReplacementManager=_textReplacementManager;
- (void)scheduleSyncTask;	// IMP=0x00000000000285c8
- (_Bool)isSetupAssistantRunning;	// IMP=0x00000000000285c0
- (void)dealloc;	// IMP=0x000000000002853b
- (id)initWithDatabaseDirectoryPath:(id)arg1;	// IMP=0x000000000002836a
- (id)init;	// IMP=0x0000000000028310

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

