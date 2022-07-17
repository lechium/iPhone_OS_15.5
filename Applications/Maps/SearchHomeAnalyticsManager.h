//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SearchHomeAnalyticsManager : NSObject
{
    struct {
        int action;
        NSString *value;
        NSNumber *collectionId;
        NSArray *publisherIds;
        NSNumber *verticalIndex;
        NSNumber *collectionCurrentlySaved;
        int target;
        NSNumber *horizontalIndex;
    } _curatedCollectionEvent;	// 8 = 0x8
    struct {
        int action;
        int target;
        NSArray *suggestions;
        NSNumber *selectedIndex;
    } _recentEvent;	// 72 = 0x48
    struct {
        int action;
        int target;
    } _browseCategoryEvent;	// 96 = 0x60
    struct {
        NSArray *suggestions;
    } _noTypingACEvent;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000002708e1
- (void)logNoTypingACEvent;	// IMP=0x0010000000270897
- (void)autocompleteSessionsStartedWithVisibleSuggestions:(id)arg1;	// IMP=0x0010000000270837
- (void)browseCategoryTapped;	// IMP=0x0010000000270812
- (void)logRecentEvent;	// IMP=0x00100000002707a3
- (void)recentTappedAtIndex:(unsigned long long)arg1 visibleSuggestions:(id)arg2;	// IMP=0x0010000000270700
- (id)curatedCollectionEventDebugDescription;	// IMP=0x0010000000269a0c
- (void)logCuratedCollectionsEvent;	// IMP=0x001000000026999b
- (void)cityGuidesMoreButtonTapped;	// IMP=0x0010000000269966
- (void)exploreGuidesButtonTapped;	// IMP=0x0010000000269931
- (void)guideLocationTappedWithMuid:(unsigned long long)arg1 horizontalIndex:(unsigned long long)arg2;	// IMP=0x0010000000269872
- (void)publisherTappedWithMuid:(unsigned long long)arg1 verticalIndex:(unsigned long long)arg2;	// IMP=0x001000000026977e
- (void)showAllCollectionsTapped;	// IMP=0x0010000000269749
- (void)curatedCollectionsTappedWithMuid:(unsigned long long)arg1 horizontalIndex:(unsigned long long)arg2 isCurrentlySaved:(_Bool)arg3;	// IMP=0x001000000026966c
- (void)cleanup;	// IMP=0x00100000002695df
- (id)init;	// IMP=0x0010000000269588

@end
