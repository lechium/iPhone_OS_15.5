//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface FPUIAuthenticationNavigationBarTitleView : UIStackView
{
    UIActivityIndicatorView *_activityIndicator;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000f20f
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void)setActivityIndicatorHidden:(_Bool)arg1;	// IMP=0x000000000000f11c
@property(copy, nonatomic) NSString *title;
- (id)init;	// IMP=0x000000000000ef13

@end

