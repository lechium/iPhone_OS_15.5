//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <AnnotationKit/AKFontChooserUserInterfaceItem-Protocol.h>
#import <AnnotationKit/AKTextAttributesUserInterfaceItem-Protocol.h>

@class AKController, AKFontChooserUIItemDelegate, AKFontListController, AKTextAttributesUIItemDelegate, NSNumber, NSString, UIColor, UITableViewCell;

@interface AKTextAttributesViewController : UITableViewController <AKFontChooserUserInterfaceItem, AKTextAttributesUserInterfaceItem>
{
    UITableViewCell *_sizeTableCell;	// 8 = 0x8
    UITableViewCell *_alignmentTableCell;	// 16 = 0x10
    UIColor *_currentFontColor;	// 24 = 0x18
    NSString *_currentFontFamilyName;	// 32 = 0x20
    NSNumber *_currentFontSize;	// 40 = 0x28
    id _currentAlignment;	// 48 = 0x30
    id _currentStyle;	// 56 = 0x38
    AKController *_controller;	// 64 = 0x40
    AKFontListController *_presetFontController;	// 72 = 0x48
    long long _lastActionID;	// 80 = 0x50
    id _lastActionValue;	// 88 = 0x58
    AKFontChooserUIItemDelegate *_fontUIItemDelegate;	// 96 = 0x60
    AKTextAttributesUIItemDelegate *_textAttributesUIItemDelegate;	// 104 = 0x68
}

+ (id)fontSizeNumberFormatter;	// IMP=0x00000000000f680d
- (void).cxx_destruct;	// IMP=0x00000000000f6bba
@property(retain, nonatomic) AKTextAttributesUIItemDelegate *textAttributesUIItemDelegate; // @synthesize textAttributesUIItemDelegate=_textAttributesUIItemDelegate;
@property(retain, nonatomic) AKFontChooserUIItemDelegate *fontUIItemDelegate; // @synthesize fontUIItemDelegate=_fontUIItemDelegate;
@property(retain) id lastActionValue; // @synthesize lastActionValue=_lastActionValue;
@property long long lastActionID; // @synthesize lastActionID=_lastActionID;
@property(retain, nonatomic) AKFontListController *presetFontController; // @synthesize presetFontController=_presetFontController;
@property(nonatomic) __weak AKController *controller; // @synthesize controller=_controller;
@property(nonatomic) id currentStyle; // @synthesize currentStyle=_currentStyle;
@property(nonatomic) id currentAlignment; // @synthesize currentAlignment=_currentAlignment;
@property(retain, nonatomic) NSNumber *currentFontSize; // @synthesize currentFontSize=_currentFontSize;
@property(retain, nonatomic) NSString *currentFontFamilyName; // @synthesize currentFontFamilyName=_currentFontFamilyName;
@property(retain, nonatomic) UIColor *currentFontColor; // @synthesize currentFontColor=_currentFontColor;
@property(retain, nonatomic) UITableViewCell *alignmentTableCell; // @synthesize alignmentTableCell=_alignmentTableCell;
@property(retain, nonatomic) UITableViewCell *sizeTableCell; // @synthesize sizeTableCell=_sizeTableCell;
- (void)syncTextAttributesToUI:(id)arg1;	// IMP=0x00000000000f637e
- (id)convertTextAttributes:(id)arg1;	// IMP=0x00000000000f5eb3
- (void)syncFontsToUI:(id)arg1;	// IMP=0x00000000000f5a08
- (id)convertFont:(id)arg1;	// IMP=0x00000000000f57a2
- (void)didSelectFont:(id)arg1;	// IMP=0x00000000000f5701
- (_Bool)validateUserInterfaceItems;	// IMP=0x00000000000f5612
- (void)_sendTextAttributesAction;	// IMP=0x00000000000f5548
- (void)_sendFontAction;	// IMP=0x00000000000f547e
- (void)_alignmentSegmentChanged:(id)arg1;	// IMP=0x00000000000f53c6
- (void)_styleSegmentChanged:(id)arg1;	// IMP=0x00000000000f5218
- (void)_sizeStepperValueChanged:(id)arg1;	// IMP=0x00000000000f5046
- (id)createRowAlignmentCell;	// IMP=0x00000000000f4cc0
- (id)createRowFontSizeCell;	// IMP=0x00000000000f47da
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000f4699
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000f43c8
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000f41e3
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000f3d29
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000f3cba
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000f3caf
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000f3ca7
- (void)viewDidLoad;	// IMP=0x00000000000f3a3c
- (void)_commonInit;	// IMP=0x00000000000f3839
- (id)initWithController:(id)arg1;	// IMP=0x00000000000f377c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

