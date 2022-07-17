//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEExtensionAppProxyProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEExtensionAppProxyProviderProtocol-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface NEExtensionAppProxyProviderContext <NEExtensionAppProxyProviderProtocol, NEExtensionAppProxyProviderHostProtocol>
{
    unsigned int _delegateInterfaceIndex;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_flowQueue;	// 16 = 0x10
    struct _NEFlowDirector *_director;	// 24 = 0x18
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0000000000043e8e
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0000000000043e22
- (void).cxx_destruct;	// IMP=0x0000000000045507
@property unsigned int delegateInterfaceIndex; // @synthesize delegateInterfaceIndex=_delegateInterfaceIndex;
@property struct _NEFlowDirector *director; // @synthesize director=_director;
@property(retain) NSObject<OS_dispatch_queue> *flowQueue; // @synthesize flowQueue=_flowQueue;
@property(nonatomic) unsigned long long maxWriteSize;
- (Class)requiredProviderSuperClass;	// IMP=0x000000000004544c
- (id)extensionPoint;	// IMP=0x000000000004543f
- (void)cancelWithError:(id)arg1;	// IMP=0x0000000000045322
- (void)stopWithReason:(int)arg1;	// IMP=0x00000000000451c3
- (void)startWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044f33
- (void)flowDivertNewFlow:(struct _NEFlow *)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044b1f
- (void)flowDivertMatchAppRulesWithFlow:(unsigned int)arg1 auditToken:(struct __CFData *)arg2 signingIdentifier:(struct __CFString *)arg3 realSigningIdentifier:(struct __CFString *)arg4 realAuditToken:(struct __CFData *)arg5;	// IMP=0x0000000000044717
- (void)flowDivertOpenControlSocket;	// IMP=0x00000000000445b3
- (void)openFlowDivertControlSocketWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000444ca
- (void)setDelegateInterface:(unsigned int)arg1;	// IMP=0x00000000000443d9
- (void)setInitialFlowDivertControlSocket:(id)arg1;	// IMP=0x0000000000044341
- (void)setInitialFlowDivertControlSocket:(id)arg1 extraValidation:(_Bool)arg2;	// IMP=0x0000000000043efa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
