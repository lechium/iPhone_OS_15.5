//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKViewController.h>

@class UITextView;

__attribute__((visibility("hidden")))
@interface WDContactConsolidationLearnMoreViewController : HKViewController
{
    UITextView *_textView;	// 8 = 0x8
    CDUnknownBlockType _dismissHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000058ed7
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)createTextView;	// IMP=0x0000000000058d86
- (void)dismissButtonPressed:(id)arg1;	// IMP=0x0000000000058c8d
- (void)createDismissButton;	// IMP=0x0000000000058bb1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000058b23
- (void)viewDidLoad;	// IMP=0x0000000000058a11

@end

