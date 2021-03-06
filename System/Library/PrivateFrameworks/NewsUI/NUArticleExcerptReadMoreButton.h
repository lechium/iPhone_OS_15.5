//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class NSURL, UIImageView, UILabel;

@interface NUArticleExcerptReadMoreButton : UIButton
{
    unsigned long long _excerptLenthType;	// 8 = 0x8
    NSURL *_domainURL;	// 16 = 0x10
    UILabel *_readStoryLabel;	// 24 = 0x18
    UILabel *_domainLabel;	// 32 = 0x20
    UIImageView *_arrowImageView;	// 40 = 0x28
}

+ (id)arrowImage;	// IMP=0x000000000001fe3b
+ (double)readMoreButtonHeight;	// IMP=0x000000000001fe2d
- (void).cxx_destruct;	// IMP=0x0000000000020aa1
@property(readonly, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(readonly, nonatomic) UILabel *domainLabel; // @synthesize domainLabel=_domainLabel;
@property(readonly, nonatomic) UILabel *readStoryLabel; // @synthesize readStoryLabel=_readStoryLabel;
@property(retain, nonatomic) NSURL *domainURL; // @synthesize domainURL=_domainURL;
@property(nonatomic) unsigned long long excerptLenthType; // @synthesize excerptLenthType=_excerptLenthType;
- (void)layoutSubviews;	// IMP=0x00000000000203ee
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000020122

@end

