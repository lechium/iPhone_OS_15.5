//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMCameraCaptureDelegate-Protocol.h>

@class NSMutableArray, NSString, UIViewController;
@protocol CAMCameraReviewViewController;

@interface CAMCameraReviewAdapter : NSObject <CAMCameraCaptureDelegate>
{
    NSMutableArray *__pendingAssetsForReview;	// 8 = 0x8
    UIViewController<CAMCameraReviewViewController> *_cachedReviewViewController;	// 16 = 0x10
}

+ (id)reviewAssetForAVAsset:(id)arg1 audioMix:(id)arg2 properties:(id)arg3;	// IMP=0x000000000016b35b
+ (id)reviewAssetForLivePhoto:(id)arg1 withProperties:(id)arg2;	// IMP=0x000000000016b0c6
+ (id)reviewAssetForPhoto:(id)arg1 withProperties:(id)arg2;	// IMP=0x000000000016ad2f
+ (Class)cameraReviewViewControllerClass;	// IMP=0x000000000016ad1e
- (void).cxx_destruct;	// IMP=0x000000000016b8a9
@property(retain, nonatomic, getter=_cachedReviewViewController, setter=_setCachedReviewViewController:) UIViewController<CAMCameraReviewViewController> *cachedReviewViewController; // @synthesize cachedReviewViewController=_cachedReviewViewController;
@property(readonly, nonatomic) NSMutableArray *_pendingAssetsForReview; // @synthesize _pendingAssetsForReview=__pendingAssetsForReview;
- (void)cameraViewController:(id)arg1 didCaptureAVAsset:(id)arg2 andAudioMix:(id)arg3 withProperties:(id)arg4 error:(id)arg5;	// IMP=0x000000000016b781
- (void)cameraViewController:(id)arg1 didCaptureLivePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;	// IMP=0x000000000016b6ae
- (void)cameraViewController:(id)arg1 didCapturePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;	// IMP=0x000000000016b5db
@property(readonly, nonatomic) UIViewController<CAMCameraReviewViewController> *cameraReviewViewController;
- (id)init;	// IMP=0x000000000016ab9e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

