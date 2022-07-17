//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PHMediaFormatAssetBundleConversionRequest
{
    NSArray *_subrequests;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x000000000001182d
@property(retain) NSArray *subrequests; // @synthesize subrequests=_subrequests;
- (id)outputFileType;	// IMP=0x00000000000116a1
- (id)outputPathExtension;	// IMP=0x000000000001151a
- (void)postProcessSuccessfulCompositeRequest;	// IMP=0x0000000000011514
- (_Bool)requiresMetadataChanges;	// IMP=0x000000000001150c
- (_Bool)requiresFormatConversion;	// IMP=0x000000000001147c
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011346
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;	// IMP=0x00000000000111a0
- (_Bool)prepareWithError:(id *)arg1;	// IMP=0x0000000000011035

@end
