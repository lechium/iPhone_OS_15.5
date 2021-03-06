//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Koa/NSObject-Protocol.h>

@class KVDatasetInfo;

@protocol KVDatasetReader <NSObject>
+ (id)new;
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(_Bool (^)(KVItem *))arg2;
- (KVDatasetInfo *)datasetInfo;
- (id)init;
@end

