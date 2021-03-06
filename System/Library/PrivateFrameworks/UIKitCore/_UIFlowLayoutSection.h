//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, _UIFlowLayoutInfo;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutSection : NSObject
{
    _Bool _isValid;	// 8 = 0x8
    struct CGRect _validRect;	// 16 = 0x10
    struct CGRect _rectToKeepValid;	// 48 = 0x30
    NSMutableSet *_invalidatedIndexPaths;	// 80 = 0x50
    _Bool _fixedItemSize;	// 88 = 0x58
    _Bool _lastRowIncomplete;	// 89 = 0x59
    NSMutableArray *_items;	// 96 = 0x60
    NSMutableArray *_rows;	// 104 = 0x68
    double _verticalInterstice;	// 112 = 0x70
    double _horizontalInterstice;	// 120 = 0x78
    double _headerDimension;	// 128 = 0x80
    double _footerDimension;	// 136 = 0x88
    _UIFlowLayoutInfo *_layoutInfo;	// 144 = 0x90
    double _otherMargin;	// 152 = 0x98
    double _beginMargin;	// 160 = 0xa0
    double _endMargin;	// 168 = 0xa8
    double _actualGap;	// 176 = 0xb0
    double _lastRowBeginMargin;	// 184 = 0xb8
    double _lastRowEndMargin;	// 192 = 0xc0
    double _lastRowActualGap;	// 200 = 0xc8
    long long _itemsCount;	// 208 = 0xd0
    long long _itemsByRowCount;	// 216 = 0xd8
    long long _indexOfIncompleteRow;	// 224 = 0xe0
    CDStruct_2f5e8405 _rowAlignmentOptions;	// 232 = 0xe8
    struct CGSize _itemSize;	// 248 = 0xf8
    struct _NSRange _validItemRange;	// 264 = 0x108
    struct UIEdgeInsets _sectionMargins;	// 280 = 0x118
    struct CGRect _frame;	// 312 = 0x138
    struct CGRect _headerFrame;	// 344 = 0x158
    struct CGRect _footerFrame;	// 376 = 0x178
}

- (void).cxx_destruct;	// IMP=0x0000000000395218
@property(readonly, nonatomic) struct _NSRange validItemRange; // @synthesize validItemRange=_validItemRange;
@property(readonly, nonatomic) long long indexOfIncompleteRow; // @synthesize indexOfIncompleteRow=_indexOfIncompleteRow;
@property(readonly, nonatomic) long long itemsByRowCount; // @synthesize itemsByRowCount=_itemsByRowCount;
@property(nonatomic) long long itemsCount; // @synthesize itemsCount=_itemsCount;
@property(readonly, nonatomic) _Bool lastRowIncomplete; // @synthesize lastRowIncomplete=_lastRowIncomplete;
@property(readonly, nonatomic) double lastRowActualGap; // @synthesize lastRowActualGap=_lastRowActualGap;
@property(readonly, nonatomic) double lastRowEndMargin; // @synthesize lastRowEndMargin=_lastRowEndMargin;
@property(readonly, nonatomic) double lastRowBeginMargin; // @synthesize lastRowBeginMargin=_lastRowBeginMargin;
@property(readonly, nonatomic) double actualGap; // @synthesize actualGap=_actualGap;
@property(readonly, nonatomic) double endMargin; // @synthesize endMargin=_endMargin;
@property(readonly, nonatomic) double beginMargin; // @synthesize beginMargin=_beginMargin;
@property(readonly, nonatomic) double otherMargin; // @synthesize otherMargin=_otherMargin;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) _Bool fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;
@property(nonatomic) CDStruct_2f5e8405 rowAlignmentOptions; // @synthesize rowAlignmentOptions=_rowAlignmentOptions;
@property(nonatomic) __weak _UIFlowLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(readonly, nonatomic) double footerDimension; // @synthesize footerDimension=_footerDimension;
@property(readonly, nonatomic) double headerDimension; // @synthesize headerDimension=_headerDimension;
@property(nonatomic) struct CGRect footerFrame; // @synthesize footerFrame=_footerFrame;
@property(nonatomic) struct CGRect headerFrame; // @synthesize headerFrame=_headerFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) struct UIEdgeInsets sectionMargins; // @synthesize sectionMargins=_sectionMargins;
@property(nonatomic) double horizontalInterstice; // @synthesize horizontalInterstice=_horizontalInterstice;
@property(nonatomic) double verticalInterstice; // @synthesize verticalInterstice=_verticalInterstice;
@property(readonly, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (id)rowsInRect:(struct CGRect)arg1;	// IMP=0x0000000000394cd1
- (void)addInvalidatedIndexPath:(id)arg1;	// IMP=0x0000000000394c89
- (void)setSize:(struct CGSize)arg1 forItemAtIndexPath:(id)arg2 invalidationContext:(id)arg3;	// IMP=0x00000000003940e9
- (void)updateSize:(struct CGSize)arg1 forItemAtIndexPath:(id)arg2;	// IMP=0x0000000000394010
- (id)copyFromLayoutInfo:(id)arg1;	// IMP=0x0000000000393c0f
- (id)snapshot;	// IMP=0x0000000000393976
- (id)addRowAtEnd:(_Bool)arg1;	// IMP=0x0000000000393905
- (id)addItem;	// IMP=0x0000000000393890
- (void)setEstimatedSize:(struct CGSize)arg1 forSection:(long long)arg2;	// IMP=0x000000000039375a
- (void)updateEstimatedSizeForSection:(long long)arg1;	// IMP=0x0000000000392a86
- (void)computeLayoutInRect:(struct CGRect)arg1 forSection:(long long)arg2 invalidating:(_Bool)arg3 invalidationContext:(id)arg4;	// IMP=0x000000000039024a
- (void)computeLayoutValidatingForwardForIndexPath:(id)arg1;	// IMP=0x000000000038fd9f
@property(readonly, nonatomic) struct CGRect effectiveFooterFrameWithSectionMarginsApplied;
@property(readonly, nonatomic) struct CGRect effectiveHeaderFrameWithSectionMarginsApplied;
- (void)setFooterDimension:(double)arg1 forSection:(long long)arg2;	// IMP=0x000000000038fad2
- (void)setHeaderDimension:(double)arg1 forSection:(long long)arg2;	// IMP=0x000000000038f9f9
- (void)logInvalidSizesForHorizontalDirection:(_Bool)arg1 warnAboutDelegateValues:(_Bool)arg2;	// IMP=0x000000000038f8f2
- (void)logInvalidSizes;	// IMP=0x000000000038f89a
- (long long)estimatedIndexOfItemAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000038f2ec
- (void)computeLayout;	// IMP=0x000000000038d877
- (void)sizeChangedForItem:(id)arg1 atIndexPath:(id)arg2 inRow:(id)arg3;	// IMP=0x000000000038cf1e
- (void)invalidate;	// IMP=0x000000000038cefb
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;	// IMP=0x000000000038c664
@property(readonly, nonatomic) NSArray *invalidatedIndexPaths;
- (id)init;	// IMP=0x000000000038c5ce

@end

