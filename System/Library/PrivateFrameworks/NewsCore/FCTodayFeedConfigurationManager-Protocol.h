//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSData, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol FCTodayFeedConfigurationManager <NSObject>
@property(readonly, nonatomic) NSData *todayFeedConfigurationData;
- (void)fetchTodayFeedConfigurationIfNeededWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 feedType:(unsigned long long)arg2 formatVersion:(NSString *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
@end

