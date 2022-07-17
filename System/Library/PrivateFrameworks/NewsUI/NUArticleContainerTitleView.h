//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NUPageStyle, NUTitleView;

@interface NUArticleContainerTitleView : UIView
{
    NUTitleView *_titleView;	// 8 = 0x8
    NUPageStyle *_pageStyle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003262a
@property(retain, nonatomic) NUPageStyle *pageStyle; // @synthesize pageStyle=_pageStyle;
@property(readonly, nonatomic) NUTitleView *titleView; // @synthesize titleView=_titleView;
- (void)applyPageStyle:(id)arg1;	// IMP=0x0000000000032365
- (void)layoutSubviews;	// IMP=0x00000000000322cf
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000032210

@end
