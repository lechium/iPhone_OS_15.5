//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BUZipFileDescriptorWrapper, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface BUZipFileArchive
{
    unsigned long long _archiveLength;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    BUZipFileDescriptorWrapper *_fdWrapper;	// 24 = 0x18
    NSURL *_temporaryDirectoryURL;	// 32 = 0x20
    NSURL *_URL;	// 40 = 0x28
}

+ (_Bool)extractArchiveFromURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000013af5
+ (id)zipArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000011d6a
+ (void)readArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000011bc3
+ (_Bool)isZipArchiveAtFD:(int)arg1;	// IMP=0x0000000000011b0d
+ (_Bool)isZipArchiveAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001199c
- (void).cxx_destruct;	// IMP=0x0000000000013c62
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSURL *temporaryDirectoryURL; // @synthesize temporaryDirectoryURL=_temporaryDirectoryURL;
@property(retain, nonatomic) BUZipFileDescriptorWrapper *fdWrapper; // @synthesize fdWrapper=_fdWrapper;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (id)debugDescription;	// IMP=0x00000000000139e9
- (_Bool)isValid;	// IMP=0x000000000001388d
- (id)newArchiveReadChannel;	// IMP=0x000000000001360f
- (unsigned long long)archiveLength;	// IMP=0x0000000000013525
- (_Bool)copyToTemporaryLocationRelativeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012ba1
- (_Bool)reopenWithTemporaryURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012ad7
- (void)removeTemporaryDirectory;	// IMP=0x00000000000129f2
- (void)createTemporaryDirectoryRelativeToURL:(id)arg1;	// IMP=0x00000000000128d1
- (void)dealloc;	// IMP=0x000000000001286e
- (id)initWithWriter:(id)arg1 forReadingFromURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000125c8
- (_Bool)openWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001220a
- (id)initForReadingFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000001211d

@end
