//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIScrollView, UIStackView, UIView;

__attribute__((visibility("hidden")))
@interface ExtensionsStackViewController
{
    UIView *_headerView;	// 8 = 0x8
    UIStackView *_stackView;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000009b8e42
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void)_updateScrollViewForLayout:(unsigned long long)arg1;	// IMP=0x00100000009b8d8e
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x00100000009b8d43
- (id)headerView;	// IMP=0x00100000009b8d2e
@property(readonly, copy, nonatomic) NSArray *stackedViews;
- (void)viewDidLoad;	// IMP=0x00100000009b83a3

@end
