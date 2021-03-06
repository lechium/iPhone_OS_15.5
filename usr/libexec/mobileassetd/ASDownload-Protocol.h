//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ASAssetRepository, NSDictionary, NSError, NSString, NSURL, NSURLRequest;

@protocol ASDownload <NSObject>
@property(readonly, nonatomic) _Bool useStreamingZip;
@property(readonly, retain, nonatomic) ASAssetRepository *assetRepository;
@property(readonly, nonatomic) NSURL *localCacheServerURL;
@property(readonly, nonatomic) NSURL *remoteURL;
@property(readonly, nonatomic) NSURL *archiveURL;
@property(readonly, nonatomic) struct __MobileAsset *mobileAsset;
@property(nonatomic) _Bool downloadDidEnd;
@property(readonly, nonatomic, getter=isStalled) _Bool stalled;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic, getter=isCancelled) _Bool cancelled;
- (NSURLRequest *)downloadRequestForURL:(NSURL *)arg1 useQueuingService:(_Bool)arg2 error:(id *)arg3;
- (_Bool)verifyFreeDiskSpace:(long long)arg1 error:(id *)arg2;
- (void)fireErrorWithError:(NSError *)arg1;
- (void)fireErrorInDomain:(NSString *)arg1 errorCode:(long long)arg2 userInfo:(NSDictionary *)arg3;
- (void)fireProgressWithOperation:(NSString *)arg1 progress:(float)arg2 callbackState:(NSDictionary *)arg3;
- (void)downloadDidFail:(NSError *)arg1;
- (int)resumeAfterDownload;
@end

