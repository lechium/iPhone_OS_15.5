//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatChainedConversionRequest
{
    PHMediaFormatConversionRequest *_independentRequest;	// 224 = 0xe0
    PHMediaFormatConversionRequest *_dependentRequest;	// 232 = 0xe8
    CDUnknownBlockType _successUpdateHandler;	// 240 = 0xf0
}

+ (id)chainedRequestForAdjustmentRenderRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001605b
+ (id)chainedRequestForRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id *)arg3 successUpdateHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015df7
+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000015d6a
- (void).cxx_destruct;	// IMP=0x00000000000164d1
@property(copy) CDUnknownBlockType successUpdateHandler; // @synthesize successUpdateHandler=_successUpdateHandler;
@property(retain) PHMediaFormatConversionRequest *dependentRequest; // @synthesize dependentRequest=_dependentRequest;
@property(retain) PHMediaFormatConversionRequest *independentRequest; // @synthesize independentRequest=_independentRequest;
- (void)postProcessSuccessfulCompositeRequest;	// IMP=0x00000000000163ed
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;	// IMP=0x000000000001634f
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;	// IMP=0x000000000001624b

@end
