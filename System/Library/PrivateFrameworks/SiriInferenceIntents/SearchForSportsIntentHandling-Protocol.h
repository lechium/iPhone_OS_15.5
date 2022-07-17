//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriInferenceIntents/NSObject-Protocol.h>

@class SearchForSportsIntent;

@protocol SearchForSportsIntentHandling <NSObject>
- (void)handleSearchForSports:(SearchForSportsIntent *)arg1 completion:(void (^)(SearchForSportsIntentResponse *))arg2;

@optional
- (void)confirmSearchForSports:(SearchForSportsIntent *)arg1 completion:(void (^)(SearchForSportsIntentResponse *))arg2;
@end
