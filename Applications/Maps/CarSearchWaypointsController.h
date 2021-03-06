//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface CarSearchWaypointsController
{
    NSArray *_searchResults;	// 8 = 0x8
    unsigned long long _selectedIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000098f2ab
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly, copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (unsigned long long)totalDestinations;	// IMP=0x001000000098f245
- (unsigned long long)indexOfCurrentDestination;	// IMP=0x001000000098f233
- (id)subtitleForCurrentDestination;	// IMP=0x001000000098f1b9
- (id)titleForCurrentDestination;	// IMP=0x001000000098f169
- (id)destinationSearchResultIfAvailable;	// IMP=0x001000000098f0fd
- (void)previousPlaceWithTraits:(id)arg1;	// IMP=0x001000000098f06b
- (void)nextPlaceWithTraits:(id)arg1;	// IMP=0x001000000098efd9
@property(readonly, nonatomic) id visuallySelectedItem;
- (id)initWithSearchResults:(id)arg1 selectedIndex:(unsigned long long)arg2;	// IMP=0x001000000098ee75

@end

