//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChronoServices/NSObject-Protocol.h>

@class CHSTimelineReloadRequest, CHSURLSessionToken, CHSWidget, CHSWidgetConfiguration, CHSWidgetMetrics, NSArray, NSData, NSDictionary, NSString;
@protocol CHSChronoWidgetServiceClient;

@protocol CHSChronoWidgetServiceServer <NSObject>
- (CHSURLSessionToken *)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(NSString *)arg1 info:(NSDictionary *)arg2;
- (NSData *)widgetEnvironmentDataForBundleIdentifier:(NSString *)arg1;
- (oneway void)setWidgetConfiguration:(CHSWidgetConfiguration *)arg1 forWidgetHostWithIdentifier:(NSString *)arg2;
- (oneway void)removeWidgetHostWithIdentifier:(NSString *)arg1;
- (_Bool)reloadTimelineForAvocadoWithIdentifier:(NSString *)arg1 inBundleWithIdentifier:(NSString *)arg2 error:(id *)arg3;
- (oneway void)applicationWithBundleIdentifierEnteredForeground:(NSString *)arg1;
- (oneway void)flushPowerlog;
- (void)removeClient:(id <CHSChronoWidgetServiceClient>)arg1;
- (void)addClient:(id <CHSChronoWidgetServiceClient>)arg1;

@optional
- (oneway void)suggestionBudgetsForStackIdentifiers:(NSArray *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)loadSuggestedWidget:(CHSWidget *)arg1 metrics:(CHSWidgetMetrics *)arg2 stackIdentifier:(NSString *)arg3 reason:(NSString *)arg4 completion:(void (^)(BSAction *, NSArray<__ATXInfoTimelineEntry__> *, NSError *))arg5;
- (oneway void)allWidgetConfigurationsByHostWithCompletion:(void (^)(CHSWidgetConfigurationHostsBox *, NSError *))arg1;
- (_Bool)reloadTimeline:(CHSTimelineReloadRequest *)arg1 error:(id *)arg2;
- (NSDictionary *)descriptors:(id *)arg1;
@end
