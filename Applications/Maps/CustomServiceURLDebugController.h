//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface CustomServiceURLDebugController : UITableViewController
{
    UITextField *_textField;	// 8 = 0x8
    CDStruct_8ce276cf _defaultsKey;	// 16 = 0x10
    NSString *_defaultURLString;	// 32 = 0x20
    CDUnknownBlockType _callback;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000005774d2
@property(copy, nonatomic) NSString *defaultURLString; // @synthesize defaultURLString=_defaultURLString;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) CDStruct_8ce276cf defaultsKey; // @synthesize defaultsKey=_defaultsKey;
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0010000000577417
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0010000000577304
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000005772e7
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000577017
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000057700c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000577001
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000576fc1
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000576f6e
- (void)dealloc;	// IMP=0x0010000000576f23
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000576de2
- (id)title;	// IMP=0x0010000000576dd5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

