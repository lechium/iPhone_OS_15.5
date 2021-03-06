//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSLayoutConstraint, NSString;
@protocol CarIncidentsListCardViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CarIncidentsListCardViewController
{
    NSLayoutConstraint *_tableViewHeight;	// 8 = 0x8
    id <CarIncidentsListCardViewControllerDelegate> _delegate;	// 16 = 0x10
    NSArray *_incidentLayoutItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000056fa03
@property(retain, nonatomic) NSArray *incidentLayoutItems; // @synthesize incidentLayoutItems=_incidentLayoutItems;
@property(nonatomic) __weak id <CarIncidentsListCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000056f7dc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000056f718
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x001000000056f70a
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000056f6ed
- (id)uniqueName;	// IMP=0x001000000056f6d3
- (void)_refreshDataSource;	// IMP=0x001000000056f473
- (void)viewDidLayoutSubviews;	// IMP=0x001000000056f432
- (void)viewDidLoad;	// IMP=0x001000000056f0fd
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000056f091

// Remaining properties
@property(nonatomic) struct CGSize availableCardSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

