//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayout.h>

#import <TextInputUI/NSCopying-Protocol.h>

@class NSIndexPath, NSMutableArray, NSMutableDictionary, TUICandidateLayoutAttributes;

@interface TUICandidateLayout : UICollectionViewLayout <NSCopying>
{
    NSMutableArray *_candidateAttributes;	// 8 = 0x8
    NSMutableDictionary *_dummyCandidateAttributes;	// 16 = 0x10
    NSMutableArray *_lineAttributes;	// 24 = 0x18
    NSMutableArray *_slottedCellSeparatorAttributes;	// 32 = 0x20
    NSMutableArray *_groupHeaderAttributes;	// 40 = 0x28
    TUICandidateLayoutAttributes *_customHeaderAttributes;	// 48 = 0x30
    _Bool _dirty;	// 56 = 0x38
    _Bool _candidateNumberEnabled;	// 57 = 0x39
    _Bool _showExtraLineBeforeFirstRow;	// 58 = 0x3a
    _Bool _fillGridWithLines;	// 59 = 0x3b
    _Bool _showsIndex;	// 60 = 0x3c
    long long _rowType;	// 64 = 0x40
    long long _transitionState;	// 72 = 0x48
    long long _layoutOrientation;	// 80 = 0x50
    NSIndexPath *_oldFirstVisibleIndexPath;	// 88 = 0x58
    double _oldFirstVisibleOffset;	// 96 = 0x60
    double _customHeaderHeight;	// 104 = 0x68
    unsigned long long _columnsCount;	// 112 = 0x70
    double _singleSlottedCellMargin;	// 120 = 0x78
    struct CGPoint _gridLineOffset;	// 128 = 0x80
    struct UIEdgeInsets _gridPadding;	// 144 = 0x90
    struct UIEdgeInsets _gridLinePadding;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000004fda
@property(nonatomic) _Bool showsIndex; // @synthesize showsIndex=_showsIndex;
@property(nonatomic) _Bool fillGridWithLines; // @synthesize fillGridWithLines=_fillGridWithLines;
@property(nonatomic) _Bool showExtraLineBeforeFirstRow; // @synthesize showExtraLineBeforeFirstRow=_showExtraLineBeforeFirstRow;
@property(nonatomic) struct CGPoint gridLineOffset; // @synthesize gridLineOffset=_gridLineOffset;
@property(nonatomic) struct UIEdgeInsets gridLinePadding; // @synthesize gridLinePadding=_gridLinePadding;
@property(nonatomic) struct UIEdgeInsets gridPadding; // @synthesize gridPadding=_gridPadding;
@property(nonatomic) double singleSlottedCellMargin; // @synthesize singleSlottedCellMargin=_singleSlottedCellMargin;
@property(nonatomic) unsigned long long columnsCount; // @synthesize columnsCount=_columnsCount;
@property(nonatomic) _Bool candidateNumberEnabled; // @synthesize candidateNumberEnabled=_candidateNumberEnabled;
@property(nonatomic) double customHeaderHeight; // @synthesize customHeaderHeight=_customHeaderHeight;
@property(nonatomic) double oldFirstVisibleOffset; // @synthesize oldFirstVisibleOffset=_oldFirstVisibleOffset;
@property(retain, nonatomic) NSIndexPath *oldFirstVisibleIndexPath; // @synthesize oldFirstVisibleIndexPath=_oldFirstVisibleIndexPath;
@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(nonatomic) long long transitionState; // @synthesize transitionState=_transitionState;
@property(nonatomic) long long rowType; // @synthesize rowType=_rowType;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000004b41
- (id)keyForDummyCandidateIndexPath:(id)arg1;	// IMP=0x0000000000004ac0
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000004986
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000000000046af
- (struct CGSize)collectionViewContentSize;	// IMP=0x00000000000041de
- (void)justify:(id)arg1 rowStartX:(double)arg2 maxWidth:(double)arg3 remainingWidth:(double)arg4 endOfSection:(_Bool)arg5;	// IMP=0x0000000000003a7f
- (void)rotateAttributesBy90Degrees;	// IMP=0x00000000000034ce
- (void)prepareLayoutForMultiRow;	// IMP=0x00000000000024b5
- (void)layoutSlottedCandidates;	// IMP=0x0000000000001bb2
- (void)prepareLayoutForSingleRow;	// IMP=0x0000000000001810
- (void)prepareLayout;	// IMP=0x0000000000001785
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000000000016e5
- (void)invalidateLayout;	// IMP=0x0000000000001699
- (void)clearLayoutAttributes;	// IMP=0x0000000000001606
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000014f0
- (id)init;	// IMP=0x0000000000001404

@end
