//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UGCRatingCategoryLikeDislikeView, UIFont, UILabel;
@protocol UGCRatingCategoryTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface UGCRatingCategoryCell
{
    UILabel *_categoryLabel;	// 8 = 0x8
    UGCRatingCategoryLikeDislikeView *_likeDislikeView;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
    long long _currentState;	// 32 = 0x20
    id <UGCRatingCategoryTableViewCellDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000848823
@property(nonatomic) __weak id <UGCRatingCategoryTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)setHasHeaderEmphasis:(_Bool)arg1;	// IMP=0x001000000084874f
@property(readonly, nonatomic) UIFont *ratingLabelFont;
@property(retain, nonatomic) NSString *titleString;
- (void)_updateState:(long long)arg1;	// IMP=0x001000000084861e
- (void)likeDislikeViewDidSelectDislike:(id)arg1;	// IMP=0x00100000008485fb
- (void)likeDislikeViewDidSelectLike:(id)arg1;	// IMP=0x00100000008485d5
- (void)_setupConstraints;	// IMP=0x00100000008480d4
- (void)_contentSizeChanged;	// IMP=0x0010000000848080
- (void)_setupSubviewsWithState:(long long)arg1;	// IMP=0x0010000000847ed2
- (id)initWithCurrentState:(long long)arg1;	// IMP=0x0010000000847e50

@end

