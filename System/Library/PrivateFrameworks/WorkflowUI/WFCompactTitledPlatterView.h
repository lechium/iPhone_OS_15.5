//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlatterKit/PLPlatterView.h>

@class NSString, WFCompactPlatterSashView, WFIcon;
@protocol WFCompactTitledPlatterViewDelegate;

@interface WFCompactTitledPlatterView : PLPlatterView
{
    id <WFCompactTitledPlatterViewDelegate> _delegate;	// 8 = 0x8
    WFCompactPlatterSashView *_sashView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017ab40
@property(retain, nonatomic) WFCompactPlatterSashView *sashView; // @synthesize sashView=_sashView;
@property(nonatomic) __weak id <WFCompactTitledPlatterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WFIcon *icon;
@property(retain, nonatomic) NSString *title;
- (struct CGRect)_mainContentFrame;	// IMP=0x000000000017a857
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;	// IMP=0x000000000017a757
- (void)layoutSubviews;	// IMP=0x000000000017a53f
- (void)layoutHeaderViews;	// IMP=0x000000000017a3c6
- (void)configureSashViewIfNecessary;	// IMP=0x000000000017a317
- (void)setNeedsLayout;	// IMP=0x000000000017a2aa

@end
