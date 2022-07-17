//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString, NSURL;

@interface VCPMADServiceImageURLAsset
{
    NSURL *_url;	// 8 = 0x8
    struct CF<__CVBuffer *> _pixelBuffer;	// 16 = 0x10
    unsigned int _orientation;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSArray *_documentObservations;	// 40 = 0x28
    _Bool _hasCachedParseData;	// 48 = 0x30
    NSData *_cachedParseData;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x0000000000186d24
- (void).cxx_destruct;	// IMP=0x0000000000186cc2
- (void)setCachedParseData:(id)arg1;	// IMP=0x0000000000186c4f
- (id)cachedParseData;	// IMP=0x0000000000186b93
- (_Bool)hasCachedParseData;	// IMP=0x0000000000186b83
- (void)setDocumentObservations:(id)arg1;	// IMP=0x0000000000186b25
- (id)documentObservations;	// IMP=0x0000000000186a6b
- (int)loadPixelBuffer:(struct __CVBuffer **)arg1 orientation:(unsigned int *)arg2;	// IMP=0x00000000001867fc
- (id)identifier;	// IMP=0x00000000001867e7
- (id)initWithURL:(id)arg1 identifier:(id)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4;	// IMP=0x0000000000186703

@end
