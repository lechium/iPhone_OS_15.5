//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSObject, PKPrintingMessageView;
@protocol OS_dispatch_queue;

@interface PKPrintStatusJobsViewController : UITableViewController
{
    NSArray *_jobs;	// 8 = 0x8
    _Bool _autoPush;	// 16 = 0x10
    PKPrintingMessageView *_noJobsView;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_jobsWorkQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000007bbd
- (void)openURL:(id)arg1;	// IMP=0x0010000000007898
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x001000000000771c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000000076ae
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000000075ad
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000007590
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00100000000074e5
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000007463
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000007207
- (void)willReappear;	// IMP=0x001000000000706c
- (void)handleJobListDidChange;	// IMP=0x0010000000006f07
- (void)updateJobInfo:(id)arg1;	// IMP=0x00100000000065f4
- (void)updateTableViewCell:(id)arg1 withJob:(id)arg2;	// IMP=0x0010000000006332
- (id)visibleJobs;	// IMP=0x0010000000006134
- (void)updateForJobCountChange;	// IMP=0x001000000000600c
- (void)pushSingleJobAnimated:(_Bool)arg1;	// IMP=0x0010000000005fae
- (void)pushJob:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000005f05
- (void)loadView;	// IMP=0x0010000000005d95
- (void)dealloc;	// IMP=0x0010000000005d06
- (id)init;	// IMP=0x0010000000005be9

@end

