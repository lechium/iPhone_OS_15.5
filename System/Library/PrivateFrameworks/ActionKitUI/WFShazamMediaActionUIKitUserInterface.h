//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFEmbeddableActionUserInterface.h>

#import <ActionKitUI/WFShazamMediaActionUserInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFShazamMediaActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFShazamMediaActionUserInterface>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005a162
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000005a0ae
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005a00b
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000059f9f
- (_Bool)prefersModalPresentation;	// IMP=0x0000000000059f97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end

