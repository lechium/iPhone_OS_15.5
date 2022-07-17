//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemModule.h>

#import <HomeUI/HFItemHiding-Protocol.h>

@class HFStaticItem, HMHome, HRERecommendationItemProvider, NSString;

@interface HURecommendedTriggerItemModule : HFItemModule <HFItemHiding>
{
    _Bool _hideSectionHeaderTitle;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    HFStaticItem *_moreButtonItem;	// 24 = 0x18
    long long _maximumNumberOfShownRecommendations;	// 32 = 0x20
    CDUnknownBlockType _filter;	// 40 = 0x28
    CDUnknownBlockType _configureBlock;	// 48 = 0x30
    unsigned long long _engineOptions;	// 56 = 0x38
    HRERecommendationItemProvider *_recommendationItemProvider;	// 64 = 0x40
}

+ (CDUnknownBlockType)rankComparator;	// IMP=0x0000000000198340
+ (_Bool)shouldShowRecommendation:(id)arg1;	// IMP=0x0000000000197f21
- (void).cxx_destruct;	// IMP=0x00000000001986ee
@property(retain, nonatomic) HRERecommendationItemProvider *recommendationItemProvider; // @synthesize recommendationItemProvider=_recommendationItemProvider;
@property(nonatomic) unsigned long long engineOptions; // @synthesize engineOptions=_engineOptions;
@property(copy, nonatomic) CDUnknownBlockType configureBlock; // @synthesize configureBlock=_configureBlock;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(nonatomic) _Bool hideSectionHeaderTitle; // @synthesize hideSectionHeaderTitle=_hideSectionHeaderTitle;
@property(nonatomic) long long maximumNumberOfShownRecommendations; // @synthesize maximumNumberOfShownRecommendations=_maximumNumberOfShownRecommendations;
@property(retain, nonatomic) HFStaticItem *moreButtonItem; // @synthesize moreButtonItem=_moreButtonItem;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (unsigned long long)_effectiveRecommendationEngineOptionsWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000197f13
- (id)_itemsToHideInSet:(id)arg1;	// IMP=0x0000000000197c94
- (id)buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x0000000000197a1c
- (id)_buildStaticItems;	// IMP=0x00000000001978a6
- (id)buildItemProviders;	// IMP=0x0000000000197487
- (id)initWithItemUpdater:(id)arg1;	// IMP=0x000000000019727b
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;	// IMP=0x00000000001971da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
