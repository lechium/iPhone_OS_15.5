//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUNameAndIconEditorCellDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>
#import <HomeUI/HUTriggerActionSetsModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUTriggerConditionEditorItemModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUTriggerDurationModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUTriggerEditorDelegate-Protocol.h>
#import <HomeUI/HUTriggerEventsModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUTriggerMediaModuleControllerDelegate-Protocol.h>
#import <HomeUI/UITextViewDelegate-Protocol.h>
#import <HomeUI/WFHomeComposeViewControllerDelegate-Protocol.h>

@class HFTriggerBuilder, HUForwardingTriggerActionBuilderDelegate, HUTriggerActionFlow, HUTriggerActionSetsModuleController, HUTriggerConditionEditorItemModuleController, HUTriggerSummaryItemManager, NSSet, NSString;
@protocol HUTriggerEditorDelegate;

@interface HUTriggerSummaryViewController <HUTriggerEditorDelegate, HUSwitchCellDelegate, HUTriggerActionSetsModuleControllerDelegate, UITextViewDelegate, WFHomeComposeViewControllerDelegate, HUNameAndIconEditorCellDelegate, HUTriggerEventsModuleControllerDelegate, HUTriggerDurationModuleControllerDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUTriggerMediaModuleControllerDelegate>
{
    _Bool _viewHasAppeared;	// 8 = 0x8
    _Bool _isEditingExistingTrigger;	// 9 = 0x9
    _Bool _detailEditorChangedTrigger;	// 10 = 0xa
    HFTriggerBuilder *_triggerBuilder;	// 16 = 0x10
    id <HUTriggerEditorDelegate> _delegate;	// 24 = 0x18
    HUForwardingTriggerActionBuilderDelegate *_forwardingTriggerActionBuilderDelegate;	// 32 = 0x20
    NSString *_editingName;	// 40 = 0x28
    HUTriggerActionFlow *_flow;	// 48 = 0x30
    HUTriggerActionSetsModuleController *_actionSetsModuleController;	// 56 = 0x38
    HUTriggerConditionEditorItemModuleController *_conditionEditorModuleController;	// 64 = 0x40
}

