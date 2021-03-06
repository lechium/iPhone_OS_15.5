//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HURecommendedTriggerItemModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUTriggerEditorDelegate-Protocol.h>

@class HFActionSetBuilder, HURecommendedTriggerItemModuleController, HUTriggerTypePickerItemManager, NSArray, NSString;
@protocol HUTriggerEditorDelegate;

@interface HUTriggerTypePickerViewController <HURecommendedTriggerItemModuleControllerDelegate, HUTriggerEditorDelegate>
{
    id <HUTriggerEditorDelegate> _delegate;	// 8 = 0x8
    HFActionSetBuilder *_actionSetBuilder;	// 16 = 0x10
    NSArray *_anonymousActionBuilders;	// 24 = 0x18
    HURecommendedTriggerItemModuleController *_recommendationModuleController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002fe753
@property(readonly, nonatomic) __weak HURecommendedTriggerItemModuleController *recommendationModuleController; // @synthesize recommendationModuleController=_recommendationModuleController;
@property(retain, nonatomic) NSArray *anonymousActionBuilders; // @synthesize anonymousActionBuilders=_anonymousActionBuilders;
@property(retain, nonatomic) HFActionSetBuilder *actionSetBuilder; // @synthesize actionSetBuilder=_actionSetBuilder;
@property(nonatomic) __weak id <HUTriggerEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_createTriggerBuilderOfClass:(Class)arg1;	// IMP=0x00000000002fe47b
- (id)_createTriggerEditorForItem:(id)arg1;	// IMP=0x00000000002fdafd
- (void)recommendedTriggerModuleControllerDidSelectShowMore:(id)arg1;	// IMP=0x00000000002fd829
- (void)recommendedTriggerModuleController:(id)arg1 didSelectToOpenTriggerBuilder:(id)arg2;	// IMP=0x00000000002fd64c
- (void)triggerEditor:(id)arg1 didCommitTriggerBuilder:(id)arg2 withError:(id)arg3;	// IMP=0x00000000002fd3d4
- (_Bool)triggerEditor:(id)arg1 shouldCommitTriggerBuilder:(id)arg2;	// IMP=0x00000000002fd30b
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;	// IMP=0x00000000002fd285
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002fd0ba
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;	// IMP=0x00000000002fd0aa
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;	// IMP=0x00000000002fd09a
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00000000002fceda
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000002fce77
- (id)buildItemModuleControllerForModule:(id)arg1;	// IMP=0x00000000002fcd8e
- (void)_cancel:(id)arg1;	// IMP=0x00000000002fcd40
@property(nonatomic) _Bool showSuggestedAutomations;
- (id)initWithActionSetBuilder:(id)arg1 anonymousActionBuilders:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000002fcabf
- (id)initWithActionSetBuilder:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000002fcaa3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUTriggerTypePickerItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

