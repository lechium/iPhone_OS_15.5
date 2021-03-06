//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NewsUI/UIScrollViewDelegate-Protocol.h>

@class NSString, NUArticleExcerptReadMoreButton, NUArticleExcerptTraits, TFMultiDelegate, UIImageView, UILabel, UIScrollView, WKWebView;
@protocol UIScrollViewDelegate;

@interface NUArticleExcerptView : UIView <UIScrollViewDelegate>
{
    NUArticleExcerptTraits *_traits;	// 8 = 0x8
    UILabel *_headlineTitleLabel;	// 16 = 0x10
    UILabel *_headlineDateLabel;	// 24 = 0x18
    WKWebView *_excerptWebView;	// 32 = 0x20
    NUArticleExcerptReadMoreButton *_readMoreButton;	// 40 = 0x28
    id <UIScrollViewDelegate> _delegate;	// 48 = 0x30
    UIScrollView *_contentScrollView;	// 56 = 0x38
    UIImageView *_headlineImageView;	// 64 = 0x40
    UIView *_hairlineSeparatorView;	// 72 = 0x48
    UIView *_contentView;	// 80 = 0x50
    TFMultiDelegate *_multiDelegate;	// 88 = 0x58
}

+ (id)webViewConfiguration;	// IMP=0x000000000000b49c
- (void).cxx_destruct;	// IMP=0x000000000000d829
@property(readonly, nonatomic) TFMultiDelegate *multiDelegate; // @synthesize multiDelegate=_multiDelegate;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *hairlineSeparatorView; // @synthesize hairlineSeparatorView=_hairlineSeparatorView;
@property(readonly, nonatomic) UIImageView *headlineImageView; // @synthesize headlineImageView=_headlineImageView;
@property(readonly, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) __weak id <UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NUArticleExcerptReadMoreButton *readMoreButton; // @synthesize readMoreButton=_readMoreButton;
@property(readonly, nonatomic) WKWebView *excerptWebView; // @synthesize excerptWebView=_excerptWebView;
@property(readonly, nonatomic) UILabel *headlineDateLabel; // @synthesize headlineDateLabel=_headlineDateLabel;
@property(readonly, nonatomic) UILabel *headlineTitleLabel; // @synthesize headlineTitleLabel=_headlineTitleLabel;
@property(copy, nonatomic) NUArticleExcerptTraits *traits; // @synthesize traits=_traits;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000d418
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000000d406
- (void)updateImageAspectRatio;	// IMP=0x000000000000d141
- (void)layoutSubviews;	// IMP=0x000000000000c05f
- (void)updateWithHeadlineImage:(id)arg1;	// IMP=0x000000000000bf48
- (void)dealloc;	// IMP=0x000000000000be90
- (id)initWithTraits:(id)arg1;	// IMP=0x000000000000b65b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

