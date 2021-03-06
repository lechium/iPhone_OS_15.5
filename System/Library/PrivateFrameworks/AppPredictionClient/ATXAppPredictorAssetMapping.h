//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ATXAppPredictorAssetMapping : NSObject
{
    NSDictionary *_consumerSubTypeAssetMappings;	// 8 = 0x8
}

+ (id)getFullCachePathWithBaseCachePath:(id)arg1 cacheFileBaseName:(id)arg2 subScoreName:(id)arg3;	// IMP=0x00000000000808f5
+ (id)sharedInstanceWithMobileAssets;	// IMP=0x0000000000080857
+ (id)assetMappingWithCachedAssets;	// IMP=0x000000000008082c
- (void).cxx_destruct;	// IMP=0x0000000000080a67
- (id)getAtxToolDescription;	// IMP=0x0000000000080a5a
- (id)getFullCachePathWithBaseCachePath:(id)arg1 consumerSubType:(unsigned char)arg2;	// IMP=0x00000000000809c1
- (id)getFullDefaultCachePathWithConsumerSubType:(unsigned char)arg1;	// IMP=0x0000000000080924
- (id)getAssetFileAndSubscoreForConsumerSubType:(unsigned char)arg1;	// IMP=0x00000000000808d8
- (id)initWithUseMobileAssets:(_Bool)arg1;	// IMP=0x00000000000807fd
- (id)init;	// IMP=0x00000000000807f7

@end

