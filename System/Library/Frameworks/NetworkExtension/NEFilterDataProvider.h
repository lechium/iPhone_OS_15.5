//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSExtensionRequestHandling-Protocol.h>

@class NSString;

@interface NEFilterDataProvider <NSExtensionRequestHandling>
{
}

- (void)updateFlow:(id)arg1 usingVerdict:(id)arg2 forDirection:(long long)arg3;	// IMP=0x000000000005bf57
- (void)resumeFlow:(id)arg1 withVerdict:(id)arg2;	// IMP=0x000000000005bed1
- (void)applySettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005bc29
- (id)handleRemediationForFlow:(id)arg1;	// IMP=0x000000000005bc21
- (void)handleRulesChanged;	// IMP=0x000000000005bc1b
- (id)handleOutboundDataCompleteForFlow:(id)arg1;	// IMP=0x000000000005bc13
- (id)handleInboundDataCompleteForFlow:(id)arg1;	// IMP=0x000000000005bc0b
- (id)handleOutboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3;	// IMP=0x000000000005bc03
- (id)handleInboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3;	// IMP=0x000000000005bbfb
- (id)handleNewFlow:(id)arg1;	// IMP=0x000000000005bbf3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
