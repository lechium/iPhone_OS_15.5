//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <PassKitCore/PKIssuerProvisioningExtensionProviderContextExportedInterface-Protocol.h>

@class NSString, PKIssuerProvisioningExtensionHandler;

@interface PKIssuerProvisioningExtensionProviderContext : NSExtensionContext <PKIssuerProvisioningExtensionProviderContextExportedInterface>
{
    PKIssuerProvisioningExtensionHandler *_handler;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0000000000176d7d
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0000000000176d73
- (void).cxx_destruct;	// IMP=0x000000000017714a
@property(retain, nonatomic) PKIssuerProvisioningExtensionHandler *handler; // @synthesize handler=_handler;
- (void)connect;	// IMP=0x00000000001770d9
- (void)generateRequestWithEntryIdentifier:(id)arg1 configuration:(id)arg2 certificateChain:(id)arg3 nonce:(id)arg4 nonceSignature:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000176fd8
- (void)remotePassEntriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000176f68
- (void)passEntriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000176ef8
- (void)statusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000176e8d
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000176e0a
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000176d87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
