//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXProviderExtensionVendorContextDelegate-Protocol.h>
#import <CallKit/NSExtensionRequestHandling-Protocol.h>

@class CXProviderExtensionVendorContext, NSString;

@interface CXExtensionProvider <CXProviderExtensionVendorContextDelegate, NSExtensionRequestHandling>
{
    CXProviderExtensionVendorContext *_extensionContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002144b
@property(retain, nonatomic) CXProviderExtensionVendorContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void)providerExtensionVendorContext:(id)arg1 handledAudioSessionActivationStateChangedTo:(_Bool)arg2;	// IMP=0x0000000000021412
- (void)providerExtensionVendorContext:(id)arg1 handledActionTimeout:(id)arg2;	// IMP=0x00000000000213fd
- (void)providerExtensionVendorContext:(id)arg1 receivedCommittedTransaction:(id)arg2;	// IMP=0x00000000000213e8
- (void)beginRequestWithExtensionContext:(id)arg1;	// IMP=0x0000000000021130
- (void)invalidate;	// IMP=0x0000000000020fee
- (_Bool)requiresProxyingAVAudioSessionState;	// IMP=0x0000000000020fe6
- (id)hostProtocolDelegate;	// IMP=0x0000000000020fd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
