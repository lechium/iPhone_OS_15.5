//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEAppInfoCacheLookupDelegate-Protocol.h>
#import <NetworkExtension/NEFilterDataExtensionProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEFilterDataExtensionProviderProtocol-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSXPCListenerEndpoint;
@protocol OS_dispatch_source, OS_xpc_object;

@interface NEFilterDataExtensionProviderContext <NEAppInfoCacheLookupDelegate, NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol>
{
    _Bool _controlProviderExists;	// 16 = 0x10
    NSDictionary *_remediationMap;	// 24 = 0x18
    NSDictionary *_URLAppendStringMap;	// 32 = 0x20
    NSObject<OS_xpc_object> *_clientListener;	// 40 = 0x28
    NSXPCListenerEndpoint *_listenerEndpoint;	// 48 = 0x30
    NSMutableDictionary *_browserFlows;	// 56 = 0x38
    NSMutableDictionary *_socketFlows;	// 64 = 0x40
    NSMutableDictionary *_channelFlows;	// 72 = 0x48
    NSMutableArray *_socketExceptions;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_source;	// 88 = 0x58
    NSMutableArray *_pendingConnections;	// 96 = 0x60
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0000000000052648
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x00000000000525dc
- (void).cxx_destruct;	// IMP=0x000000000005a9db
@property(retain, nonatomic) NSMutableArray *pendingConnections; // @synthesize pendingConnections=_pendingConnections;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(retain, nonatomic) NSMutableArray *socketExceptions; // @synthesize socketExceptions=_socketExceptions;
@property(retain, nonatomic) NSMutableDictionary *channelFlows; // @synthesize channelFlows=_channelFlows;
@property(retain, nonatomic) NSMutableDictionary *socketFlows; // @synthesize socketFlows=_socketFlows;
@property(retain, nonatomic) NSMutableDictionary *browserFlows; // @synthesize browserFlows=_browserFlows;
@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
@property(retain, nonatomic) NSObject<OS_xpc_object> *clientListener; // @synthesize clientListener=_clientListener;
@property(nonatomic) _Bool controlProviderExists; // @synthesize controlProviderExists=_controlProviderExists;
@property(retain, nonatomic) NSDictionary *URLAppendStringMap; // @synthesize URLAppendStringMap=_URLAppendStringMap;
@property(retain, nonatomic) NSDictionary *remediationMap; // @synthesize remediationMap=_remediationMap;
- (void)handleChannelMessageStatsReport:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005a50b
- (void)handleChannelMessageFlowFinish:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005a130
- (void)handleChannelMessageMoreData:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000059bc9
- (void)handleNewChannelFlowMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000059440
- (void)closeChannelFlow:(id)arg1;	// IMP=0x000000000005938e
- (void)handleSocketSourceEventWithSocket:(int)arg1;	// IMP=0x00000000000584e3
- (_Bool)blessClient:(id)arg1;	// IMP=0x00000000000582af
- (void)closeSocketFlow:(id)arg1 socketID:(unsigned long long)arg2;	// IMP=0x0000000000058229
- (void)handleRemediationMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000057d0f
- (void)handleDataCompleteMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005799f
- (void)handleAddDataMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000573d5
- (void)handleNewFlowMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000056ba7
- (void)closeBrowserFilterFlow:(id)arg1;	// IMP=0x0000000000056b08
- (void)closeFlow:(id)arg1;	// IMP=0x0000000000056a20
- (void)fetchAppInfoForPID:(int)arg1 UUID:(id)arg2 bundleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000056815
- (void)reportFlow:(id)arg1 forVerdict:(id)arg2 event:(long long)arg3;	// IMP=0x0000000000056626
- (void)reportFlowStats:(id)arg1;	// IMP=0x0000000000056541
- (void)reportFlowClosed:(id)arg1;	// IMP=0x0000000000056444
- (void)reportFlow:(id)arg1 forVerdict:(id)arg2 absoluteVerdict:(id)arg3;	// IMP=0x0000000000056329
- (void)report:(id)arg1;	// IMP=0x00000000000562b1
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000056100
- (void)handleDataCompleteForFlow:(id)arg1 direction:(long long)arg2 reply:(id)arg3 controlSocket:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000055d20
- (void)handleData:(id)arg1 offset:(unsigned long long)arg2 forFlow:(id)arg3 direction:(long long)arg4 reply:(id)arg5 controlSocket:(int)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000558f5
- (void)handleNewFlow:(id)arg1 reply:(id)arg2 controlSocket:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005545e
- (id)adjustDataToFilter:(id)arg1 startOffset:(unsigned long long *)arg2 flow:(id)arg3 direction:(long long)arg4;	// IMP=0x0000000000055213
- (void)purgeData:(int)arg1 size:(int)arg2 buf:(char *)arg3 bufSize:(int)arg4;	// IMP=0x0000000000055109
- (void)setupSocketContentFilterWithControlSocket:(int)arg1;	// IMP=0x000000000005505e
- (void)teardownSocketSource;	// IMP=0x0000000000054feb
- (void)setupSocketSourceWithControlSocket:(int)arg1;	// IMP=0x0000000000054dbb
- (void)acceptNewClientConnection:(id)arg1;	// IMP=0x0000000000054b79
- (void)closePendingConnections;	// IMP=0x00000000000549c6
- (void)tearDownConnection:(id)arg1;	// IMP=0x00000000000545d4
- (void)handleClientMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005432d
- (void)updateFlow:(id)arg1 withVerdict:(id)arg2 forDirection:(long long)arg3;	// IMP=0x0000000000053b8f
- (void)resumeFlow:(id)arg1 withVerdict:(id)arg2;	// IMP=0x0000000000053601
- (id)findFlowWithFlow:(id)arg1;	// IMP=0x000000000005342a
- (void)applySettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000533a4
- (void)sendSocketContentFilterRequest;	// IMP=0x0000000000053367
- (void)sendBrowserContentFilterServerRequest;	// IMP=0x000000000005332a
- (void)provideURLAppendStringMap:(id)arg1;	// IMP=0x000000000005325d
- (void)provideRemediationMap:(id)arg1;	// IMP=0x000000000005316a
- (void)handleRulesChanged;	// IMP=0x000000000005312d
- (void)fetchProviderConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000052ed8
- (void)providerControlSocketFileHandle:(id)arg1;	// IMP=0x0000000000052e9e
- (void)stopWithReason:(int)arg1;	// IMP=0x0000000000052a6d
- (void)startFilterWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000526d2
- (Class)requiredProviderSuperClass;	// IMP=0x00000000000526c1
- (id)extensionPoint;	// IMP=0x00000000000526b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

