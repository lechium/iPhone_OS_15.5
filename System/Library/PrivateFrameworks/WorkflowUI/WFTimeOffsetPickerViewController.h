//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UIPickerView, UITableView;
@protocol WFTimeOffsetPickerViewControllerDelegate;

@interface WFTimeOffsetPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <WFTimeOffsetPickerViewControllerDelegate> _delegate;	// 8 = 0x8
    unsigned long long _event;	// 16 = 0x10
    UIPickerView *_currentPickerView;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    NSArray *_sections;	// 40 = 0x28
    NSArray *_tableViewItems;	// 48 = 0x30
    unsigned long long _timeOffset;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001c5740
@property(nonatomic) unsigned long long timeOffset; // @synthesize timeOffset=_timeOffset;
@property(readonly, nonatomic) NSArray *tableViewItems; // @synthesize tableViewItems=_tableViewItems;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIPickerView *currentPickerView; // @synthesize currentPickerView=_currentPickerView;
@property(readonly, nonatomic) unsigned long long event; // @synthesize event=_event;
@property(nonatomic) __weak id <WFTimeOffsetPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)titleForRow:(long long)arg1;	// IMP=0x00000000001c55c0
- (void)done:(id)arg1;	// IMP=0x00000000001c5564
- (void)cancel:(id)arg1;	// IMP=0x00000000001c5518
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001c5471
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000001c5417
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001c52b2
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001c51ee
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001c51aa
- (id)infoForSection:(long long)arg1;	// IMP=0x00000000001c514b
- (void)loadView;	// IMP=0x00000000001c4fdd
- (id)initWithTimeTriggerEvent:(unsigned long long)arg1 timeOffset:(unsigned long long)arg2;	// IMP=0x00000000001c4d60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

