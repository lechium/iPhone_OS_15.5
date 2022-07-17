//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, PUSectionedGridLayout, UIView;
@protocol PUGridRenderedStripDataSource;

__attribute__((visibility("hidden")))
@interface PUGridRenderedStrip : UICollectionReusableView
{
    _Bool _extendsToTop;	// 8 = 0x8
    _Bool __needsRendering;	// 9 = 0x9
    int _backgroundColorValue;	// 12 = 0xc
    double _itemContentScale;	// 16 = 0x10
    double _leftContentInset;	// 24 = 0x18
    NSArray *_itemIndexPaths;	// 32 = 0x20
    long long _visualSectionIndex;	// 40 = 0x28
    id <PUGridRenderedStripDataSource> _dataSource;	// 48 = 0x30
    PUSectionedGridLayout *_layout;	// 56 = 0x38
    unsigned long long _contentExtenderType;	// 64 = 0x40
    UIView *_topContentView;	// 72 = 0x48
    UIView *__sideExtendedContentView;	// 80 = 0x50
    struct CGSize _itemSize;	// 88 = 0x58
    struct CGSize _interItemSpacing;	// 104 = 0x68
    struct _NSRange _visualItemRange;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000185ef1
@property(readonly, nonatomic) UIView *_sideExtendedContentView; // @synthesize _sideExtendedContentView=__sideExtendedContentView;
@property(nonatomic, setter=_setNeedsRendering:) _Bool _needsRendering; // @synthesize _needsRendering=__needsRendering;
@property(readonly, nonatomic) UIView *topContentView; // @synthesize topContentView=_topContentView;
@property(nonatomic) _Bool extendsToTop; // @synthesize extendsToTop=_extendsToTop;
@property(nonatomic) unsigned long long contentExtenderType; // @synthesize contentExtenderType=_contentExtenderType;
@property(nonatomic) __weak PUSectionedGridLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <PUGridRenderedStripDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) struct _NSRange visualItemRange; // @synthesize visualItemRange=_visualItemRange;
@property(readonly, nonatomic) long long visualSectionIndex; // @synthesize visualSectionIndex=_visualSectionIndex;
@property(retain, nonatomic) NSArray *itemIndexPaths; // @synthesize itemIndexPaths=_itemIndexPaths;
@property(nonatomic) int backgroundColorValue; // @synthesize backgroundColorValue=_backgroundColorValue;
@property(nonatomic) double leftContentInset; // @synthesize leftContentInset=_leftContentInset;
@property(nonatomic) struct CGSize interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) double itemContentScale; // @synthesize itemContentScale=_itemContentScale;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (_Bool)_disableRasterizeInAnimations;	// IMP=0x0000000000185da4
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000000185cda
- (void)_updateExtendedContents;	// IMP=0x0000000000185bf0
- (void)_render;	// IMP=0x00000000001853aa
@property(readonly, nonatomic) long long numberOfColumns;
- (void)setVisualSectionIndex:(long long)arg1 andVisualItemRange:(struct _NSRange)arg2;	// IMP=0x0000000000185189
- (void)setNeedsRendering;	// IMP=0x0000000000184fa4
- (void)layoutSubviews;	// IMP=0x0000000000184ac5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000184a39

@end
