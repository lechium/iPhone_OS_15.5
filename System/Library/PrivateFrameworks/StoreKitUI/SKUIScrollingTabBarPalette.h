//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SKUIScrollingTabBarBackgroundView;
@protocol SKUIScrollingTabBarPaletteDelegate;

@interface SKUIScrollingTabBarPalette : UIView
{
    _Bool _attached;	// 8 = 0x8
    _Bool _tabBarBackgroundExtendsBehindPalette;	// 9 = 0x9
    UIView *_contentView;	// 16 = 0x10
    double _paletteHeight;	// 24 = 0x18
    id <SKUIScrollingTabBarPaletteDelegate> _delegate;	// 32 = 0x20
    SKUIScrollingTabBarBackgroundView *_backgroundView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000136e9c
@property(readonly, nonatomic, getter=_backgroundView) SKUIScrollingTabBarBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, getter=_delegate, setter=_setDelegate:) __weak id <SKUIScrollingTabBarPaletteDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool tabBarBackgroundExtendsBehindPalette; // @synthesize tabBarBackgroundExtendsBehindPalette=_tabBarBackgroundExtendsBehindPalette;
@property(readonly, nonatomic) double paletteHeight; // @synthesize paletteHeight=_paletteHeight;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isAttached, setter=_setAttached:) _Bool attached; // @synthesize attached=_attached;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000136cbd
- (void)layoutSubviews;	// IMP=0x0000000000136b75
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000136a1a

@end
