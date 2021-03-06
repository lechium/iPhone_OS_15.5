//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHKWidgetEnvironment, CHSWidget, NSArray, NSDictionary, NSFileHandle, NSString;

@protocol _TtP9WidgetKit22WidgetExtensionSession_
- (void)invalidate;
- (void)getTimelineFor:(CHSWidget *)arg1 into:(NSFileHandle *)arg2 environment:(CHKWidgetEnvironment *)arg3 isPreview:(_Bool)arg4 completion:(void (^)(NSError *))arg5;
- (void)getTimelinesWithRequests:(NSArray *)arg1 isPreview:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)attachPreviewAgentWithFrameworkPath:(NSString *)arg1 endpoint:(id)arg2 handler:(void (^)(BSAuditToken *, NSError *))arg3;
- (void)handleURLSessionEventsFor:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getPlaceholdersWithEnvironment:(CHKWidgetEnvironment *)arg1 for:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)getDescriptorsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

