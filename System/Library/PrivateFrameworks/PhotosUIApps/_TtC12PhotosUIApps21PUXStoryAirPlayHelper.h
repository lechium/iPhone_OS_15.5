//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUIApps/PHAirPlayControllerContentProvider-Protocol.h>
#import <PhotosUIApps/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12PhotosUIApps21PUXStoryAirPlayHelper : NSObject <PHAirPlayControllerContentProvider, UIAdaptivePresentationControllerDelegate>
{
    MISSING_TYPE *pickerViewController;	// 8 = 0x8
    MISSING_TYPE *presentingViewController;	// 16 = 0x10
    MISSING_TYPE *airPlayContainerViewController;	// 24 = 0x18
    MISSING_TYPE *airPlayStoryViewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000c4ab0
- (id)init;	// IMP=0x00000000000c4a60
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00000000000c4a10
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;	// IMP=0x00000000000c4910
- (id)contentViewControllerForAirPlayController:(id)arg1;	// IMP=0x00000000000c46b0

@end

