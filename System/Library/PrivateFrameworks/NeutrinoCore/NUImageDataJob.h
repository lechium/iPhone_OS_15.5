//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface NUImageDataJob
{
    NSDictionary *_data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000bafc3
- (void)cleanUp;	// IMP=0x00000000000baf79
- (id)result;	// IMP=0x00000000000baefc
- (id)extractDataToDictionary:(id)arg1 bounds:(CDStruct_996ac03c)arg2 dataExtractor:(id)arg3 options:(id)arg4 colorSpace:(struct CGColorSpace *)arg5 error:(id *)arg6;	// IMP=0x00000000000bac6c
- (_Bool)render:(out id *)arg1;	// IMP=0x00000000000ba9c4
- (id)requestOptions;	// IMP=0x00000000000ba974
- (id)cacheKey;	// IMP=0x00000000000ba77e
- (_Bool)wantsCompleteStage;	// IMP=0x00000000000ba776
- (_Bool)wantsOutputImage;	// IMP=0x00000000000ba76e
- (_Bool)wantsOutputGeometry;	// IMP=0x00000000000ba766
- (id)scalePolicy;	// IMP=0x00000000000ba716

@end

