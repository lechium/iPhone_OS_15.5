//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChronoServices/NSObject-Protocol.h>

@class CHSWidgetKey, NSString;
@protocol CHSChronoToolServiceClient;

@protocol CHSChronoToolServiceServer <NSObject>
- (oneway void)expireLocationGracePeriods;
- (oneway void)reloadTimelinesOfKind:(NSString *)arg1 containedIn:(NSString *)arg2 reason:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)timelineForWidgetKey:(CHSWidgetKey *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (oneway void)widgetsWithTimelines:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)extensionInfo:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)extensionInfoForBundleIdentifier:(NSString *)arg1 completion:(void (^)(CHSWidgetExtensionInfo *, NSError *))arg2;
- (oneway void)fetchStateForItemWithIdentifier:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)fetchStateWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (oneway void)listStateCaptureIdentifiersWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)resetCaches:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)cacheDescriptorsForBundleIdentifier:(NSString *)arg1 completion:(void (^)(CHSAvocadoDescriptorsBox *, NSError *))arg2;
- (void)removeClient:(id <CHSChronoToolServiceClient>)arg1;
- (void)addClient:(id <CHSChronoToolServiceClient>)arg1;
@end

