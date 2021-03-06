//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/IDSXPCActivityMonitorClient-Protocol.h>

@class IDSXPCDaemonController, NSMutableDictionary, NSString;

@interface _IDSActivityMonitorXPCConnector : NSObject <IDSXPCActivityMonitorClient>
{
    NSMutableDictionary *_listenersByActivity;	// 8 = 0x8
    IDSXPCDaemonController *_daemonController;	// 16 = 0x10
    IDSXPCDaemonController *_syncDaemonController;	// 24 = 0x18
    CDUnknownBlockType _syncDaemonControllerBuilder;	// 32 = 0x20
    CDUnknownBlockType _daemonControllerBuilder;	// 40 = 0x28
}

+ (id)weakSharedInstance;	// IMP=0x0000000000101af5
- (void).cxx_destruct;	// IMP=0x0000000000102b03
@property(copy, nonatomic) CDUnknownBlockType daemonControllerBuilder; // @synthesize daemonControllerBuilder=_daemonControllerBuilder;
@property(copy, nonatomic) CDUnknownBlockType syncDaemonControllerBuilder; // @synthesize syncDaemonControllerBuilder=_syncDaemonControllerBuilder;
@property(retain, nonatomic) IDSXPCDaemonController *syncDaemonController; // @synthesize syncDaemonController=_syncDaemonController;
@property(retain, nonatomic) IDSXPCDaemonController *daemonController; // @synthesize daemonController=_daemonController;
@property(retain, nonatomic) NSMutableDictionary *listenersByActivity; // @synthesize listenersByActivity=_listenersByActivity;
- (void)handleIncomingUpdate:(id)arg1 onActivity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000102790
- (void)_updateActivity:(id)arg1 isSupported:(_Bool)arg2;	// IMP=0x000000000010262d
- (void)_handleInterruption;	// IMP=0x00000000001024fa
- (void)removeListener:(id)arg1 forTopic:(id)arg2;	// IMP=0x00000000001023d8
- (void)addListener:(id)arg1 forTopic:(id)arg2;	// IMP=0x00000000001022b8
- (void)performAction:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000101f7d
- (void)performSyncAction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000101d4d
- (void)dealloc;	// IMP=0x0000000000101d08
- (id)initWithSyncDaemonControllerBuilder:(CDUnknownBlockType)arg1 daemonControllerBuilder:(CDUnknownBlockType)arg2;	// IMP=0x0000000000101c64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

