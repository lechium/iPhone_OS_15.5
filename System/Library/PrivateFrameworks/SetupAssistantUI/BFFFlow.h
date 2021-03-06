//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SetupAssistantUI/BFFFlowItem-Protocol.h>
#import <SetupAssistantUI/BFFFlowItemDelegate-Protocol.h>
#import <SetupAssistantUI/BFFNavigationControllerDelegate-Protocol.h>

@class BFFFlowStarter, BFFNavigationController, NSArray, NSMutableArray, NSString, UIViewController;
@protocol BFFFlowDelegate, BFFFlowItem, BFFFlowItemDelegate, BFFNavigationFlowDelegate;

@interface BFFFlow : NSObject <BFFFlowItemDelegate, BFFNavigationControllerDelegate, BFFFlowItem>
{
    BFFNavigationController *_navigationController;	// 8 = 0x8
    id <BFFNavigationFlowDelegate> _navigationFlowDelegate;	// 16 = 0x10
    id <BFFFlowItemDelegate> _flowItemDelegate;	// 24 = 0x18
    id <BFFFlowDelegate> _delegate;	// 32 = 0x20
    BFFFlowStarter *_starter;	// 40 = 0x28
    NSArray *_classList;	// 48 = 0x30
    NSMutableArray *_controllers;	// 56 = 0x38
    CDUnknownBlockType _injector;	// 64 = 0x40
    UIViewController<BFFFlowItem> *_firstController;	// 72 = 0x48
}

+ (id)internalSkipKey;	// IMP=0x0000000000016c37
+ (id)cloudConfigSkipKey;	// IMP=0x0000000000016c2f
- (void).cxx_destruct;	// IMP=0x00000000000174aa
@property(retain, nonatomic) UIViewController<BFFFlowItem> *firstController; // @synthesize firstController=_firstController;
@property(readonly, copy, nonatomic) CDUnknownBlockType injector; // @synthesize injector=_injector;
@property(retain, nonatomic) NSMutableArray *controllers; // @synthesize controllers=_controllers;
@property(retain, nonatomic) NSArray *classList; // @synthesize classList=_classList;
@property(readonly, nonatomic) __weak BFFFlowStarter *starter; // @synthesize starter=_starter;
@property(nonatomic) __weak id <BFFFlowDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <BFFFlowItemDelegate> flowItemDelegate; // @synthesize flowItemDelegate=_flowItemDelegate;
@property(readonly, nonatomic) __weak id <BFFNavigationFlowDelegate> navigationFlowDelegate; // @synthesize navigationFlowDelegate=_navigationFlowDelegate;
@property(readonly, nonatomic) __weak BFFNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000017148
- (void)removeViewControllersOnNextPush:(id)arg1;	// IMP=0x00000000000170d6
- (void)pushFlowItem:(id)arg1 inFlow:(id)arg2 withExtendedInitialization:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x000000000001703e
- (void)pushFlowItem:(id)arg1 inFlow:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000016fb0
- (void)pushFlowItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000016f38
- (id)popToBuddyControllerWithClass:(Class)arg1 withOffset:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000016ec5
- (id)popToBuddyControllerWithClass:(Class)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000016e61
- (_Bool)isFlowItemOnTop:(id)arg1;	// IMP=0x0000000000016dea
- (_Bool)controllerNeedsToRunForClass:(Class)arg1;	// IMP=0x0000000000016d97
- (void)flowItemCancelled:(id)arg1;	// IMP=0x0000000000016d91
- (void)flowItemDone:(id)arg1;	// IMP=0x0000000000016d7d
- (void)flowItemDone:(id)arg1 nextItemClass:(Class)arg2;	// IMP=0x0000000000016d03
- (void)flowItemDone:(id)arg1 nextItem:(id)arg2;	// IMP=0x0000000000016c3f
- (id)_viewControllerForBuddyController:(id)arg1;	// IMP=0x0000000000016baf
- (void)configureFlowItem:(id)arg1;	// IMP=0x0000000000016a1c
- (id)createFlowItem:(Class)arg1;	// IMP=0x00000000000168f9
- (id)controllerFollowingControllerClass:(Class)arg1 requestedNext:(Class)arg2;	// IMP=0x0000000000016748
- (id)firstItem;	// IMP=0x00000000000163b8
- (id)precedingItemsClasses;	// IMP=0x00000000000163b0
- (id)precedingItems;	// IMP=0x00000000000160ef
- (void)startFlowAnimated:(_Bool)arg1;	// IMP=0x0000000000015eb8
- (void)dealloc;	// IMP=0x0000000000015e5b
- (id)initWithNavigationController:(id)arg1 flowDelegate:(id)arg2 flowStarter:(id)arg3 dependencyInjector:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015d21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

