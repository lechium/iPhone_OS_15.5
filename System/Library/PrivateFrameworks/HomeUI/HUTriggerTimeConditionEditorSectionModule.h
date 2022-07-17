//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFItem, HFTransformItem, NSArray;

@interface HUTriggerTimeConditionEditorSectionModule
{
    HFItem *_anyTimeOptionItem;	// 8 = 0x8
    HFTransformItem *_onlyDayOptionItem;	// 16 = 0x10
    HFTransformItem *_onlyNightOptionItem;	// 24 = 0x18
    HFTransformItem *_specificTimesOptionItem;	// 32 = 0x20
    HFTransformItem *_customOptionItem;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001b6054
@property(retain, nonatomic) HFTransformItem *customOptionItem; // @synthesize customOptionItem=_customOptionItem;
@property(retain, nonatomic) HFTransformItem *specificTimesOptionItem; // @synthesize specificTimesOptionItem=_specificTimesOptionItem;
@property(retain, nonatomic) HFTransformItem *onlyNightOptionItem; // @synthesize onlyNightOptionItem=_onlyNightOptionItem;
@property(retain, nonatomic) HFTransformItem *onlyDayOptionItem; // @synthesize onlyDayOptionItem=_onlyDayOptionItem;
@property(retain, nonatomic) HFItem *anyTimeOptionItem; // @synthesize anyTimeOptionItem=_anyTimeOptionItem;
- (id)_createConditionItemForType:(unsigned long long)arg1;	// IMP=0x00000000001b5c27
- (id)_conditionItemForType:(unsigned long long)arg1;	// IMP=0x00000000001b5bf1
- (_Bool)doesOptionItemRequireInitialUserConfiguration:(id)arg1;	// IMP=0x00000000001b5b26
- (id)buildConditionOptionItems;	// IMP=0x00000000001b595e
- (_Bool)conditionIsDisabled;	// IMP=0x00000000001b5956
- (id)noConditionSummaryTitle;	// IMP=0x00000000001b593d
- (id)conditionTitle;	// IMP=0x00000000001b5924
- (id)preferredConditionFromConditions:(id)arg1;	// IMP=0x00000000001b5820
- (id)selectOptionItemForCondition:(id)arg1;	// IMP=0x00000000001b56f9
- (id)conditionForOptionItem:(id)arg1;	// IMP=0x00000000001b5535

// Remaining properties
@property(readonly, nonatomic) NSArray *optionItems; // @dynamic optionItems;

@end
