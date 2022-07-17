//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRoute, NSArray, NSString;
@protocol CarAdvisoryListCardViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CarAdvisoryListCardViewController
{
    NSArray *_sections;	// 8 = 0x8
    GEOComposedRoute *_route;	// 16 = 0x10
    NSArray *_incidents;	// 24 = 0x18
    NSArray *_advisoryCards;	// 32 = 0x20
    NSArray *_advisoryItems;	// 40 = 0x28
    id <CarAdvisoryListCardViewControllerDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000005aca2e
@property(nonatomic) __weak id <CarAdvisoryListCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *advisoryItems; // @synthesize advisoryItems=_advisoryItems;
@property(retain, nonatomic) NSArray *advisoryCards; // @synthesize advisoryCards=_advisoryCards;
@property(retain, nonatomic) NSArray *incidents; // @synthesize incidents=_incidents;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (long long)_sectionForSectionIndex:(long long)arg1;	// IMP=0x00100000005ac840
- (void)_compileSections;	// IMP=0x00100000005ac751
- (unsigned long long)numberOfItems;	// IMP=0x00100000005ac6db
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000005ac50f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000005ac4c2
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000005ac4a5
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000005ac35d
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x00100000005ac211
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000005ac203
- (id)uniqueName;	// IMP=0x00100000005ac1e9
- (void)viewDidLoad;	// IMP=0x00100000005abe85
- (id)initWithRoute:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000005abc9d

// Remaining properties
@property(nonatomic) struct CGSize availableCardSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
