//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol BURandomWriteChannel;

@interface BUZipFileWriter
{
    id <BURandomWriteChannel> _writeChannel;	// 8 = 0x8
    CDUnknownBlockType _writeChannelCompletionHandler;	// 16 = 0x10
}

+ (void)zipDirectoryAtURL:(id)arg1 customDirectoryFilename:(id)arg2 toURL:(id)arg3 queue:(id)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000001636c
+ (void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001627c
- (void).cxx_destruct;	// IMP=0x0000000000016ff9
- (void)truncateToOffsetImpl:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001625f
- (id)prepareWriteChannelWithCloseCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001621b
- (void)copyRemainingEntries:(id)arg1 fromArchive:(id)arg2 progress:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015e0d
- (void)copyEntriesFromZipFileWriter:(id)arg1 readingFromURL:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015a30
- (id)initWithZipFileArchive:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000155a7
- (id)initWithZipFileArchive:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015590
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000153d4
- (id)initWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000153bd

@end
