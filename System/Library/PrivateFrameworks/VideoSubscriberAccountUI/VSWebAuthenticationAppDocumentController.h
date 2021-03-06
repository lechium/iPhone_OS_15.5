//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/VSMessagePortFeatureDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSMessageQueueDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSWebAuthenticationAppDocumentController <VSMessagePortFeatureDelegate, VSMessageQueueDelegate>
{
}

- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000049f30
- (id)_newViewModel;	// IMP=0x0000000000049f1f
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x0000000000049e6b
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x0000000000049db2
- (void)didAddMessagesToMessageQueue:(id)arg1;	// IMP=0x000000000004984e
- (void)messagePort:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0000000000049751
- (void)_sendMessage:(id)arg1;	// IMP=0x0000000000049436
- (_Bool)_updateWebAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004931b
- (_Bool)_updateWebAuthenticationViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000049239
- (id)_webAuthenticationViewModelWithViewModel:(id)arg1;	// IMP=0x0000000000049177
- (id)initWithAppDocument:(id)arg1;	// IMP=0x000000000004903d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

