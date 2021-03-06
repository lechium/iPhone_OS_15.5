//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIScrollView;

@interface PRXScrollableContentView
{
    UIScrollView *_scrollView;	// 8 = 0x8
    NSLayoutConstraint *_scrollViewHeightConstraint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000149b7
@property(retain, nonatomic) NSLayoutConstraint *scrollViewHeightConstraint; // @synthesize scrollViewHeightConstraint=_scrollViewHeightConstraint;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001481a
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000147b1
- (void)dealloc;	// IMP=0x0000000000014757
- (id)initWithCardStyle:(long long)arg1 scrollView:(id)arg2;	// IMP=0x000000000001425e
- (id)initWithCardStyle:(long long)arg1;	// IMP=0x000000000001420f

@end

