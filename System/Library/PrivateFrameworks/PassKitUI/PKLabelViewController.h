//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSAttributedString, UITextView;

@interface PKLabelViewController : UIViewController
{
    UITextView *_textView;	// 8 = 0x8
    NSAttributedString *_attributedText;	// 16 = 0x10
    struct UIEdgeInsets _contentInsets;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000038217d
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000381f1e
- (void)loadView;	// IMP=0x0000000000381de9
- (id)initWithAttributedText:(id)arg1;	// IMP=0x0000000000381d51
- (id)init;	// IMP=0x0000000000381d43

@end
