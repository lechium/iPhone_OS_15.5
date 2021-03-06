//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUICellLayoutParentView-Protocol.h>

@class NSString, SKUIItemCellLayout;

@interface SKUIItemCollectionViewCell <SKUICellLayoutParentView>
{
    _Bool _layoutNeedsLayout;	// 8 = 0x8
}

- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000001265fa
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000012656c
- (void)layoutSubviews;	// IMP=0x00000000001264e4
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000126469
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001263ee
- (void)prepareForReuse;	// IMP=0x0000000000126380
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000001262c7
- (void)setCellLayoutNeedsLayout;	// IMP=0x00000000001262aa
@property(readonly, nonatomic) SKUIItemCellLayout *layout;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2;	// IMP=0x000000000012629c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

