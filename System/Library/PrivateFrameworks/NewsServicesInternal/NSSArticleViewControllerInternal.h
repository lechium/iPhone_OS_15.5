//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSSArticleInternal, NSSArticleView, UIActivityIndicatorView;

@interface NSSArticleViewControllerInternal : UIViewController
{
    _Bool _articleLoading;	// 8 = 0x8
    NSSArticleInternal *_article;	// 16 = 0x10
    NSSArticleView *_articleView;	// 24 = 0x18
    UIActivityIndicatorView *_spinner;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000e0f2
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) _Bool articleLoading; // @synthesize articleLoading=_articleLoading;
@property(retain, nonatomic) NSSArticleView *articleView; // @synthesize articleView=_articleView;
@property(retain, nonatomic) NSSArticleInternal *article; // @synthesize article=_article;
- (void)_tickleArticleView;	// IMP=0x000000000000df8d
- (void)_tickleSpinner;	// IMP=0x000000000000df04
- (void)presentArticle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000de13
- (_Bool)prefersStatusBarHidden;	// IMP=0x000000000000dd27
- (void)viewWillLayoutSubviews;	// IMP=0x000000000000da8b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000da35
- (void)viewDidLoad;	// IMP=0x000000000000d89b
- (id)initWithSpotlightIdentifier:(id)arg1;	// IMP=0x000000000000d6e2
- (id)initWithNotification:(id)arg1;	// IMP=0x000000000000d547
- (id)initWithArticle:(id)arg1;	// IMP=0x000000000000d4db

@end
