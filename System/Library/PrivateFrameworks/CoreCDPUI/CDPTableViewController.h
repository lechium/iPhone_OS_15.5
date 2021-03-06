//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CoreCDPUI/UITableViewDataSource-Protocol.h>
#import <CoreCDPUI/UITableViewDelegate-Protocol.h>

@class BFFPaneHeaderView, NSString, UIImage, UITableView, UIView;

@interface CDPTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_headerTitle;	// 8 = 0x8
    NSString *_headerSubTitle;	// 16 = 0x10
    long long _tableViewStyle;	// 24 = 0x18
    UIImage *_icon;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
    UIView *_containerView;	// 48 = 0x30
    UITableView *_tableView;	// 56 = 0x38
    BFFPaneHeaderView *_headerView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000002a8e7
@property(retain, nonatomic) BFFPaneHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) long long tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
@property(copy, nonatomic) NSString *headerSubTitle; // @synthesize headerSubTitle=_headerSubTitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002a7e5
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000002a7dd
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000002a7d5
- (id)viewForHeaderInTableView:(id)arg1;	// IMP=0x000000000002a7c3
- (double)heightForHeaderInTableView:(id)arg1;	// IMP=0x000000000002a720
- (void)viewDidLayoutSubviews;	// IMP=0x000000000002a57b
@property(readonly, nonatomic) _Bool uiTestMode;
@property(readonly, nonatomic) _Bool isiPhone5OrSmaller;
@property(readonly, nonatomic) _Bool isIPad;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000002a1cf
- (void)loadView;	// IMP=0x0000000000029f44
@property(readonly, copy, nonatomic) NSString *deviceClass;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2;	// IMP=0x0000000000029e38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

