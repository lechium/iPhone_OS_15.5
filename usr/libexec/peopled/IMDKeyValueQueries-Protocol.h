//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol IMDKeyValueQueries <NSObject>
- (void)storeData:(NSData *)arg1 forKey:(NSString *)arg2;
- (void)fetchInteger64ForKey:(NSString *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)fetchDataForKey:(NSString *)arg1 completionHandler:(void (^)(NSData *))arg2;
@end
