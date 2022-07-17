//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VN1JC7R3k4455fKQz0dY1VhQ, VN5kJNH3eYuyaLxNpZr5Z7zi, VN6Mb1ME89lyW3HpahkEygIG, VNClassifyImageAestheticsRequest, VNClassifyJunkImageRequest, VNClassifyMemeImageRequest, VNClassifyPotentialLandmarkRequest, VNCreateSceneprintRequest, VNGenerateAttentionBasedSaliencyImageRequest, VNGenerateObjectnessBasedSaliencyImageRequest, VNRecognizeDocumentElementsRequest, VNRecognizeObjectsRequest, VNSceneClassificationRequest, VNVYvzEtX1JlUdu8xx5qhDI;

__attribute__((visibility("hidden")))
@interface VCPPreAnalysisRequests : NSObject
{
    VNClassifyImageAestheticsRequest *_aestheticsRequest;	// 8 = 0x8
    VNSceneClassificationRequest *_classificationRequest;	// 16 = 0x10
    VNCreateSceneprintRequest *_sceneprintRequest;	// 24 = 0x18
    VNGenerateAttentionBasedSaliencyImageRequest *_saliencyRequest;	// 32 = 0x20
    VNClassifyJunkImageRequest *_junkImageRequest;	// 40 = 0x28
    VNRecognizeObjectsRequest *_objectRequest;	// 48 = 0x30
    VNGenerateObjectnessBasedSaliencyImageRequest *_saliencyObjectnessRequest;	// 56 = 0x38
    VNClassifyPotentialLandmarkRequest *_landmarkRequest;	// 64 = 0x40
    VNVYvzEtX1JlUdu8xx5qhDI *_nsfwRequest;	// 72 = 0x48
    VN6Mb1ME89lyW3HpahkEygIG *_tabooRequest;	// 80 = 0x50
    VN5kJNH3eYuyaLxNpZr5Z7zi *_semanticRequest;	// 88 = 0x58
    VNCreateSceneprintRequest *_sceneprintRawRequest;	// 96 = 0x60
    VNClassifyMemeImageRequest *_memeRequest;	// 104 = 0x68
    VN1JC7R3k4455fKQz0dY1VhQ *_adjustmentsRequest;	// 112 = 0x70
    VNRecognizeDocumentElementsRequest *_documentRequest;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000bb97e
@property(retain, nonatomic) VNRecognizeDocumentElementsRequest *documentRequest; // @synthesize documentRequest=_documentRequest;
@property(retain, nonatomic) VN1JC7R3k4455fKQz0dY1VhQ *adjustmentsRequest; // @synthesize adjustmentsRequest=_adjustmentsRequest;
@property(retain, nonatomic) VNClassifyMemeImageRequest *memeRequest; // @synthesize memeRequest=_memeRequest;
@property(retain, nonatomic) VNCreateSceneprintRequest *sceneprintRawRequest; // @synthesize sceneprintRawRequest=_sceneprintRawRequest;
@property(retain, nonatomic) VN5kJNH3eYuyaLxNpZr5Z7zi *semanticRequest; // @synthesize semanticRequest=_semanticRequest;
@property(retain, nonatomic) VN6Mb1ME89lyW3HpahkEygIG *tabooRequest; // @synthesize tabooRequest=_tabooRequest;
@property(retain, nonatomic) VNVYvzEtX1JlUdu8xx5qhDI *nsfwRequest; // @synthesize nsfwRequest=_nsfwRequest;
@property(retain, nonatomic) VNClassifyPotentialLandmarkRequest *landmarkRequest; // @synthesize landmarkRequest=_landmarkRequest;
@property(retain, nonatomic) VNGenerateObjectnessBasedSaliencyImageRequest *saliencyObjectnessRequest; // @synthesize saliencyObjectnessRequest=_saliencyObjectnessRequest;
@property(retain, nonatomic) VNRecognizeObjectsRequest *objectRequest; // @synthesize objectRequest=_objectRequest;
@property(retain, nonatomic) VNClassifyJunkImageRequest *junkImageRequest; // @synthesize junkImageRequest=_junkImageRequest;
@property(retain, nonatomic) VNGenerateAttentionBasedSaliencyImageRequest *saliencyRequest; // @synthesize saliencyRequest=_saliencyRequest;
@property(retain, nonatomic) VNCreateSceneprintRequest *sceneprintRequest; // @synthesize sceneprintRequest=_sceneprintRequest;
@property(retain, nonatomic) VNSceneClassificationRequest *classificationRequest; // @synthesize classificationRequest=_classificationRequest;
@property(retain, nonatomic) VNClassifyImageAestheticsRequest *aestheticsRequest; // @synthesize aestheticsRequest=_aestheticsRequest;

@end