+ (_Bool)adoptsDefaultGridLayoutMargins;	// IMP=0x00000000000b22f4
+ (id)createTriggerSummaryViewControllerForHome:(id)arg1 withTriggerActionSetBuilder:(id)arg2 andTriggerActionBuilderEditorDelegate:(id)arg3;	// IMP=0x00000000000b04c4
- (void).cxx_destruct;	// IMP=0x00000000000b5e16
@property(retain, nonatomic) HUTriggerConditionEditorItemModuleController *conditionEditorModuleController; // @synthesize conditionEditorModuleController=_conditionEditorModuleController;
@property(retain, nonatomic) HUTriggerActionSetsModuleController *actionSetsModuleController; // @synthesize actionSetsModuleController=_actionSetsModuleController;
@property(nonatomic) _Bool detailEditorChangedTrigger; // @synthesize detailEditorChangedTrigger=_detailEditorChangedTrigger;
@property(retain, nonatomic) HUTriggerActionFlow *flow; // @synthesize flow=_flow;
@property(copy, nonatomic) NSString *editingName; // @synthesize editingName=_editingName;
@property(nonatomic) _Bool isEditingExistingTrigger; // @synthesize isEditingExistingTrigger=_isEditingExistingTrigger;
@property(retain, nonatomic) HUForwardingTriggerActionBuilderDelegate *forwardingTriggerActionBuilderDelegate; // @synthesize forwardingTriggerActionBuilderDelegate=_forwardingTriggerActionBuilderDelegate;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(nonatomic) __weak id <HUTriggerEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HFTriggerBuilder *triggerBuilder; // @synthesize triggerBuilder=_triggerBuilder;
- (void)homeComposeViewController:(id)arg1 didFinishWithHomeWorkflow:(id)arg2;	// IMP=0x00000000000b5bca
- (void)_sendNameAssignedEvent:(id)arg1 error:(id)arg2;	// IMP=0x00000000000b59c5
- (void)_commitTriggerBuilder;	// IMP=0x00000000000b545b
- (_Bool)_canCommitTriggerBuilder;	// IMP=0x00000000000b533f
- (void)_updateTableHeaderConfiguration;	// IMP=0x00000000000b5145
- (void)_updateTriggerBuilderName;	// IMP=0x00000000000b4dde
- (void)textFieldDidFinishEditing:(id)arg1;	// IMP=0x00000000000b4c9a
- (void)serviceGridViewController:(id)arg1 didTapItem:(id)arg2;	// IMP=0x00000000000b4adb
- (void)mediaModuleController:(id)arg1 pushViewController:(id)arg2;	// IMP=0x00000000000b4a68
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;	// IMP=0x00000000000b4a4f
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;	// IMP=0x00000000000b4a2c
- (void)_showEditorForTriggerBuilderItem:(id)arg1;	// IMP=0x00000000000b45ca
- (void)eventsModuleControllerDidUpdateTriggerBuilder:(id)arg1;	// IMP=0x00000000000b458d
- (void)eventsModuleController:(id)arg1 pushViewController:(id)arg2;	// IMP=0x00000000000b451a
- (void)durationModuleController:(id)arg1 requestsScrollToItem:(id)arg2;	// IMP=0x00000000000b443e
- (void)actionSetsModuleController:(id)arg1 didUpdateTriggerBuilder:(id)arg2;	// IMP=0x00000000000b4401
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x00000000000b42f7
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;	// IMP=0x00000000000b41b1
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;	// IMP=0x00000000000b406c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000b3e35
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000000b3bc2
- (id)contentConfigurationForFooterViewAtSectionIndex:(unsigned long long)arg1;	// IMP=0x00000000000b3b25
- (id)contentConfigurationForHeaderViewAtSectionIndex:(unsigned long long)arg1;	// IMP=0x00000000000b39b9
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;	// IMP=0x00000000000b39a7
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;	// IMP=0x00000000000b38a5
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;	// IMP=0x00000000000b3893
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;	// IMP=0x00000000000b37e8
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;	// IMP=0x00000000000b373d
- (_Bool)shouldManageTextFieldForItem:(id)arg1;	// IMP=0x00000000000b3735
- (void)_updateDurationModuleDynamicFooterView;	// IMP=0x00000000000b35d5
- (void)diffableDataItemManager:(id)arg1 didUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4;	// IMP=0x00000000000b34d2
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000b33d6
- (void)itemManagerDidUpdate:(id)arg1;	// IMP=0x00000000000b3395
- (id)childViewControllersToPreload;	// IMP=0x00000000000b3345
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000000b3235
- (id)buildItemModuleControllerForModule:(id)arg1;	// IMP=0x00000000000b2ffa
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00000000000b2981
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;	// IMP=0x00000000000b2900
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000000b2711
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000000b23e3
- (id)itemTableHeaderMessage;	// IMP=0x00000000000b22fc
- (void)_removeActionsInServiceActionItem:(id)arg1;	// IMP=0x00000000000b1eb6
- (void)_setTriggerEnabled:(_Bool)arg1;	// IMP=0x00000000000b1e37
- (void)_deleteTrigger:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000000b18b9
- (void)_addAction:(id)arg1;	// IMP=0x00000000000b1770
- (void)_testTrigger;	// IMP=0x00000000000b137a
- (void)_cancelShortcutEditor:(id)arg1;	// IMP=0x00000000000b1361
- (void)_showShortcutEditorForTriggerBuilderItem:(id)arg1;	// IMP=0x00000000000b1128
- (void)_cancel:(id)arg1;	// IMP=0x00000000000b10da
- (void)_done:(id)arg1;	// IMP=0x00000000000b0f24
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000b0e4f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000b0d54
@property(readonly, nonatomic) NSString *savedName;
@property(copy, nonatomic) NSSet *prioritizedHomeObjects;
- (id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000000b07b0
- (id)initWithTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 isPresentedModally:(_Bool)arg3 delegate:(id)arg4;	// IMP=0x00000000000b070a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUTriggerSummaryItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

