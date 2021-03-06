//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <ToneKit/PSStateRestoration-Protocol.h>
#import <ToneKit/TKTonePickerTableViewLayoutMarginsObserver-Protocol.h>
#import <ToneKit/TKTonePickerTableViewSeparatorObserver-Protocol.h>

@class NSString, TKTonePickerItem;
@protocol TKTonePickerTableViewControllerHelper;

@interface TKToneClassicsTableViewController : UITableViewController <PSStateRestoration, TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver>
{
    TKTonePickerItem *_classicTonesHeaderItem;	// 8 = 0x8
    id <TKTonePickerTableViewControllerHelper> _tonePickerTableViewControllerHelper;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001b7e8
@property(nonatomic) __weak id <TKTonePickerTableViewControllerHelper> tonePickerTableViewControllerHelper; // @synthesize tonePickerTableViewControllerHelper=_tonePickerTableViewControllerHelper;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000001b708
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000001b619
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000001af57
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000001af00
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000001aef5
- (void)separatorColorDidChangeInTonePickerTableView:(id)arg1;	// IMP=0x000000000001ae83
- (void)layoutMarginsDidChangeInTonePickerTableView:(id)arg1;	// IMP=0x000000000001ac10
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000001ac08
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001ab94
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001a942
- (void)loadView;	// IMP=0x000000000001a8f6
- (void)didUpdateDetailText:(id)arg1 ofToneClassicsPickerItem:(id)arg2;	// IMP=0x000000000001a7fb
- (void)didUpdateCheckedStatus:(_Bool)arg1 ofToneClassicsPickerItem:(id)arg2;	// IMP=0x000000000001a6fd
- (void)didReloadTones;	// IMP=0x000000000001a6a4
- (void)dealloc;	// IMP=0x000000000001a4e8
- (id)initWithClassicTonesHeaderItem:(id)arg1;	// IMP=0x000000000001a442
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x0000000000026360

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

