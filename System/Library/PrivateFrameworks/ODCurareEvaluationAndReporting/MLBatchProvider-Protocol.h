//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MLFeatureProvider;

@protocol MLBatchProvider
- (id <MLFeatureProvider>)featuresAtIndex:(long long)arg1;
@property(nonatomic, readonly) long long count;
@end

