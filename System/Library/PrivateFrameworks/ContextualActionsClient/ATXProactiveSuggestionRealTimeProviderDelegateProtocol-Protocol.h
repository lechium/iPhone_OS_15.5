//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContextualActionsClient/NSObject-Protocol.h>

@class ATXContextualActionSuggestionRequest, ATXInteractionSuggestionRequest;

@protocol ATXProactiveSuggestionRealTimeProviderDelegateProtocol <NSObject>
- (void)pingWithCompletion:(void (^)(_Bool))arg1;

@optional
- (void)suggestionsForContextualActionSuggestionRequest:(ATXContextualActionSuggestionRequest *)arg1 reply:(void (^)(ATXSuggestionRequestResponse *))arg2;
- (void)suggestionsForInteractionSuggestionRequest:(ATXInteractionSuggestionRequest *)arg1 reply:(void (^)(ATXSuggestionRequestResponse *))arg2;
@end

