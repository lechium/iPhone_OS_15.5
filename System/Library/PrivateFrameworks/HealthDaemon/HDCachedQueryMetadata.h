//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDateComponents, NSNumber, NSString;

@interface HDCachedQueryMetadata : NSObject
{
    NSString *_cachingIdentifier;	// 8 = 0x8
    long long _sourceEntityPersistentID;	// 16 = 0x10
    NSString *_buildVersion;	// 24 = 0x18
    long long _maxAnchor;	// 32 = 0x20
    NSNumber *_queryStartIndex;	// 40 = 0x28
    NSNumber *_queryEndIndex;	// 48 = 0x30
    long long _generationNumber;	// 56 = 0x38
    NSDate *_anchorDate;	// 64 = 0x40
    NSDateComponents *_intervalComponents;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000007011f3
@property(readonly, copy, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(readonly, copy, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
@property(readonly, nonatomic) long long generationNumber; // @synthesize generationNumber=_generationNumber;
@property(readonly, copy, nonatomic) NSNumber *queryEndIndex; // @synthesize queryEndIndex=_queryEndIndex;
@property(readonly, copy, nonatomic) NSNumber *queryStartIndex; // @synthesize queryStartIndex=_queryStartIndex;
@property(readonly, nonatomic) long long maxAnchor; // @synthesize maxAnchor=_maxAnchor;
@property(readonly, copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, nonatomic) long long sourceEntityPersistentID; // @synthesize sourceEntityPersistentID=_sourceEntityPersistentID;
@property(readonly, copy, nonatomic) NSString *cachingIdentifier; // @synthesize cachingIdentifier=_cachingIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000700a76
- (id)initWithCachingIdentifier:(id)arg1 sourceEntityPersistentID:(long long)arg2 maxAnchor:(long long)arg3 queryStartIndex:(id)arg4 queryEndIndex:(id)arg5 generationNumber:(long long)arg6 buildVersion:(id)arg7 anchorDate:(id)arg8 intervalComponents:(id)arg9;	// IMP=0x000000000070085f
- (id)initWithCachingIdentifier:(id)arg1 sourceEntityPersistentID:(long long)arg2 buildVersion:(id)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5;	// IMP=0x0000000000700824

@end
