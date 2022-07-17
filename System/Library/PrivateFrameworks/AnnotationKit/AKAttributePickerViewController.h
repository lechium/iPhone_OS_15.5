//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AnnotationKit/UITableViewDataSource-Protocol.h>
#import <AnnotationKit/UITableViewDelegate-Protocol.h>

@class AKController, NSArray, NSSet, NSString, UITableView;
@protocol AKAttributePickerViewControllerDelegate;

@interface AKAttributePickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    AKController *_controller;	// 8 = 0x8
    id <AKAttributePickerViewControllerDelegate> _delegate;	// 16 = 0x10
    NSSet *_selectedAnnotations;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    NSArray *_rowViews;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009b965
@property(retain) NSArray *rowViews; // @synthesize rowViews=_rowViews;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSSet *selectedAnnotations; // @synthesize selectedAnnotations=_selectedAnnotations;
@property(nonatomic) __weak id <AKAttributePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000009b818
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000009b692
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000009b64e
- (void)revalidateItems;	// IMP=0x000000000009b47e
- (void)_lineAttributesChanged:(id)arg1;	// IMP=0x000000000009b3cb
- (void)_attributeStyleChanged:(id)arg1;	// IMP=0x000000000009b348
- (void)_updatePreferredContentSize;	// IMP=0x000000000009b09c
- (void)updateLayoutForSelectedAnnotations;	// IMP=0x000000000009ab4d
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000009aacb
- (void)viewDidLoad;	// IMP=0x000000000009a847
- (id)initWithController:(id)arg1 selectedAnnotations:(id)arg2;	// IMP=0x000000000009a7a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
