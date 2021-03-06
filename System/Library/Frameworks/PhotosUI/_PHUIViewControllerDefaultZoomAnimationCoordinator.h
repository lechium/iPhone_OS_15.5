//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface _PHUIViewControllerDefaultZoomAnimationCoordinator : PXZoomAnimationCoordinator
{
    UIViewController *_viewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000019206
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2;	// IMP=0x0000000000019043
- (void)animateContentForEndPointType:(long long)arg1 inView:(id)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4;	// IMP=0x0000000000018d97
- (id)initWithViewController:(id)arg1;	// IMP=0x0000000000018d29
- (id)init;	// IMP=0x0000000000018d15

@end

