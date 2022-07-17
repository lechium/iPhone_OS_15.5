//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ActivityAchievementsUI/AAUIBadgeViewDrawable-Protocol.h>

@class AAUIBadgeModelConfiguration, AAUIMetalBadgeRenderer, CAMetalLayer, NSString, UIImage;
@protocol AAUIBadgeViewDrawableDelegate;

@interface AAUIMetalBadgeView : UIView <AAUIBadgeViewDrawable>
{
    _Bool _useEarnedShader;	// 8 = 0x8
    id <AAUIBadgeViewDrawableDelegate> _delegate;	// 16 = 0x10
    CAMetalLayer *_metalLayer;	// 24 = 0x18
    AAUIMetalBadgeRenderer *_renderer;	// 32 = 0x20
}

+ (Class)layerClass;	// IMP=0x0000000000007649
- (void).cxx_destruct;	// IMP=0x0000000000007a0a
@property(retain, nonatomic) AAUIMetalBadgeRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) CAMetalLayer *metalLayer; // @synthesize metalLayer=_metalLayer;
@property(nonatomic) __weak id <AAUIBadgeViewDrawableDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cleanupAfterSnapshot;	// IMP=0x0000000000007956
- (id)snapshot;	// IMP=0x0000000000007906
- (void)resizeBadgeForCurrentViewSize;	// IMP=0x00000000000078c9
@property(nonatomic, getter=isPaused) _Bool paused;
@property(retain, nonatomic) UIImage *backTextureImage;
@property(retain, nonatomic) AAUIBadgeModelConfiguration *configuration;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000007663
@property(readonly, nonatomic) UIView *view;
- (id)initUsingEarnedShader:(_Bool)arg1 delegate:(id)arg2;	// IMP=0x0000000000007408

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
