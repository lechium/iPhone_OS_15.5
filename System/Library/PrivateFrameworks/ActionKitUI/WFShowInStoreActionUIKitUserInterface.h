//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFEmbeddableActionUserInterface.h>

#import <ActionKitUI/SKStoreProductViewControllerDelegate-Protocol.h>
#import <ActionKitUI/WFShowInStoreActionUserInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFShowInStoreActionUIKitUserInterface : WFEmbeddableActionUserInterface <SKStoreProductViewControllerDelegate, WFShowInStoreActionUserInterface>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003f12e
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f069
- (void)productViewControllerDidFinish:(id)arg1;	// IMP=0x000000000003f015
- (void)showWithiTunesObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003ee66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end

