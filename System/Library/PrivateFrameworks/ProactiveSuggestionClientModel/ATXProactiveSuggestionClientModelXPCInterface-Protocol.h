//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ATXSuggestionRequest, NSArray, NSData, NSString;

@protocol ATXProactiveSuggestionClientModelXPCInterface
- (void)generateLayoutForRequest:(ATXSuggestionRequest *)arg1 reply:(void (^)(id <ATXUICacheProtocol>))arg2;
- (void)retrieveSuggestionsForClientModelId:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)clientModelUpdatedNotificationId:(NSString *)arg1 clientModelId:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)clientModelUpdatedSuggestions:(NSArray *)arg1 feedbackMetadata:(NSData *)arg2 clientModelId:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
@end

