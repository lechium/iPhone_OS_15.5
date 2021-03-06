//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface NUImageDataRequest
{
    NSString *_dataExtractor;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ba6e5
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSString *dataExtractor; // @synthesize dataExtractor=_dataExtractor;
- (void)submit:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ba685
- (id)newRenderJob;	// IMP=0x00000000000ba657
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ba5ee
- (id)initWithRequest:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3;	// IMP=0x00000000000ba4dd
- (id)initWithComposition:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3;	// IMP=0x00000000000ba40c
- (id)initWithComposition:(id)arg1;	// IMP=0x00000000000ba090
- (id)initWithRequest:(id)arg1;	// IMP=0x00000000000b9d14

@end

