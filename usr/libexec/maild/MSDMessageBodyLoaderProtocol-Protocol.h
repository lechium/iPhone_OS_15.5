//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MSDMessageBodyLoaderProtocol <NSObject>
- (void)loadBodiesOfMessagesContainingSubject:(NSString *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)loadBodyOfMessageWithID:(NSString *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
@end

