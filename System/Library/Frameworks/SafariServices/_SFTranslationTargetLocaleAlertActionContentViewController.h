//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface _SFTranslationTargetLocaleAlertActionContentViewController : UIViewController
{
    NSString *_localeIdentifier;	// 8 = 0x8
    NSLayoutConstraint *_topTextPaddingConstraint;	// 16 = 0x10
    NSLayoutConstraint *_bottomTextPaddingConstraint;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000077491
- (void)_updateVerticalPadding;	// IMP=0x00000000000773f5
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000077300
- (void)viewDidLoad;	// IMP=0x00000000000767af
- (void)loadView;	// IMP=0x0000000000076776
- (id)initWithLocaleIdentifier:(id)arg1;	// IMP=0x00000000000766f1

@end
