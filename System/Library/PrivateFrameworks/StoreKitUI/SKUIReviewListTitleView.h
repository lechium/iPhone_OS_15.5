//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSString, SKUIAttributedStringView;

__attribute__((visibility("hidden")))
@interface SKUIReviewListTitleView <SKUIViewElementView>
{
    SKUIAttributedStringView *_titleView;	// 8 = 0x8
    SKUIAttributedStringView *_dateView;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
}

+ (id)_attributedStringForDateLabel:(id)arg1 context:(id)arg2;	// IMP=0x000000000002a280
+ (id)_attributedStringForTitleLabel:(id)arg1 context:(id)arg2;	// IMP=0x000000000002a112
+ (id)_textLabelForViewElement:(id)arg1;	// IMP=0x000000000002a0f6
+ (id)_dateLabelForViewElement:(id)arg1;	// IMP=0x000000000002a0da
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x000000000002985b
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000029641
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x000000000002962b
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0000000000029623
- (void).cxx_destruct;	// IMP=0x000000000002a463
@property(retain, nonatomic) SKUIAttributedStringView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) SKUIAttributedStringView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002a048
- (void)layoutSubviews;	// IMP=0x0000000000029d02
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000029cfa
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000029cf2
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000029cea
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000002992c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000295c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

