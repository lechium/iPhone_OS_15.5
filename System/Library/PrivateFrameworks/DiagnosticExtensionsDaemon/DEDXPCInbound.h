//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDXPCProtocol-Protocol.h>

@class NSNumber, NSString;
@protocol DEDXPCInboundDelegate, OS_os_log;

@interface DEDXPCInbound : NSObject <DEDXPCProtocol>
{
    NSNumber *_senderPid;	// 8 = 0x8
    NSObject<OS_os_log> *_log;	// 16 = 0x10
    id <DEDXPCInboundDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000667c6
@property __weak id <DEDXPCInboundDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) NSNumber *senderPid; // @synthesize senderPid=_senderPid;
- (void)xpc_cancelNotifySession:(id)arg1;	// IMP=0x00000000000666a3
- (void)xpc_notifySession:(id)arg1;	// IMP=0x00000000000665ed
- (void)xpc_cancelSession:(id)arg1;	// IMP=0x0000000000066532
- (void)xpc_didCommitSession:(id)arg1;	// IMP=0x0000000000066477
- (void)xpc_commitSession:(id)arg1;	// IMP=0x00000000000663bc
- (void)xpc_uploadProgress:(unsigned long long)arg1 total:(long long)arg2 session:(id)arg3;	// IMP=0x0000000000066319
- (void)xpc_didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;	// IMP=0x0000000000066206
- (void)xpc_adoptFiles:(id)arg1 forSession:(id)arg2;	// IMP=0x00000000000660f0
- (void)xpc_hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4;	// IMP=0x0000000000065ed2
- (void)xpc_hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;	// IMP=0x0000000000065d42
- (void)xpc_syncSessionStatusWithSession:(id)arg1;	// IMP=0x0000000000065c85
- (void)xpc_getSessionStatusWithSession:(id)arg1;	// IMP=0x0000000000065bc8
- (void)xpc_didGetState:(long long)arg1 info:(id)arg2 sessionID:(id)arg3;	// IMP=0x0000000000065a2d
- (void)xpc_getSessionStateWithSession:(id)arg1;	// IMP=0x00000000000658b7
- (void)xpc_terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;	// IMP=0x0000000000065754
- (void)xpc_finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;	// IMP=0x000000000006563a
- (void)xpc_startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;	// IMP=0x00000000000654b3
- (void)xpc_startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;	// IMP=0x000000000006534f
- (void)xpc_deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;	// IMP=0x00000000000650a0
- (void)xpc_listAvailableExtensionsForSession:(id)arg1;	// IMP=0x0000000000064fe3
- (void)xpc_pongSession:(id)arg1;	// IMP=0x0000000000064f28
- (void)xpc_pingSession:(id)arg1;	// IMP=0x0000000000064e70
- (void)xpc_listClientXPCConnectionsReply:(id)arg1;	// IMP=0x0000000000064dfe
- (void)xpc_listClientXPCConnections;	// IMP=0x0000000000064db2
- (void)xpc_didCancelSession:(id)arg1;	// IMP=0x0000000000064d1e
- (void)xpc_hasActiveSessionReply:(id)arg1 isActive:(_Bool)arg2;	// IMP=0x0000000000064ca6
- (void)xpc_hasActiveSession:(id)arg1;	// IMP=0x0000000000064c31
- (void)xpc_didStartBugSessionWithInfo:(id)arg1;	// IMP=0x0000000000064b16
- (void)xpc_startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;	// IMP=0x0000000000064a23
- (void)xpc_successPINForDevice:(id)arg1;	// IMP=0x00000000000649b1
- (void)xpc_tryPIN:(id)arg1 forDevice:(id)arg2;	// IMP=0x0000000000064928
- (void)xpc_promptPINForDevice:(id)arg1;	// IMP=0x00000000000648b6
- (void)xpc_startPairSetupForDevice:(id)arg1;	// IMP=0x0000000000064841
- (void)xpc_gotDeviceUpdate:(id)arg1;	// IMP=0x00000000000647c6
- (void)xpc_didDiscoverDevices:(id)arg1;	// IMP=0x0000000000064655
- (void)xpc_stopDeviceDiscovery;	// IMP=0x0000000000064609
- (void)xpc_discoverAllAvailableDevices;	// IMP=0x00000000000645bd
- (void)xpc_pong;	// IMP=0x0000000000064580
- (void)xpc_ping;	// IMP=0x0000000000064534
- (id)initWithDelegate:(id)arg1 senderPid:(id)arg2;	// IMP=0x0000000000064432

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
