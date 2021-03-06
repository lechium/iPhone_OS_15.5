//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIDebuggingInformationViewController-Protocol.h>
#import <UIKitCore/UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate-Protocol.h>
#import <UIKitCore/UITableViewDataSource-Protocol.h>
#import <UIKitCore/UITableViewDelegate-Protocol.h>

@class NSString, UITableView;

__attribute__((visibility("hidden")))
@interface UIDebuggingKBAutoFillViewController <UITableViewDataSource, UITableViewDelegate, UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate, UIDebuggingInformationViewController>
{
    UITableView *_tableView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000010de371
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010de2cb
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000010de2c0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000010de236
- (void)autoFillTestGroundTruthGenerationViewController:(id)arg1 didFinishWithResult:(id)arg2;	// IMP=0x00000000010dd83c
- (id)_formTypeFileName:(long long)arg1;	// IMP=0x00000000010dd7d1
- (void)_archiveTopMostViewControllerForAutoFillTest;	// IMP=0x00000000010dd62d
- (id)_getTopMostViewControllerInWindow:(id)arg1;	// IMP=0x00000000010dd52a
- (void)viewDidLoad;	// IMP=0x00000000010dd36c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

