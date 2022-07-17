//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFollowUpUI/FLSpecifierTapHandlerDelegate-Protocol.h>

@class AIDAServiceOwnersManager, FLPreferencesFollowUpItemListViewController, NSArray, NSSet, NSString, PSListController;
@protocol FLViewModel;

@interface FLPreferencesController : NSObject <FLSpecifierTapHandlerDelegate>
{
    id <FLViewModel> _topViewModel;	// 8 = 0x8
    FLPreferencesFollowUpItemListViewController *_spyglassController;	// 16 = 0x10
    FLPreferencesFollowUpItemListViewController *_topLevelItemList;	// 24 = 0x18
    NSArray *_groups;	// 32 = 0x20
    NSSet *_spyglassAllowList;	// 40 = 0x28
    _Bool _activityIndicatorActive;	// 48 = 0x30
    AIDAServiceOwnersManager *_serviceOwnersManager;	// 56 = 0x38
    NSString *_primaryAccountID;	// 64 = 0x40
    NSArray *_secondaryAccountIDs;	// 72 = 0x48
    PSListController *_listViewController;	// 80 = 0x50
    CDUnknownBlockType _itemChangeObserver;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000000c529
@property(copy, nonatomic) CDUnknownBlockType itemChangeObserver; // @synthesize itemChangeObserver=_itemChangeObserver;
@property(nonatomic) __weak PSListController *listViewController; // @synthesize listViewController=_listViewController;
- (void)stopSpinnerForSpecifier:(id)arg1;	// IMP=0x000000000000c431
- (void)startSpinnerForSpecifier:(id)arg1;	// IMP=0x000000000000c418
- (void)preflightNetworkConnectivityForHandler:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c2bc
- (void)startPresentingForHandler:(id)arg1 withRemoteController:(id)arg2;	// IMP=0x000000000000c1bd
- (void)_zeroActionFailure:(id)arg1;	// IMP=0x000000000000bf04
- (void)_presentSpecifier:(id)arg1;	// IMP=0x000000000000ba7f
- (void)_handleEmptyRefreshResult:(id)arg1;	// IMP=0x000000000000ba79
- (void)_refreshItemsAndPresentDetailForSpecifier:(id)arg1;	// IMP=0x000000000000b7a6
- (void)loadSpecifier:(id)arg1;	// IMP=0x000000000000b524
- (id)spyglassSpecifiers;	// IMP=0x000000000000b0f3
- (void)_updateSpecifier:(id)arg1 withCommonPropertiesForGroup:(id)arg2;	// IMP=0x000000000000ae51
- (id)_urlBasedSpecifierWithName:(id)arg1;	// IMP=0x000000000000add7
- (id)_deferredLoadSpecifierWithName:(id)arg1;	// IMP=0x000000000000ad76
- (id)_specifierForGroup:(id)arg1;	// IMP=0x000000000000a9d1
- (id)_specifiersForItem:(id)arg1 group:(id)arg2;	// IMP=0x000000000000a3b4
- (id)_topLevelSpecifiersForGroup:(unsigned long long)arg1;	// IMP=0x000000000000976b
- (id)_specifierGroupString:(unsigned long long)arg1;	// IMP=0x0000000000009741
- (id)topLevelSpecifiersForGroup:(unsigned long long)arg1;	// IMP=0x000000000000972f
- (id)topLevelSpecifiers;	// IMP=0x0000000000009718
- (id)initWithViewModel:(id)arg1;	// IMP=0x000000000000964b
- (id)init;	// IMP=0x00000000000095e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
