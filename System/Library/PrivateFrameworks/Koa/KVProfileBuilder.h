//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVDatasetBuilder, KVProfileInfo, NSOutputStream, NSURL;
@protocol KVProfileWriter;

@interface KVProfileBuilder : NSObject
{
    NSOutputStream *_stream;	// 8 = 0x8
    KVProfileInfo *_profileInfo;	// 16 = 0x10
    NSObject<KVProfileWriter> *_writer;	// 24 = 0x18
    KVDatasetBuilder *_activeDataset;	// 32 = 0x20
    unsigned int _datasetCount;	// 40 = 0x28
    NSURL *_fileURL;	// 48 = 0x30
}

+ (id)builderWithProfileInfo:(id)arg1 format:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x0000000000013f2e
+ (void)initalize;	// IMP=0x0000000000013f0a
+ (id)fileWriterWithProfileInfo:(id)arg1 targetDirectory:(id)arg2 format:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x0000000000014170
- (void).cxx_destruct;	// IMP=0x00000000000135cd
- (id)_fileURL;	// IMP=0x00000000000135bf
- (id)buildWithError:(id *)arg1;	// IMP=0x0000000000013545
- (id)_buildWithError:(id *)arg1;	// IMP=0x0000000000013327
- (_Bool)_finishWithError:(id *)arg1;	// IMP=0x000000000001315b
- (id)addDataset:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001309f
- (id)initWithProfileInfo:(id)arg1 outputStream:(id)arg2 fileURL:(id)arg3 format:(unsigned char)arg4 provider:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000012add
- (id)init;	// IMP=0x0000000000012a79
- (id)finishWritingWithError:(id *)arg1;	// IMP=0x0000000000014034

@end

