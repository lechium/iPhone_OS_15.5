//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INIntentHandlerProviding-Protocol.h>
#import <Intents/NSExtensionRequestHandling-Protocol.h>

@class INExtensionContext, NSString;

@interface INExtension : NSObject <NSExtensionRequestHandling, INIntentHandlerProviding>
{
    INExtensionContext *_extensionContext;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x0000000000072113
- (void).cxx_destruct;	// IMP=0x0000000000072103
@property(readonly, nonatomic) INExtensionContext *_extensionContext; // @synthesize _extensionContext;
- (id)handlerForIntent:(id)arg1;	// IMP=0x00000000000720ec
- (void)beginRequestWithExtensionContext:(id)arg1;	// IMP=0x000000000007202d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
