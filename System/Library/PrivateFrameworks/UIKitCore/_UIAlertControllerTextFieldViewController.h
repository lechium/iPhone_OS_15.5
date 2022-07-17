//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, UIAlertControllerVisualStyle, UICollectionViewFlowLayout;
@protocol _UIAlertControllerTextFieldViewControllerContaining;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextFieldViewController
{
    NSMutableArray *textFieldViews;	// 400 = 0x190
    NSMutableArray *textFields;	// 408 = 0x198
    _Bool _textFieldsCanBecomeFirstResponder;	// 416 = 0x1a0
    UIAlertControllerVisualStyle *_visualStyle;	// 424 = 0x1a8
    UICollectionViewFlowLayout *_collectionViewLayout;	// 432 = 0x1b0
    _Bool _hidden;	// 440 = 0x1b8
    id <_UIAlertControllerTextFieldViewControllerContaining> _container;	// 448 = 0x1c0
}

- (void).cxx_destruct;	// IMP=0x00000000000476d0
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) __weak id <_UIAlertControllerTextFieldViewControllerContaining> container; // @synthesize container=_container;
@property(readonly) NSArray *textFields; // @synthesize textFields;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000047675
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000000004766d
- (_Bool)resignFirstResponder;	// IMP=0x00000000000474bd
- (void)updateTextFieldStyle;	// IMP=0x0000000000047329
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000004722d
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000004721b
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000047210
@property(nonatomic) _Bool textFieldsCanBecomeFirstResponder;
- (void)removeAllTextFields;	// IMP=0x000000000004710e
- (long long)numberOfTextFields;	// IMP=0x00000000000470f1
- (id)textFieldContainerViews;	// IMP=0x0000000000046f06
- (id)textFieldAtIndex:(long long)arg1;	// IMP=0x0000000000046eab
- (void)_updatePreferredContentSize;	// IMP=0x0000000000046d7e
- (void)_returnKeyPressedInTextField:(id)arg1;	// IMP=0x0000000000046b59
- (id)addTextFieldWithPlaceholder:(id)arg1;	// IMP=0x0000000000046972
- (double)_bottomMarginForTextFields;	// IMP=0x0000000000046896
@property(nonatomic) UIAlertControllerVisualStyle *visualStyle;
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000046781
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000004659c
- (void)viewDidLoad;	// IMP=0x0000000000046530
- (id)init;	// IMP=0x0000000000046327

@end
