//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlayServices/NSObject-Protocol.h>

@class NSArray;
@protocol __NSString__;

@protocol CRSAppHistoryClientToServerInterface <NSObject>
- (void)fetchSessionFeatureKeysWithCompletion:(void (^)(NSArray<__NSString__> *, NSError *))arg1;
- (void)setSessionFeatureKeys:(NSArray<__NSString__> *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)fetchSessionEchoContextStatesWithCompletion:(void (^)(NSArray<__NSString__> *, NSError *))arg1;
- (void)fetchSessionUIContextStatesWithCompletion:(void (^)(NSArray<__NSString__> *, NSError *))arg1;
- (void)fetchUIContextStatesWithCompletion:(void (^)(NSArray<__NSString__> *, NSError *))arg1;
@end
