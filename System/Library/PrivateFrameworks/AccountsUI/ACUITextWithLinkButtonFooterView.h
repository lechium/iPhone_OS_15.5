//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <AccountsUI/PSHeaderFooterView-Protocol.h>

@class NSArray, NSString, UILabel;

@interface ACUITextWithLinkButtonFooterView : UIView <PSHeaderFooterView>
{
    NSArray *_linkButtons;	// 8 = 0x8
    UILabel *_textLabel;	// 16 = 0x10
    NSString *_footerText;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000f6f0
- (double)_heightForEmptyLineConstrainedToWidth:(double)arg1;	// IMP=0x000000000000f590
- (double)_heightForLinkButton:(id)arg1 constrainedToWidth:(double)arg2;	// IMP=0x000000000000f3a0
- (double)_heightForFooterTextConstrainedToWidth:(double)arg1;	// IMP=0x000000000000f1d0
- (double)preferredHeightForWidth:(double)arg1;	// IMP=0x000000000000eeb0
- (void)layoutSubviews;	// IMP=0x000000000000e960
- (id)initWithText:(id)arg1 linkButtons:(id)arg2;	// IMP=0x000000000000e400
- (id)initWithText:(id)arg1 linkButton:(id)arg2;	// IMP=0x000000000000e2d0
- (id)initWithSpecifier:(id)arg1;	// IMP=0x000000000000e1e0

@end

