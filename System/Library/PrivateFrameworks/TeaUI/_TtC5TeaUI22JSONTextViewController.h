//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, UIView;

@interface _TtC5TeaUI22JSONTextViewController : UIViewController
{
    MISSING_TYPE *textView;	// 8 = 0x8
    MISSING_TYPE *textParser;	// 16 = 0x10
    MISSING_TYPE *_textSize;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_searchToolbar;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_resultsBarButtonItem;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_nextTokenBarButtonItem;	// 120 = 0x78
    MISSING_TYPE *$__lazy_storage_$_previousTokenBarButtonItem;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000002fdb10
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000002fdab0
- (void)previousToken;	// IMP=0x00000000002fd9e0
- (void)nextToken;	// IMP=0x00000000002fd450
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) UIView *inputAccessoryView;
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002fd310
- (void)viewDidLoad;	// IMP=0x00000000002fd230
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002fbe00

@end
