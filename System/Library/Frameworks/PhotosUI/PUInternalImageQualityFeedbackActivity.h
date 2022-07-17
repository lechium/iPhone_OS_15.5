//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

#import <PhotosUI/PXFeedbackImageQualityUIViewControllerDelegate-Protocol.h>

@class NSString, PXFeedbackImageQualityUIViewController;

__attribute__((visibility("hidden")))
@interface PUInternalImageQualityFeedbackActivity : PXActivity <PXFeedbackImageQualityUIViewControllerDelegate>
{
    PXFeedbackImageQualityUIViewController *_feedbackController;	// 8 = 0x8
}

+ (long long)activityCategory;	// IMP=0x00000000001f3a21
- (void).cxx_destruct;	// IMP=0x00000000001f3cbf
- (void)feedbackImageQualityUIViewController:(id)arg1 didFinish:(_Bool)arg2;	// IMP=0x00000000001f3c88
- (id)activityViewController;	// IMP=0x00000000001f3be7
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000001f3b02
- (id)assets;	// IMP=0x00000000001f3a57
- (id)_systemImageName;	// IMP=0x00000000001f3a4a
- (id)activityTitle;	// IMP=0x00000000001f3a3d
- (id)activityType;	// IMP=0x00000000001f3a29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
