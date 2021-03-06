//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface MFFileArchive : NSObject
{
    NSData *_inputData;	// 8 = 0x8
    NSMutableData *_outputData;	// 16 = 0x10
    CDUnknownBlockType _readerBlock;	// 24 = 0x18
    CDUnknownBlockType _writerBlock;	// 32 = 0x20
    struct _NSRange _inputRange;	// 40 = 0x28
}

+ (id)archive;	// IMP=0x00000000000e17dd
- (void).cxx_destruct;	// IMP=0x00000000000e3952
@property(copy, nonatomic) CDUnknownBlockType writerBlock; // @synthesize writerBlock=_writerBlock;
@property(copy, nonatomic) CDUnknownBlockType readerBlock; // @synthesize readerBlock=_readerBlock;
@property(retain, nonatomic) NSMutableData *outputData; // @synthesize outputData=_outputData;
@property(nonatomic) struct _NSRange inputRange; // @synthesize inputRange=_inputRange;
@property(retain, nonatomic) NSData *inputData; // @synthesize inputData=_inputData;
- (int)_decompressionCompleteForArchive:(struct archive *)arg1 error:(id *)arg2;	// IMP=0x00000000000e3878
- (_Bool)_decompressArchive:(struct archive *)arg1 intoArchiveDirectory:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e3560
- (struct archive *)_decompressionArchive;	// IMP=0x00000000000e3538
- (void)decompressContents:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e342b
- (_Bool)_decompressContents:(id)arg1 inMemoryWithError:(id *)arg2 mainEntry:(_Bool)arg3;	// IMP=0x00000000000e32c2
- (int)_compressionCompleteForArchive:(struct archive *)arg1 error:(id *)arg2;	// IMP=0x00000000000e326c
- (int)_archiveDirectoryName:(id)arg1 withArchive:(struct archive *)arg2 error:(id *)arg3;	// IMP=0x00000000000e31ad
- (int)_compressContents:(id)arg1 fileName:(id)arg2 withArchive:(struct archive *)arg3 error:(id *)arg4;	// IMP=0x00000000000e2fe9
- (struct archive_entry *)_compressionArchiveEntryWithName:(id)arg1 length:(unsigned long long)arg2 isDirectory:(_Bool)arg3;	// IMP=0x00000000000e2eff
- (int)_compressWithArchive:(struct archive *)arg1 error:(id *)arg2;	// IMP=0x00000000000e2ce7
- (int)_compressContents:(id)arg1 withArchive:(struct archive *)arg2 error:(id *)arg3;	// IMP=0x00000000000e2a1e
- (struct archive *)_compressionArchive;	// IMP=0x00000000000e29ef
- (id)compressFolder:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e220d
- (void)compressContents:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e204d
- (id)_compressContents:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e1f71
- (void)unregisterBlocks;	// IMP=0x00000000000e1aa1
- (void)registerBlocks:(CDUnknownBlockType)arg1 writer:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e1a44
- (id)_errorForArchiveStatus:(long long)arg1;	// IMP=0x00000000000e18ed
- (id)description;	// IMP=0x00000000000e186a
- (id)init;	// IMP=0x00000000000e17f6
- (void)dealloc;	// IMP=0x00000000000e176d

@end

