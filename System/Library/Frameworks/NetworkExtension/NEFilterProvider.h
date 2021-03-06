//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSExtensionRequestHandling-Protocol.h>

@class NEFilterProviderConfiguration, NSString;

@interface NEFilterProvider <NSExtensionRequestHandling>
{
    NEFilterProviderConfiguration *_filterConfiguration;	// 8 = 0x8
}

+ (id)descriptionForAction:(long long)arg1;	// IMP=0x00000000000635c2
- (void).cxx_destruct;	// IMP=0x0000000000063730
@property(retain) NEFilterProviderConfiguration *filterConfiguration; // @synthesize filterConfiguration=_filterConfiguration;
- (void)handleReport:(id)arg1;	// IMP=0x0000000000063650
- (void)stopFilterWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000634fb
- (void)startFilterWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000063444

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

