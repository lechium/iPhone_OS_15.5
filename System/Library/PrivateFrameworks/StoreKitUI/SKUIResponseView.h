//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSMapTable, NSString, SKUIAttributedStringView, SKUITextBoxView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIResponseView <SKUIViewElementView>
{
    SKUITextBoxView *_descriptionView;	// 8 = 0x8
    SKUIAttributedStringView *_subtitleView;	// 16 = 0x10
    UIImageView *_replyImageView;	// 24 = 0x18
    NSMapTable *_allViewTextProperties;	// 32 = 0x20
    struct UIEdgeInsets _contentInset;	// 40 = 0x28
}

+ (id)_attributedStringForSubtitleLabel:(id)arg1 context:(id)arg2;	// IMP=0x000000000034368f
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0000000000342741
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000342546
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000003424b5
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00000000003424ad
- (void).cxx_destruct;	// IMP=0x00000000003438da
@property(retain, nonatomic) NSMapTable *allViewTextProperties; // @synthesize allViewTextProperties=_allViewTextProperties;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) UIImageView *replyImageView; // @synthesize replyImageView=_replyImageView;
@property(retain, nonatomic) SKUIAttributedStringView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) SKUITextBoxView *descriptionView; // @synthesize descriptionView=_descriptionView;
- (void)layoutSubviews;	// IMP=0x000000000034311f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000342de3
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000342ddb
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000342dd3
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000342dcb
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000342a6f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003423ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
