//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface PUPlayheadView : UIView
{
    UIView *_line;	// 8 = 0x8
    UIView *_outline;	// 16 = 0x10
    _Bool _tintColorForPlayhead;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000037cbac
- (void)layoutSubviews;	// IMP=0x000000000037c779
- (void)tintColorDidChange;	// IMP=0x000000000037c6f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000037c3a0

@end
