//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ASAssetMetadataDownloader
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_data;	// 16 = 0x10
    NSMutableDictionary *_completions;	// 24 = 0x18
    double _defaultNetworkTimeout;	// 32 = 0x20
}

@property(nonatomic) double defaultNetworkTimeout; // @synthesize defaultNetworkTimeout=_defaultNetworkTimeout;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2;	// IMP=0x001000000003dec7
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x001000000003dc38
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003d8a8
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;	// IMP=0x001000000003d872
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x001000000003d656
- (void)downloadMetadataFromURL:(id)arg1 withOptions:(id)arg2 ifNewerThan:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003d372
- (id)_lastModifiedDateFromResponse:(id)arg1;	// IMP=0x001000000003d306
- (id)_translateError:(id)arg1;	// IMP=0x001000000003d20f
- (void)dealloc;	// IMP=0x001000000003d1a7
- (id)init;	// IMP=0x001000000003d10f
- (id)_sessionForOptions:(id)arg1;	// IMP=0x001000000003d021
- (_Bool)_canUseBackgroundSession;	// IMP=0x001000000003d019
- (id)sessionConfigurationWithIdentifier:(id)arg1 options:(id)arg2;	// IMP=0x001000000003cec5

@end

