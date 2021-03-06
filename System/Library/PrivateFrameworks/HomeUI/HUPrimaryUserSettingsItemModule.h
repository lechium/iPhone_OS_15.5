//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemModule.h>

@class HFItem, HFStaticItemProvider, HMHome, HUPrimaryUserItemProvider;
@protocol HFMediaProfileContainer;

@interface HUPrimaryUserSettingsItemModule : HFItemModule
{
    HMHome *_home;	// 8 = 0x8
    id <HFMediaProfileContainer> _mediaProfileContainer;	// 16 = 0x10
    HFItem *_primaryUserSettingsHeaderItem;	// 24 = 0x18
    HFItem *_homePodAccountSelectionItem;	// 32 = 0x20
    HUPrimaryUserItemProvider *_primaryUserItemProvider;	// 40 = 0x28
    HFStaticItemProvider *_staticItemProvider;	// 48 = 0x30
}

+ (CDUnknownBlockType)_userItemComparator;	// IMP=0x000000000024425e
- (void).cxx_destruct;	// IMP=0x0000000000244d5b
@property(retain, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(retain, nonatomic) HUPrimaryUserItemProvider *primaryUserItemProvider; // @synthesize primaryUserItemProvider=_primaryUserItemProvider;
@property(retain, nonatomic) HFItem *homePodAccountSelectionItem; // @synthesize homePodAccountSelectionItem=_homePodAccountSelectionItem;
@property(retain, nonatomic) HFItem *primaryUserSettingsHeaderItem; // @synthesize primaryUserSettingsHeaderItem=_primaryUserSettingsHeaderItem;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)_updatePrimaryUserSelectionType:(unsigned long long)arg1 user:(id)arg2;	// IMP=0x0000000000244620
- (void)_buildItemProviders;	// IMP=0x00000000002443f6
- (id)updatePrimaryUserSelectionType:(unsigned long long)arg1 user:(id)arg2;	// IMP=0x000000000024424c
- (id)buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x0000000000243f2f
- (id)itemProviders;	// IMP=0x0000000000243ea0
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 mediaProfileContainer:(id)arg3;	// IMP=0x0000000000243ce4

@end

