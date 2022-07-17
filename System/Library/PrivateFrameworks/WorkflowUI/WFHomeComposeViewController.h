//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol WFHomeComposeViewControllerDelegate;

@interface WFHomeComposeViewController
{
}

+ (void)preloadActionRegistryIfNeeded;	// IMP=0x000000000019982a
+ (void)preloadHomeManager;	// IMP=0x0000000000199786
- (unsigned long long)navigationUpdateBehavior;	// IMP=0x000000000019977b
- (void)didTapDone;	// IMP=0x000000000019970e
- (id)doneBarButtonItem;	// IMP=0x0000000000199687
- (void)dismissForTutorial:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000019928c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000199243
- (void)viewDidLoad;	// IMP=0x0000000000199154
- (id)initWithWorkflow:(id)arg1 home:(id)arg2;	// IMP=0x0000000000198fe1
- (id)initWithHomeWorkflow:(id)arg1 actionSetBuilder:(id)arg2;	// IMP=0x0000000000198fcc
- (id)initWithHomeWorkflow:(id)arg1 actionSetBuilder:(id)arg2 home:(id)arg3;	// IMP=0x0000000000198ab1

// Remaining properties
@property(nonatomic) __weak id <WFHomeComposeViewControllerDelegate> delegate; // @dynamic delegate;

@end
