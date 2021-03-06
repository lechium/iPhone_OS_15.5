//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, TRIClient;
@protocol OS_dispatch_queue, TRINotificationToken;

@interface VSTrialService : NSObject
{
    TRIClient *_triClient;	// 8 = 0x8
    NSArray *_cachedVoices;	// 16 = 0x10
    NSArray *_cachedResources;	// 24 = 0x18
    id <TRINotificationToken> _trialNotificationToken;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_downloadQueue;	// 40 = 0x28
    NSLock *_clientRefreshLock;	// 48 = 0x30
}

+ (id)defaultDownloadOptions;	// IMP=0x0000000000040d3a
+ (id)versionFactorNameWithFactorName:(id)arg1;	// IMP=0x0000000000040d1e
+ (id)sharedService;	// IMP=0x0000000000040cc9
- (void).cxx_destruct;	// IMP=0x0000000000041d6f
@property(retain, nonatomic) NSLock *clientRefreshLock; // @synthesize clientRefreshLock=_clientRefreshLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) id <TRINotificationToken> trialNotificationToken; // @synthesize trialNotificationToken=_trialNotificationToken;
@property(retain, nonatomic) NSArray *cachedResources; // @synthesize cachedResources=_cachedResources;
@property(retain, nonatomic) NSArray *cachedVoices; // @synthesize cachedVoices=_cachedVoices;
@property(retain, nonatomic) TRIClient *triClient; // @synthesize triClient=_triClient;
- (void)_removeAssetWithFactorName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041a09
- (void)_downloadFactorName:(id)arg1 withOptions:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000041525
- (void)downloadNamespaceImmediatelyIfNeededWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041129
- (id)_fileOfFactorName:(id)arg1;	// IMP=0x0000000000040f55
- (id)_directoryOfFactorName:(id)arg1;	// IMP=0x0000000000040d81
- (void)refreshTrialClient;	// IMP=0x00000000000407e9
- (void)dealloc;	// IMP=0x00000000000407a3
- (id)init;	// IMP=0x00000000000405b5
- (void)removeVoice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000422cb
- (void)downloadVoice:(id)arg1 withOptions:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000042226
- (id)selectVoiceWithLanguage:(id)arg1 name:(id)arg2 type:(long long)arg3 footprint:(long long)arg4;	// IMP=0x0000000000042136
- (id)definedVoicesWithLanguage:(id)arg1 name:(id)arg2 type:(long long)arg3 footprint:(long long)arg4;	// IMP=0x0000000000041dc3
- (void)removeVoiceResource:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004277d
- (void)downloadVoiceResource:(id)arg1 withOptions:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000426d8
- (id)selectVoiceResourceWithLanguage:(id)arg1;	// IMP=0x00000000000425ff
- (id)definedVoiceResourcesWithLanguage:(id)arg1;	// IMP=0x0000000000042343

@end

