//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UINavigationBarTitleView.h>

@class HUQuickControlSummaryView, NSArray;

@interface HUQuickControlSummaryNavigationBarTitleView : _UINavigationBarTitleView
{
    HUQuickControlSummaryView *_summaryView;	// 8 = 0x8
    NSArray *_contentConstraints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bcc5c
@property(retain, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(retain, nonatomic) HUQuickControlSummaryView *summaryView; // @synthesize summaryView=_summaryView;
- (void)transitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;	// IMP=0x00000000000bcbc4
- (void)layoutSubviews;	// IMP=0x00000000000bca69
- (void)updateConstraints;	// IMP=0x00000000000bc733
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000bc5f5

@end
