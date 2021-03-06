//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/SSDownloadManagerObserver-Protocol.h>

@class NSMutableArray, NSString, SSDownload, SSDownloadManager, TVPStateMachine;

__attribute__((visibility("hidden")))
@interface VUIStoreDownloadMonitor : NSObject <SSDownloadManagerObserver>
{
    SSDownloadManager *_downloadManager;	// 8 = 0x8
    SSDownload *_download;	// 16 = 0x10
    TVPStateMachine *_stateMachine;	// 24 = 0x18
    NSMutableArray *_completionHandlers;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x0000000000089952
- (void).cxx_destruct;	// IMP=0x000000000008b9fe
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) SSDownload *download; // @synthesize download=_download;
@property(retain, nonatomic) SSDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void)_registerStateMachineHandlers;	// IMP=0x000000000008a374
- (void)downloadManagerDownloadsDidChange:(id)arg1;	// IMP=0x0000000000089f4c
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;	// IMP=0x0000000000089c56
- (void)waitForDownloadToBecomePlayableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000089b65
- (void)dealloc;	// IMP=0x0000000000089b20
- (id)initWithDownload:(id)arg1 downloadManager:(id)arg2;	// IMP=0x00000000000899a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

