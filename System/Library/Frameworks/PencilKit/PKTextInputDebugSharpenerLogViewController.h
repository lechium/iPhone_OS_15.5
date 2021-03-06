//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PencilKit/UITableViewDataSource-Protocol.h>
#import <PencilKit/UITableViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSURL, PKTextInputDebugLogEntryRerun, PKTextInputDebugSharpenerLog, UILabel, UITableView;

@interface PKTextInputDebugSharpenerLogViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSURL *_sharpenerLogURL;	// 8 = 0x8
    UITableView *__mainTableView;	// 16 = 0x10
    UILabel *__tableHeaderLabel;	// 24 = 0x18
    PKTextInputDebugLogEntryRerun *__currentEntryRerun;	// 32 = 0x20
    NSMutableDictionary *__rerunResultsBySection;	// 40 = 0x28
    PKTextInputDebugSharpenerLog *_sharpenerLog;	// 48 = 0x30
}

+ (_Bool)canLoadFromFileAtURL:(id)arg1;	// IMP=0x0000000000040351
- (void).cxx_destruct;	// IMP=0x00000000000425d3
@property(readonly, nonatomic) PKTextInputDebugSharpenerLog *sharpenerLog; // @synthesize sharpenerLog=_sharpenerLog;
@property(readonly, nonatomic) NSMutableDictionary *_rerunResultsBySection; // @synthesize _rerunResultsBySection=__rerunResultsBySection;
@property(retain, nonatomic) PKTextInputDebugLogEntryRerun *_currentEntryRerun; // @synthesize _currentEntryRerun=__currentEntryRerun;
@property(retain, nonatomic) UILabel *_tableHeaderLabel; // @synthesize _tableHeaderLabel=__tableHeaderLabel;
@property(retain, nonatomic) UITableView *_mainTableView; // @synthesize _mainTableView=__mainTableView;
@property(readonly, nonatomic) NSURL *sharpenerLogURL; // @synthesize sharpenerLogURL=_sharpenerLogURL;
- (void)_rerunRecognitionForEntryAtIndex:(long long)arg1;	// IMP=0x0000000000041b9b
- (void)_handleRerunButton:(id)arg1;	// IMP=0x0000000000041b24
- (void)_handleDoneButton:(id)arg1;	// IMP=0x0000000000041b0b
- (void)_handleActionButton:(id)arg1;	// IMP=0x00000000000414d0
- (id)_tableHeaderText;	// IMP=0x0000000000041394
- (void)_configureCell:(id)arg1 asDrawingDisplayForEntry:(id)arg2;	// IMP=0x0000000000041322
- (void)_configureCell:(id)arg1 withTitle:(id)arg2 details:(id)arg3;	// IMP=0x000000000004113c
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000004111a
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000040e10
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000040d80
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000040d12
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000040b40
- (void)viewDidLoad;	// IMP=0x00000000000404b4
- (id)initWithSharpenerLog:(id)arg1;	// IMP=0x0000000000040411
- (id)initWithSharpenerLogURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004036a
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000040349

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

