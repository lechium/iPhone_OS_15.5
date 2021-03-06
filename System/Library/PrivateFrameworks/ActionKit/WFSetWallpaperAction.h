//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFSetWallpaperAction : WFAction
{
}

+ (id)unableToGetImageError;	// IMP=0x0000000000370adc
+ (id)userInterfaceProtocol;	// IMP=0x0000000000370acb
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x0000000000371cb9
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x0000000000371ca0
- (id)setWallpaperFailedError;	// IMP=0x0000000000371b77
- (id)missingImageError;	// IMP=0x0000000000371a4e
- (id)invalidLocationErrorWithProvidedLocation:(id)arg1;	// IMP=0x00000000003718db
- (id)imageTooLargeError;	// IMP=0x00000000003717b2
- (long long)wallpaperLocationFromLocationParameter;	// IMP=0x0000000000371739
- (id)readableLocationParameterValues;	// IMP=0x00000000003716e2
- (id)locationParameterValues;	// IMP=0x00000000003716ad
- (double)maximumSizeInPixels;	// IMP=0x00000000003713b6
- (void)setWallpaperWithImage:(id)arg1;	// IMP=0x0000000000370ec6
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x0000000000370ce9
- (double)currentParallaxFactor;	// IMP=0x0000000000370cc5
- (_Bool)perspectiveZoom;	// IMP=0x0000000000370c65
- (_Bool)showPreview;	// IMP=0x0000000000370c05

@end

