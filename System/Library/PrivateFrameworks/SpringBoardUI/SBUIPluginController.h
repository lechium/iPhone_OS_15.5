//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/SBPluginBundleController-Protocol.h>

@class NSString;
@protocol SBUIPluginControllerHost;

@interface SBUIPluginController : NSObject <SBPluginBundleController>
{
    id <SBUIPluginControllerHost> _host;	// 8 = 0x8
    _Bool _isVisible;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000163aa
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_isVisible;
@property(nonatomic) __weak id <SBUIPluginControllerHost> host; // @synthesize host=_host;
- (id)viewControllerForActivationContext:(id)arg1;	// IMP=0x0000000000016372
- (_Bool)handledButtonTapFromSource:(int)arg1;	// IMP=0x000000000001636a
- (_Bool)handledButtonUpEventFromSource:(int)arg1;	// IMP=0x0000000000016362
- (_Bool)handledButtonDownEventFromSource:(int)arg1;	// IMP=0x000000000001635a
- (_Bool)handledPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016352
- (_Bool)handleActivationEvent:(int)arg1 eventSource:(int)arg2 context:(void *)arg3;	// IMP=0x000000000001634a
- (void)cancelPendingActivationEvent:(int)arg1;	// IMP=0x0000000000016344
- (void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3;	// IMP=0x000000000001633e
- (_Bool)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double *)arg3;	// IMP=0x0000000000016336
- (_Bool)supportedAndEnabled;	// IMP=0x000000000001632e
- (void)registeredWithHost;	// IMP=0x0000000000016328

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
