//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GQPBGProcessor
{
    Class mGenerator;	// 120 = 0x78
}

- (Class)generator;	// IMP=0x000000000003a786
- (_Bool)go;	// IMP=0x000000000003a668
- (void)pushInitialState;	// IMP=0x000000000003a5d9
- (id)initWithURL:(struct __CFURL *)arg1 zipArchive:(id)arg2 indexFileName:(id)arg3 outputType:(int)arg4 outputPath:(struct __CFString *)arg5 previewRequest:(struct __QLPreviewRequest *)arg6 progressiveHelper:(id)arg7 generator:(Class)arg8 cryptoKey:(id)arg9;	// IMP=0x000000000003a4cc
- (id)initWithURL:(struct __CFURL *)arg1 indexFileName:(id)arg2 outputType:(int)arg3 outputPath:(struct __CFString *)arg4 previewRequest:(struct __QLPreviewRequest *)arg5 progressiveHelper:(id)arg6 generator:(Class)arg7 zipArchive:(id)arg8 cryptoKey:(id)arg9;	// IMP=0x000000000003a3a8

@end

