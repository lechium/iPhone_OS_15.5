//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUEventUIFlowViewController-Protocol.h>
#import <HomeUI/HUPickerCellDelegate-Protocol.h>
#import <HomeUI/HUTriggerConditionEditorItemModuleControllerDelegate-Protocol.h>

@class HFCharacteristicEventBuilderItem, HFEventTriggerBuilder, HUCharacteristicEventItemManager, HUCharacteristicEventOptionItem, HUEventUIFlow, HUTriggerConditionEditorItemModuleController, NSString;

@interface HUCharacteristicEventViewController <HUTriggerConditionEditorItemModuleControllerDelegate, HUPickerCellDelegate, HUEventUIFlowViewController>
{
    HFCharacteristicEventBuilderItem *_eventBuilderItem;	// 8 = 0x8
    HFEventTriggerBuilder *_triggerBuilder;	// 16 = 0x10
    HUTriggerConditionEditorItemModuleController *_conditionModuleController;	// 24 = 0x18
    HUCharacteristicEventOptionItem *_selectedEventOptionItem;	// 32 = 0x20
    HUEventUIFlow *_flow;	// 40 = 0x28
    NSString *_stepIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000003be68c
@property(retain, nonatomic) NSString *stepIdentifier; // @synthesize stepIdentifier=_stepIdentifier;
@property(retain, nonatomic) HUEventUIFlow *flow; // @synthesize flow=_flow;
@property(retain, nonatomic) HUCharacteristicEventOptionItem *selectedEventOptionItem; // @synthesize selectedEventOptionItem=_selectedEventOptionItem;
@property(readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionModuleController; // @synthesize conditionModuleController=_conditionModuleController;
@property(retain, nonatomic) HFEventTriggerBuilder *triggerBuilder; // @synthesize triggerBuilder=_triggerBuilder;
@property(retain, nonatomic) HFCharacteristicEventBuilderItem *eventBuilderItem; // @synthesize eventBuilderItem=_eventBuilderItem;
- (void)pickerViewCell:(id)arg1 didSelectValueAtIndex:(long long)arg2;	// IMP=0x00000000003be4a9
- (id)pickerViewCell:(id)arg1 attributedTitleForValueAtIndex:(long long)arg2;	// IMP=0x00000000003be2fc
- (_Bool)pickerViewCell:(id)arg1 canSelectValueAtIndex:(long long)arg2;	// IMP=0x00000000003be201
- (long long)numberOfValuesForPickerViewCell:(id)arg1;	// IMP=0x00000000003be12c
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;	// IMP=0x00000000003be113
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;	// IMP=0x00000000003be0f0
- (void)_updateTriggerBuilder;	// IMP=0x00000000003bdca3
- (void)_validateNextButton;	// IMP=0x00000000003bdc23
- (id)_commitTriggerBuilder;	// IMP=0x00000000003bdb4e
- (_Bool)_canCommitTriggerBuilder;	// IMP=0x00000000003bdb3c
- (_Bool)_canContinue;	// IMP=0x00000000003bdb09
- (void)_updateVisibleCellCheckmarks;	// IMP=0x00000000003bd87a
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000003bd684
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000003bd4c4
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;	// IMP=0x00000000003bd446
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;	// IMP=0x00000000003bd3c8
- (void)itemManagerDidUpdate:(id)arg1;	// IMP=0x00000000003bd387
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00000000003bd0c2
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000003bc9c4
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000003bc849
- (_Bool)automaticallyUpdatesViewControllerTitle;	// IMP=0x00000000003bc841
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x00000000003bc7d0
- (void)_nextButtonPressed:(id)arg1;	// IMP=0x00000000003bc75f
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000003bc71e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000003bbf55
- (void)viewDidLoad;	// IMP=0x00000000003bbd6f
- (id)itemModuleControllers;	// IMP=0x00000000003bbd0c
- (id)initWithFlow:(id)arg1 stepIdentifier:(id)arg2;	// IMP=0x00000000003bbba0
- (id)initWithEventBuilderItem:(id)arg1 triggerBuilder:(id)arg2;	// IMP=0x00000000003bb9ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUCharacteristicEventItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

