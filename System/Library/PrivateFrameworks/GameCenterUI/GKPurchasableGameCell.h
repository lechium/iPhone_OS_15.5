//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKRatingView, GKStoreItemInternal, UILabel;

@interface GKPurchasableGameCell
{
    float _capturedRating;	// 24 = 0x18
    GKStoreItemInternal *_storeItem;	// 32 = 0x20
    UILabel *_developerLabel;	// 40 = 0x28
    UILabel *_priceLabel;	// 48 = 0x30
    GKRatingView *_ratingStarsView;	// 56 = 0x38
    UILabel *_numberRatings;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000073971
@property(retain, nonatomic) UILabel *numberRatings; // @synthesize numberRatings=_numberRatings;
@property(nonatomic) float capturedRating; // @synthesize capturedRating=_capturedRating;
@property(retain, nonatomic) GKRatingView *ratingStarsView; // @synthesize ratingStarsView=_ratingStarsView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *developerLabel; // @synthesize developerLabel=_developerLabel;
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
- (_Bool)canRemoveItem;	// IMP=0x000000000007389d
- (void)didUpdateModel;	// IMP=0x000000000007354b
- (void)prepareForReuse;	// IMP=0x00000000000734b3
- (void)establishConstraints;	// IMP=0x00000000000753a4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000075035

@end

