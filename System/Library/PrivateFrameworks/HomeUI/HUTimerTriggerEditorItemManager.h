//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFStaticItem, HFTimerTriggerBuilder, HUInstructionsItem, HUTriggerConditionEditorItemModule, NSDateComponents, NSMutableDictionary, NSSet;

@interface HUTimerTriggerEditorItemManager : HFItemManager
{
    _Bool _datePickerShown;	// 8 = 0x8
    NSDateComponents *_defaultFireTimeComponents;	// 16 = 0x10
    HFTimerTriggerBuilder *_timerTriggerBuilder;	// 24 = 0x18
    HUTriggerConditionEditorItemModule *_conditionModule;	// 32 = 0x20
    HFStaticItem *_sunriseOptionItem;	// 40 = 0x28
    HFStaticItem *_sunsetOptionItem;	// 48 = 0x30
    HFStaticItem *_timeOptionItem;	// 56 = 0x38
    HFStaticItem *_datePickerItem;	// 64 = 0x40
    HFStaticItem *_recurrencesItem;	// 72 = 0x48
    HUInstructionsItem *_instructionsItem;	// 80 = 0x50
    HUInstructionsItem *_recurrencesInstructionsItem;	// 88 = 0x58
    NSMutableDictionary *_significantEventToDefaultOffsetMap;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000037ca49
@property(readonly, nonatomic) NSMutableDictionary *significantEventToDefaultOffsetMap; // @synthesize significantEventToDefaultOffsetMap=_significantEventToDefaultOffsetMap;
@property(retain, nonatomic) HUInstructionsItem *recurrencesInstructionsItem; // @synthesize recurrencesInstructionsItem=_recurrencesInstructionsItem;
@property(retain, nonatomic) HUInstructionsItem *instructionsItem; // @synthesize instructionsItem=_instructionsItem;
@property(retain, nonatomic) HFStaticItem *recurrencesItem; // @synthesize recurrencesItem=_recurrencesItem;
@property(retain, nonatomic) HFStaticItem *datePickerItem; // @synthesize datePickerItem=_datePickerItem;
@property(retain, nonatomic) HFStaticItem *timeOptionItem; // @synthesize timeOptionItem=_timeOptionItem;
@property(retain, nonatomic) HFStaticItem *sunsetOptionItem; // @synthesize sunsetOptionItem=_sunsetOptionItem;
@property(retain, nonatomic) HFStaticItem *sunriseOptionItem; // @synthesize sunriseOptionItem=_sunriseOptionItem;
@property(nonatomic) _Bool datePickerShown; // @synthesize datePickerShown=_datePickerShown;
@property(retain, nonatomic) HUTriggerConditionEditorItemModule *conditionModule; // @synthesize conditionModule=_conditionModule;
@property(readonly, nonatomic) HFTimerTriggerBuilder *timerTriggerBuilder; // @synthesize timerTriggerBuilder=_timerTriggerBuilder;
@property(retain, nonatomic) NSDateComponents *defaultFireTimeComponents; // @synthesize defaultFireTimeComponents=_defaultFireTimeComponents;
- (void)setDefaultOffset:(id)arg1 forSignificantEvent:(id)arg2;	// IMP=0x000000000037c844
- (id)defaultOffsetForSignificantEvent:(id)arg1;	// IMP=0x000000000037c7b6
- (void)updateForSignificantEventOffsetChange;	// IMP=0x000000000037c6af
- (id)_itemsToHideInSet:(id)arg1;	// IMP=0x000000000037c5a5
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x000000000037c026
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x000000000037bdc6
@property(readonly, nonatomic) NSSet *dateOptionsItems;
- (id)initWithTimerTriggerBuilder:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000037b2aa
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x000000000037b1f5

@end
