//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSString, SKUIAttributedStringLayout, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIStarRatingViewElementView : UIView <SKUIViewElementView>
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    long long _elementSpacing;	// 40 = 0x28
    UIImage *_starRatingImage;	// 48 = 0x30
    SKUIAttributedStringLayout *_textLayout;	// 56 = 0x38
}

+ (id)_attributedStringWithViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000001edc69
+ (id)textPropertiesForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001ed51a
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00000000001ed3ac
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001ed2ef
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000001ed2d9
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00000000001ed2d1
- (void).cxx_destruct;	// IMP=0x00000000001ede34
@property(nonatomic) long long elementSpacing; // @synthesize elementSpacing=_elementSpacing;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001edba3
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000001ed880
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001ed878
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001ed870
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000001ed868
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001ed7fe
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001ed688
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ed260

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

