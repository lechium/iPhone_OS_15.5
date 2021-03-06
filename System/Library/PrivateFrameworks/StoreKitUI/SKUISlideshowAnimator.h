//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/UIViewControllerAnimatorTransitioning-Protocol.h>

@class NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUISlideshowAnimator : NSObject <UIViewControllerAnimatorTransitioning>
{
    UIImageView *_imageView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002d7e9c
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)animationEnded:(_Bool)arg1;	// IMP=0x00000000002d7e7b
- (void)animateTransition:(id)arg1;	// IMP=0x00000000002d7977
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000002d7969

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

