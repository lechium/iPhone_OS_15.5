//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFDemoModeFaceRecognitionDataSource, HFItem, HFItemProvider, HFStaticItem, HFStaticItemProvider, HFUserPhotosLibraryItemProvider, HMHome, NSArray;

@interface HUFaceRecognitionLibraryListItemManager : HFItemManager
{
    _Bool _didSendAnalyticsEvent;	// 8 = 0x8
    HFItem *_allowFacialRecognitionItem;	// 16 = 0x10
    HFStaticItem *_knownToHomeItem;	// 24 = 0x18
    unsigned long long _recentsLimit;	// 32 = 0x20
    HMHome *_overrideHome;	// 40 = 0x28
    HFStaticItemProvider *_staticItemProvider;	// 48 = 0x30
    HFUserPhotosLibraryItemProvider *_userPhotosLibraryItemProvider;	// 56 = 0x38
    HFItemProvider *_recentEventsItemProvider;	// 64 = 0x40
    HFDemoModeFaceRecognitionDataSource *_demoDataSource;	// 72 = 0x48
    NSArray *_coalescedPersonEvents;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000160023
@property(nonatomic) _Bool didSendAnalyticsEvent; // @synthesize didSendAnalyticsEvent=_didSendAnalyticsEvent;
@property(retain, nonatomic) NSArray *coalescedPersonEvents; // @synthesize coalescedPersonEvents=_coalescedPersonEvents;
@property(retain, nonatomic) HFDemoModeFaceRecognitionDataSource *demoDataSource; // @synthesize demoDataSource=_demoDataSource;
@property(retain, nonatomic) HFItemProvider *recentEventsItemProvider; // @synthesize recentEventsItemProvider=_recentEventsItemProvider;
@property(retain, nonatomic) HFUserPhotosLibraryItemProvider *userPhotosLibraryItemProvider; // @synthesize userPhotosLibraryItemProvider=_userPhotosLibraryItemProvider;
@property(retain, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(readonly, nonatomic) HMHome *overrideHome; // @synthesize overrideHome=_overrideHome;
@property(nonatomic) unsigned long long recentsLimit; // @synthesize recentsLimit=_recentsLimit;
@property(retain, nonatomic) HFStaticItem *knownToHomeItem; // @synthesize knownToHomeItem=_knownToHomeItem;
@property(retain, nonatomic) HFItem *allowFacialRecognitionItem; // @synthesize allowFacialRecognitionItem=_allowFacialRecognitionItem;
- (void)sendAnalyticsEvent;	// IMP=0x000000000015fa4a
- (id)_homeFuture;	// IMP=0x000000000015f860
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x000000000015f1bc
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x000000000015eb09
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000015ea54
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x000000000015e99f
- (id)initWithHome:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000015e0d6

@end

