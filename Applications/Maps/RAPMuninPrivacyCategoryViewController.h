//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSString, RAPMuninQuestion, RAPReport;

__attribute__((visibility("hidden")))
@interface RAPMuninPrivacyCategoryViewController : UITableViewController
{
    RAPMuninQuestion *_question;	// 8 = 0x8
    RAPReport *_report;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000009a9689
- (void)_captureUserAction:(int)arg1;	// IMP=0x00100000009a9643
@property(readonly, nonatomic) int analyticTarget;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000009a94ca
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000009a947b
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000009a9470
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000009a9307
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00100000009a9251
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000009a9172
- (void)viewDidLoad;	// IMP=0x00100000009a903e

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
