//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSURL, SDAirDropCompressor, SDStatusMonitor;
@protocol OS_dispatch_source, SDAirDropFileZipperDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropFileZipper : NSObject
{
    _Bool _usePKZip;	// 8 = 0x8
    long long _fileCount;	// 16 = 0x10
    long long _totalBytes;	// 24 = 0x18
    struct _BOMBom *_bomArchive;	// 32 = 0x20
    NSURL *_tempFolder;	// 40 = 0x28
    NSString *_bomPath;	// 48 = 0x30
    NSURL *_destination;	// 56 = 0x38
    struct _BOMCopier *_bomCopier;	// 64 = 0x40
    long long _lastBytesCopied;	// 72 = 0x48
    long long _totalBytesCopied;	// 80 = 0x50
    SDStatusMonitor *_monitor;	// 88 = 0x58
    struct __CFReadStream *_readStream;	// 96 = 0x60
    struct __CFWriteStream *_writeStream;	// 104 = 0x68
    double _timeStarted;	// 112 = 0x70
    double _lastProgress;	// 120 = 0x78
    NSMutableArray *_topLevelFiles;	// 128 = 0x80
    NSMutableArray *_placeholderFiles;	// 136 = 0x88
    NSMutableArray *_orderedRelativePaths;	// 144 = 0x90
    NSMutableDictionary *_relativePathToFile;	// 152 = 0x98
    NSObject<OS_dispatch_source> *_progressTimer;	// 160 = 0xa0
    NSMutableDictionary *_alternateNames;	// 168 = 0xa8
    SDAirDropCompressor *_compressionEngine;	// 176 = 0xb0
    CDUnknownBlockType _creationCompletionHandler;	// 184 = 0xb8
    _Bool _disableAdaptiveCompressionForZipping;	// 192 = 0xc0
    _Bool _shouldExtractMediaFromPhotosBundles;	// 193 = 0xc1
    int _clientPid;	// 196 = 0xc4
    NSArray *_sourceFiles;	// 200 = 0xc8
    NSString *_senderName;	// 208 = 0xd0
    NSString *_unzipCompressionType;	// 216 = 0xd8
    NSString *_zipCompressionType;	// 224 = 0xe0
    NSSet *_skipReadableCheckFiles;	// 232 = 0xe8
    id <SDAirDropFileZipperDelegate> _delegate;	// 240 = 0xf0
    CDStruct_4c969caf _auditToken;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x0020000000131324
@property __weak id <SDAirDropFileZipperDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool shouldExtractMediaFromPhotosBundles; // @synthesize shouldExtractMediaFromPhotosBundles=_shouldExtractMediaFromPhotosBundles;
@property _Bool disableAdaptiveCompressionForZipping; // @synthesize disableAdaptiveCompressionForZipping=_disableAdaptiveCompressionForZipping;
@property(copy) NSSet *skipReadableCheckFiles; // @synthesize skipReadableCheckFiles=_skipReadableCheckFiles;
@property(readonly, copy) NSString *zipCompressionType; // @synthesize zipCompressionType=_zipCompressionType;
@property(copy) NSString *unzipCompressionType; // @synthesize unzipCompressionType=_unzipCompressionType;
@property(copy) NSString *senderName; // @synthesize senderName=_senderName;
@property(copy) NSArray *sourceFiles; // @synthesize sourceFiles=_sourceFiles;
@property int clientPid; // @synthesize clientPid=_clientPid;
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (void)stop;	// IMP=0x00100000001311a7
- (void)unzip;	// IMP=0x0010000000130d66
- (void)zip;	// IMP=0x0010000000130749
- (id)temporaryBomPath;	// IMP=0x0010000000130574
- (_Bool)initBomWithFiles;	// IMP=0x00100000001300ef
- (void)startBomCopy:(id)arg1 destination:(id)arg2 options:(id)arg3;	// IMP=0x001000000012fb48
- (void)allowProgressCircleToComplete;	// IMP=0x001000000012faf4
- (int)bomCopierCopy:(id)arg1 destination:(id)arg2 options:(id)arg3;	// IMP=0x001000000012f65a
- (void)moveFilesToDestination;	// IMP=0x001000000012f2f8
- (void)moveFile:(struct __CFURL *)arg1 toDestination:(struct __CFURL *)arg2;	// IMP=0x001000000012f12a
- (id)conflictResolvedURL:(id)arg1;	// IMP=0x001000000012f031
- (void)removeUnusedPlaceholderFiles;	// IMP=0x001000000012ee70
- (_Bool)createPlaceholderFiles;	// IMP=0x001000000012e74c
- (id)prettyNameBasedOnUUID:(id)arg1;	// IMP=0x001000000012e6a8
- (id)URLFromFileInfo:(id)arg1;	// IMP=0x001000000012e55f
- (_Bool)addFileURLToBom:(struct _BOMBom *)arg1 file:(struct __CFURL *)arg2 base:(struct __CFURL *)arg3 propertyKeys:(id)arg4 topLevel:(_Bool)arg5;	// IMP=0x001000000012e371
- (void)addParentChain:(struct _BOMBom *)arg1 file:(struct __CFURL *)arg2 base:(struct __CFURL *)arg3;	// IMP=0x001000000012e2e8
- (_Bool)addFile:(struct __CFURL *)arg1 withBase:(struct __CFURL *)arg2 toBom:(struct _BOMBom *)arg3;	// IMP=0x001000000012e1bf
- (struct __CFArray *)copyReverseParentChain:(struct __CFURL *)arg1 base:(struct __CFURL *)arg2;	// IMP=0x001000000012e140
- (long long)totalFileSize:(struct __CFURL *)arg1;	// IMP=0x001000000012e0ce
- (void)bomCopierFatalError:(const char *)arg1;	// IMP=0x001000000012dfcc
- (void)bomCopierFatalFileError:(int)arg1;	// IMP=0x001000000012df61
- (void)bomCopierCopyFileFinished:(const char *)arg1 type:(int)arg2 size:(long long)arg3 operation:(int)arg4;	// IMP=0x001000000012dd06
- (void)quarantineFile:(id)arg1;	// IMP=0x001000000012dd00
- (_Bool)pathExistsInPlaceholderInfo:(id)arg1;	// IMP=0x001000000012db36
- (id)fixedRelativePath:(const char *)arg1;	// IMP=0x001000000012daa6
- (void)removeFileFromPlaceholderList:(id)arg1;	// IMP=0x001000000012d927
- (_Bool)validFileName:(id)arg1;	// IMP=0x001000000012d686
- (id)absoluteURLIfTopLevelFile:(const char *)arg1 isDirectory:(_Bool)arg2 base:(struct __CFURL *)arg3;	// IMP=0x001000000012d5ac
- (void)notifyProgress:(long long)arg1 force:(_Bool)arg2;	// IMP=0x001000000012d3c8
- (id)timeRemaining:(long long)arg1 timeNow:(double)arg2;	// IMP=0x001000000012d383
- (struct __CFReadStream *)copyReadStream;	// IMP=0x001000000012d36c
- (void)setReadStream:(struct __CFReadStream *)arg1;	// IMP=0x001000000012d33b
@property(copy) NSURL *destination;
- (void)setPlaceholderFiles:(id)arg1 withCreationCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012cfe4
- (void)setTotalBytes:(id)arg1;	// IMP=0x001000000012cfc0
- (_Bool);	// IMP=0x001000000012cfab
- (_Bool)isCompressor;	// IMP=0x001000000012cf9d
- (void)notifyClientForEvent:(long long)arg1 withProperty:(void *)arg2;	// IMP=0x001000000012ced3
- (void)dealloc;	// IMP=0x001000000012ce4c
- (id)init;	// IMP=0x001000000012cc96

@end

