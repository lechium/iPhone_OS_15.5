//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VisionKitCore/VKFeedbackAssetsProvider-Protocol.h>

@class NSString, VKCaptureTextAnalysisRequest, VKCaptureTextDetectionResult;

@interface VKCaptureTextFeedbackAssetProvider : NSObject <VKFeedbackAssetsProvider>
{
    VKCaptureTextAnalysisRequest *_request;	// 8 = 0x8
    VKCaptureTextDetectionResult *_detectionResult;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000874a7
@property(readonly, nonatomic) VKCaptureTextDetectionResult *detectionResult; // @synthesize detectionResult=_detectionResult;
@property(readonly, nonatomic) VKCaptureTextAnalysisRequest *request; // @synthesize request=_request;
- (_Bool)saveAssetsToFeedbackAttachmentsFolder:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000086ecf
- (id)initWithRequest:(id)arg1 detectionResult:(id)arg2;	// IMP=0x0000000000086e36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
