//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHMediaFormatLivePhotoConversionRequest;

@interface PHMediaFormatLivePhotoBundleConversionRequest
{
    PHMediaFormatLivePhotoConversionRequest *_livePhotoConversionRequest;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000000135db
@property(retain) PHMediaFormatLivePhotoConversionRequest *livePhotoConversionRequest; // @synthesize livePhotoConversionRequest=_livePhotoConversionRequest;
- (void)postProcessSuccessfulCompositeRequest;	// IMP=0x000000000001304b
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012fdf
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;	// IMP=0x0000000000012f33
- (_Bool)prepareWithError:(id *)arg1;	// IMP=0x000000000001295b

@end
