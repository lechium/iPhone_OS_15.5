//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class BFFPaneHeaderView, UILabel;

@interface AAUIPaneHeaderView : UIView
{
    BFFPaneHeaderView *_header;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000016e8f
- (void)makeAllTheTextFits;	// IMP=0x0000000000016c40
- (double)innerHeaderMaxY;	// IMP=0x0000000000016a3e
@property(readonly, nonatomic) UIView *_header;
- (void)layoutSubviews;	// IMP=0x000000000001695f
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000016942
- (void)setTitleText:(id)arg1;	// IMP=0x0000000000016925
@property(readonly, nonatomic) UILabel *textLabel;
@property(readonly, nonatomic) UILabel *subLabel;
@property(readonly, nonatomic) UILabel *detailTextLabel;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000016781

@end
