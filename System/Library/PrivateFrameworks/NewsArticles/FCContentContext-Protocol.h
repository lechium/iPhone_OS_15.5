//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsArticles/FCCacheFlushing-Protocol.h>
#import <NewsArticles/NSObject-Protocol.h>

@class FCArticleController, FCAssetManager, FCContentManifest, FCFlintResourceManager, FCInterestToken, FCJSONRecordSourceSchema, FCNetworkBehaviorMonitor, FCTagController, NSArray, NSString, NSURL;
@protocol FCAVAssetFactoryType, FCAVAssetPrewarming, FCBackgroundTaskable, FCCacheFlushing, FCCoreConfigurationManager, FCCoreConfigurationManager><FCNewsAppConfigurationManager, FCFeedDatabaseProtocol, FCJSONRecordSourceType, FCJSONRecordTreeSourceType, FCMagazinesConfigurationManager, FCNewsAppConfigurationManager, FCPPTContext;

@protocol FCContentContext <NSObject, FCCacheFlushing>
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 exceptForFlusher:(id <FCCacheFlushing>)arg2;
- (FCInterestToken *)interestTokenForContentManifest:(FCContentManifest *)arg1;
- (id <FCJSONRecordTreeSourceType>)recordTreeSourceWithRecordSources:(NSArray *)arg1;
- (id <FCJSONRecordSourceType>)recordSourceWithSchema:(FCJSONRecordSourceSchema *)arg1;
@property(nonatomic, readonly) NSString *contentEnvironmentToken;
- (void)ppt_prewarmFeedDatabase;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
@property(nonatomic, readonly) id <FCFeedDatabaseProtocol> feedDatabase;
@property(nonatomic, readonly) id <FCPPTContext> pptContext;
@property(nonatomic, readonly) id <FCBackgroundTaskable> backgroundTaskable;
@property(nonatomic, readonly) NSURL *assetCacheDirectoryURL;
@property(nonatomic, readonly) NSString *contentDirectory;
@property(nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property(nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property(nonatomic, readonly) FCTagController *tagController;
@property(nonatomic, readonly) FCArticleController *articleController;
@property(nonatomic, readonly) id <FCAVAssetFactoryType> avAssetFactory;
@property(nonatomic, readonly) id <FCAVAssetPrewarming> avAssetPrewarmer;
@property(nonatomic, readonly) FCAssetManager *assetManager;
- (id <FCMagazinesConfigurationManager>)magazinesConfigurationManager;
- (id <FCCoreConfigurationManager><FCNewsAppConfigurationManager>)news_core_ConfigurationManager;
@property(nonatomic, readonly) id <FCNewsAppConfigurationManager> appConfigurationManager;
@property(nonatomic, readonly) id <FCCoreConfigurationManager> configurationManager;
@property(nonatomic, readonly) NSString *supportedContentStoreFrontID;
@property(nonatomic, readonly) NSString *contentStoreFrontID;
@end
