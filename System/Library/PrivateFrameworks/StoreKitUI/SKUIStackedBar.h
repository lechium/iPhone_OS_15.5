//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, _UIBackdropView;
@protocol SKUIStackedBarDelegate;

@interface SKUIStackedBar : UIView
{
    id <SKUIStackedBarDelegate> _delegate;	// 8 = 0x8
    _UIBackdropView *_backdropView;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    NSArray *_cells;	// 32 = 0x20
    _Bool _lastItemExpanded;	// 40 = 0x28
    _Bool _hidesStatusBar;	// 41 = 0x29
    _Bool _splitViewStyle;	// 42 = 0x2a
    _Bool _alwaysShowsBackButton;	// 43 = 0x2b
    _Bool _zeroHeightWhenFirstChildExpanded;	// 44 = 0x2c
    double _offset;	// 48 = 0x30
    UIView *_wrapperView;	// 56 = 0x38
    UIView *_maskView;	// 64 = 0x40
    double _newOffset;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000128328
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool zeroHeightWhenFirstChildExpanded; // @synthesize zeroHeightWhenFirstChildExpanded=_zeroHeightWhenFirstChildExpanded;
@property(nonatomic) _Bool splitViewStyle; // @synthesize splitViewStyle=_splitViewStyle;
@property(nonatomic) _Bool hidesStatusBar; // @synthesize hidesStatusBar=_hidesStatusBar;
@property(nonatomic) _Bool lastItemExpanded; // @synthesize lastItemExpanded=_lastItemExpanded;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool alwaysShowsBackButton; // @synthesize alwaysShowsBackButton=_alwaysShowsBackButton;
@property __weak id <SKUIStackedBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_selectItemAtIndex:(long long)arg1;	// IMP=0x00000000001281e6
- (void)_reload;	// IMP=0x0000000000127e02
- (void)_resetNewOffset;	// IMP=0x0000000000127de4
- (void)_backAction:(id)arg1;	// IMP=0x0000000000127da7
- (void)_buttonAction:(id)arg1;	// IMP=0x0000000000127d6b
- (void)animateToFullSizeIfNecessary;	// IMP=0x0000000000127a9d
- (void)sizeToFit;	// IMP=0x0000000000127a1d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000127964
- (void)layoutSubviews;	// IMP=0x00000000001274df
- (void)setLastItemExpanded:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001271f9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000126fb3

@end
