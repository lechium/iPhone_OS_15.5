//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UVInjectedScene;
@protocol UIScenePresenter;

@interface UVSceneHost : UIView
{
    NSString *_hostIdentifier;	// 8 = 0x8
    id <UIScenePresenter> _scenePresenter;	// 16 = 0x10
    _Bool _invalidated;	// 24 = 0x18
    UVInjectedScene *_injectedScene;	// 32 = 0x20
}

+ (id)createWithInjectedScene:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000423f
- (void).cxx_destruct;	// IMP=0x00000000000046fd
@property(readonly, nonatomic) __weak UVInjectedScene *injectedScene; // @synthesize injectedScene=_injectedScene;
- (void)layoutSubviews;	// IMP=0x0000000000004642
- (void)invalidate;	// IMP=0x00000000000045a3
- (void)dealloc;	// IMP=0x000000000000452d
- (id)_initWithHostIdentifier:(id)arg1 scenePresenter:(id)arg2 injectedScene:(id)arg3;	// IMP=0x00000000000043eb

@end
