//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, UIFocusContainerGuide;
@protocol SRStarkTableViewControllerDelegate;

@interface SRStarkTableViewController : UITableViewController
{
    _Bool _fullScreen;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    id <SRStarkTableViewControllerDelegate> _delegate;	// 24 = 0x18
    long long _initialNumberOfRowsToDisplay;	// 32 = 0x20
    UIFocusContainerGuide *_tableViewFocusContainerGuide;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000002deb8
@property(retain, nonatomic) UIFocusContainerGuide *tableViewFocusContainerGuide; // @synthesize tableViewFocusContainerGuide=_tableViewFocusContainerGuide;
@property(nonatomic, getter=_initialNumberOfRowsToDisplay) long long initialNumberOfRowsToDisplay; // @synthesize initialNumberOfRowsToDisplay=_initialNumberOfRowsToDisplay;
@property(nonatomic, getter=_delegate) __weak id <SRStarkTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=_items) NSArray *items; // @synthesize items=_items;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
- (void)_updateVibrancyForButton:(id)arg1 forUserInterfaceStyle:(long long)arg2;	// IMP=0x001000000002dcec
- (void)_updateVibrancyForTableViewPagingIndicators:(id)arg1 forUserInterfaceStyle:(long long)arg2;	// IMP=0x001000000002db46
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000002db09
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000002d853
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x001000000002d80e
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002d5da
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000002d52f
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000002d524
- (_Bool)isShowMoreRow:(unsigned long long)arg1;	// IMP=0x001000000002d42a
- (id)preferredFocusEnvironments;	// IMP=0x001000000002d39f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000002d2fa
- (void)viewWillLayoutSubviews;	// IMP=0x001000000002d1d0
- (void)viewDidLoad;	// IMP=0x001000000002cf25
- (id)initWithInitialNumberOfItemsToDisplay:(long long)arg1 items:(id)arg2 delegate:(id)arg3;	// IMP=0x001000000002ce06

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
