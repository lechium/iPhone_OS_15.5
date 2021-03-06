//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NTKComplicationLayoutRule
{
    struct UIEdgeInsets _keylinePadding;	// 8 = 0x8
    struct CGAffineTransform _editingTransform;	// 40 = 0x28
    struct CGAffineTransform _contentTransform;	// 88 = 0x58
}

+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(struct UIEdgeInsets)arg5 clip:(_Bool)arg6 contentTransform:(struct CGAffineTransform)arg7;	// IMP=0x000000000011780c
+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(struct UIEdgeInsets)arg5 clip:(_Bool)arg6 editingTransform:(struct CGAffineTransform)arg7;	// IMP=0x00000000001177ad
+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(struct UIEdgeInsets)arg5 clip:(_Bool)arg6;	// IMP=0x0000000000117769
+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(struct UIEdgeInsets)arg5;	// IMP=0x0000000000117725
@property(nonatomic) struct CGAffineTransform contentTransform; // @synthesize contentTransform=_contentTransform;
@property(nonatomic) struct CGAffineTransform editingTransform; // @synthesize editingTransform=_editingTransform;
@property(readonly, nonatomic) struct UIEdgeInsets keylinePadding; // @synthesize keylinePadding=_keylinePadding;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000117cec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000117a7b
- (unsigned long long)hash;	// IMP=0x000000000011786b
- (id)initForDevice:(id)arg1;	// IMP=0x00000000001176b5

@end

