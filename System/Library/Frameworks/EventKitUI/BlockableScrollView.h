//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class NSObject;
@protocol BlockableScrollViewDelegate;

@interface BlockableScrollView : UIScrollView
{
    _Bool _isResizing;	// 8 = 0x8
    NSObject<BlockableScrollViewDelegate> *_blockableDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000cd4d6
@property(nonatomic) _Bool isResizing; // @synthesize isResizing=_isResizing;
@property(nonatomic) __weak NSObject<BlockableScrollViewDelegate> *blockableDelegate; // @synthesize blockableDelegate=_blockableDelegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000cd39e
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000cd221

@end

