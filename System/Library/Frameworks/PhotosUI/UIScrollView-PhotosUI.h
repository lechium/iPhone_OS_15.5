//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (PhotosUI)
- (void)_pu_endPageSwipeTest:(id)arg1;	// IMP=0x00000000004a9a98
- (void)_pu_incrementForPageSwipeTest:(id)arg1 dt:(double)arg2 stop:(_Bool *)arg3;	// IMP=0x00000000004a9522
- (void)_pu_beginPageSwipeTest:(id)arg1;	// IMP=0x00000000004a9474
- (void)pu_ppt_performPageSwipeTest:(id)arg1 iterations:(long long)arg2 numberOfPages:(long long)arg3 scrollAxis:(unsigned long long)arg4;	// IMP=0x00000000004a91e7
- (void)pu_ppt_scrollToContentOffset:(struct CGPoint)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004a9062
- (void)_pu_setPPTScrollHelper:(id)arg1;	// IMP=0x00000000004a904c
- (id)_pu_pptScrollHelper;	// IMP=0x00000000004a903b
@property(readonly, nonatomic) _Bool pu_isPerformingScrollTest;
- (void)pu_cancelScrollAnimation;	// IMP=0x00000000004a8f9f
- (void)pu_cancelScrollGesture;	// IMP=0x00000000004a8f43
- (struct CGSize)pu_currentContentSize;	// IMP=0x00000000004a8eb1
- (struct CGRect)pu_displayFrameForRect:(struct CGRect)arg1;	// IMP=0x00000000004a8e58
- (void)pu_scrollToEdge:(unsigned int)arg1 animated:(_Bool)arg2;	// IMP=0x00000000004a8cf0
- (_Bool)_pu_isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;	// IMP=0x00000000004a8b97
@property(readonly, nonatomic) _Bool pu_isBouncing;
- (unsigned long long)_pu_scrollableAxis;	// IMP=0x00000000004a89ff
- (_Bool)pu_isScrolledBeyondEdge:(unsigned int)arg1;	// IMP=0x00000000004a89e5
- (_Bool)pu_isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;	// IMP=0x00000000004a8930
- (_Bool)pu_isScrolledAtEdge:(unsigned int)arg1;	// IMP=0x00000000004a888f
- (void)pu_scrollToContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00000000004a8745
@end

