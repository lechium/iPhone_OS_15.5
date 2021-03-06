//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSError, NSFileCoordinator, NSProgress, NSURL;

@interface WFiCloudFileDownloadOperation : NSOperation
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
    _Bool _retrieveFolderContents;	// 10 = 0xa
    NSURL *_fileURL;	// 16 = 0x10
    NSArray *_downloadedFiles;	// 24 = 0x18
    NSError *_downloadError;	// 32 = 0x20
    NSFileCoordinator *_fileCoordinator;	// 40 = 0x28
    NSProgress *_progress;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000043711
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSFileCoordinator *fileCoordinator; // @synthesize fileCoordinator=_fileCoordinator;
@property(readonly, nonatomic) _Bool retrieveFolderContents; // @synthesize retrieveFolderContents=_retrieveFolderContents;
@property(readonly, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(readonly, nonatomic) NSArray *downloadedFiles; // @synthesize downloadedFiles=_downloadedFiles;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (_Bool)isAsynchronous;	// IMP=0x0000000000043684
- (void)finishRunningWithFiles:(id)arg1 error:(id)arg2;	// IMP=0x0000000000043437
- (void)downloadDirectoryAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043359
- (void)downloadItemAtFileURL:(id)arg1 ofSize:(id)arg2 fileIsUbiquitous:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000043136
- (void)getFileInfoForURL:(id)arg1 fileIsUbiquitous:(_Bool *)arg2 fileIsDirectory:(_Bool *)arg3 fileSize:(id *)arg4 error:(id *)arg5;	// IMP=0x0000000000043068
- (void)start;	// IMP=0x0000000000042d75
- (id)initWithFileURL:(id)arg1 retrieveFolderContents:(_Bool)arg2 progress:(id)arg3;	// IMP=0x0000000000042c1c

@end

