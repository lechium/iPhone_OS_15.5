//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIStatusBar;

@interface SBZoomView : UIView
{
    UIView *_contentView;	// 8 = 0x8
    UIStatusBar *_statusBar;	// 16 = 0x10
}

+ (id)_chromeStatusBarImageForInterfaceOrientation:(long long)arg1;	// IMP=0x000000000016d7c8
- (void).cxx_destruct;	// IMP=0x000000000003adee
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x00000000000317c0
- (void)dealloc;	// IMP=0x000000000003aabb
- (id)_initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002b218
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000016d741

@end

