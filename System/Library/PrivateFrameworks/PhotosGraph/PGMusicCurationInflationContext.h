//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface PGMusicCurationInflationContext : NSObject
{
    MISSING_TYPE *cache;	// 8 = 0x8
    MISSING_TYPE *shouldForceMetadataRefetch;	// 16 = 0x10
    MISSING_TYPE *actionSource;	// 24 = 0x18
}

+ (id)contextWithMusicCache:(id)arg1 actionSource:(id)arg2 shouldForceMetadataRefetch:(_Bool)arg3;	// IMP=0x00000000000b0950
- (void).cxx_destruct;	// IMP=0x00000000000b0aa0
- (id)init;	// IMP=0x00000000000b0a40
@property(nonatomic, readonly) NSString *actionSource;

@end

