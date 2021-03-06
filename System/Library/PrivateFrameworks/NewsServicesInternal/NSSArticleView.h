//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSSArticleInternal, UIImageView, UILabel;

@interface NSSArticleView : UIView
{
    NSSArticleInternal *_article;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_excerptLabel;	// 24 = 0x18
    UIImageView *_thumbnailImageView;	// 32 = 0x20
    UIView *_thumbnailContainerView;	// 40 = 0x28
    UILabel *_publisherLabel;	// 48 = 0x30
    UILabel *_dateLabel;	// 56 = 0x38
    UIImageView *_publisherLogoImageView;	// 64 = 0x40
    struct CGSize _preferredSize;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000004b11
@property(nonatomic) __weak UIImageView *publisherLogoImageView; // @synthesize publisherLogoImageView=_publisherLogoImageView;
@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak UILabel *publisherLabel; // @synthesize publisherLabel=_publisherLabel;
@property(nonatomic) __weak UIView *thumbnailContainerView; // @synthesize thumbnailContainerView=_thumbnailContainerView;
@property(nonatomic) __weak UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(nonatomic) __weak UILabel *excerptLabel; // @synthesize excerptLabel=_excerptLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(retain, nonatomic) NSSArticleInternal *article; // @synthesize article=_article;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000048e8
- (void)_updateFonts;	// IMP=0x00000000000046d2
- (void)_commonInit;	// IMP=0x000000000000405b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003faf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003eef
- (void)layoutSubviews;	// IMP=0x00000000000031a1
- (double)calculateHeightForWidth:(double)arg1;	// IMP=0x0000000000002bb3
- (id)init;	// IMP=0x00000000000027ba
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000275d

@end

