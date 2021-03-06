//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

#import <HomeUI/HUPresenceUserPickerItemModuleDelegate-Protocol.h>

@class HFEventTriggerBuilder, HFItem, HUPresenceUserPickerItemModule, HUTriggerConditionEditorItemModule, NSString;

@interface HULocationTriggerEditorSummaryItemManager : HFItemManager <HUPresenceUserPickerItemModuleDelegate>
{
    HFEventTriggerBuilder *_triggerBuilder;	// 8 = 0x8
    HUPresenceUserPickerItemModule *_userPickerModule;	// 16 = 0x10
    HUTriggerConditionEditorItemModule *_conditionEditorModule;	// 24 = 0x18
    HFItem *_locationItem;	// 32 = 0x20
    HFItem *_usersInstructionsItem;	// 40 = 0x28
}

+ (id)locationSectionID;	// IMP=0x0000000000337f1f
+ (id)usersListFooterSectionID;	// IMP=0x0000000000337f06
+ (id)usersListSectionID;	// IMP=0x0000000000337eed
+ (id)usersHeaderSectionID;	// IMP=0x0000000000337ee0
- (void).cxx_destruct;	// IMP=0x00000000003398de
@property(retain, nonatomic) HFItem *usersInstructionsItem; // @synthesize usersInstructionsItem=_usersInstructionsItem;
@property(retain, nonatomic) HFItem *locationItem; // @synthesize locationItem=_locationItem;
@property(readonly, nonatomic) HUTriggerConditionEditorItemModule *conditionEditorModule; // @synthesize conditionEditorModule=_conditionEditorModule;
@property(readonly, nonatomic) HUPresenceUserPickerItemModule *userPickerModule; // @synthesize userPickerModule=_userPickerModule;
@property(readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder; // @synthesize triggerBuilder=_triggerBuilder;
- (void)userPickerModule:(id)arg1 didUpdatePresenceEvent:(id)arg2;	// IMP=0x0000000000339706
- (_Bool)_hasCustomLocation;	// IMP=0x0000000000339571
- (_Bool)_canEditLocation;	// IMP=0x0000000000339395
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x00000000003390b0
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x0000000000338d68
- (id)_userPickerOptions;	// IMP=0x0000000000338b46
- (void)updateLocationEventWithRegion:(id)arg1;	// IMP=0x000000000033888c
- (_Bool)canChangeLocation;	// IMP=0x00000000003387fa
- (_Bool)canAddRegionToTriggerBuilder;	// IMP=0x00000000003387e8
- (id)locationEventRegion;	// IMP=0x000000000033864e
- (_Bool)isInstructionsItem:(id)arg1;	// IMP=0x00000000003385f0
- (id)initWithDelegate:(id)arg1 triggerBuilder:(id)arg2;	// IMP=0x0000000000337fe1
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x0000000000337f2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

