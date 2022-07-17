//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;
@protocol CKAssociatedMessageTranscriptCellDelegate;

@interface CKAssociatedMessageTranscriptCell
{
    id <CKAssociatedMessageTranscriptCellDelegate> _delegate;	// 8 = 0x8
    UIView *_associatedItemView;	// 16 = 0x10
    double _parentRotationOffset;	// 24 = 0x18
    double _cumulativeAssociatedOffset;	// 32 = 0x20
    struct CGSize _size;	// 40 = 0x28
    struct CGSize _parentSize;	// 56 = 0x38
    struct IMAssociatedMessageGeometryDescriptor _geometryDescriptor;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000004265ec
@property(nonatomic) double cumulativeAssociatedOffset; // @synthesize cumulativeAssociatedOffset=_cumulativeAssociatedOffset;
@property(nonatomic) double parentRotationOffset; // @synthesize parentRotationOffset=_parentRotationOffset;
@property(nonatomic) struct CGSize parentSize; // @synthesize parentSize=_parentSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct IMAssociatedMessageGeometryDescriptor geometryDescriptor; // @synthesize geometryDescriptor=_geometryDescriptor;
@property(retain, nonatomic) UIView *associatedItemView; // @synthesize associatedItemView=_associatedItemView;
@property(nonatomic) __weak id <CKAssociatedMessageTranscriptCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearFilters;	// IMP=0x00000000004263ec
- (void)addFilter:(id)arg1;	// IMP=0x0000000000426186
- (void)prepareForReuse;	// IMP=0x00000000004260b0
- (void)performReload:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000425e1a
- (struct CGRect)associatedViewFrame:(struct CGRect)arg1 inContainerFrame:(struct CGRect)arg2;	// IMP=0x0000000000425d94
- (void)layoutSubviewsForAlignmentContents;	// IMP=0x0000000000425c53
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000000425b6f
- (_Bool)failureButtonAdjustsContentAlignmentRect;	// IMP=0x0000000000425b67
- (_Bool)hidesCheckmark;	// IMP=0x0000000000425b5f
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000425adf
- (void)configureForChatItem:(id)arg1 context:(id)arg2;	// IMP=0x000000000031c462

@end
