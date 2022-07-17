//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ConfigurationIntent, ConfigurationList, NSString;

@protocol ConfigurationIntentHandling <NSObject>
- (void)provideListOptionsCollectionForConfiguration:(ConfigurationIntent *)arg1 searchTerm:(NSString *)arg2 withCompletion:(void (^)(id, NSError *))arg3;

@optional
- (void)provideListOptionsForConfiguration:(ConfigurationIntent *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (ConfigurationList *)defaultListForConfiguration:(ConfigurationIntent *)arg1;
- (void)handleConfiguration:(ConfigurationIntent *)arg1 completion:(void (^)(ConfigurationIntentResponse *))arg2;
- (void)confirmConfiguration:(ConfigurationIntent *)arg1 completion:(void (^)(ConfigurationIntentResponse *))arg2;
@end
