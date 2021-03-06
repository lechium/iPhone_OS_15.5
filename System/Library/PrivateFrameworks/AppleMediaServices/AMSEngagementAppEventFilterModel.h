//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface AMSEngagementAppEventFilterModel : NSObject
{
    NSDictionary *_definition;	// 8 = 0x8
}

+ (_Bool)matchEvent:(id)arg1 toFilter:(id)arg2;	// IMP=0x000000000011fdb4
- (void).cxx_destruct;	// IMP=0x0000000000120057
@property(readonly, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
- (_Bool)matchesEvent:(id)arg1;	// IMP=0x000000000011fcdb
- (id)exportObject;	// IMP=0x000000000011fc34
@property(readonly, nonatomic) _Bool allowsResponse;
- (id)initWithFilter:(id)arg1 allowsResponse:(_Bool)arg2;	// IMP=0x000000000011f98a
- (id)initWithDefinition:(id)arg1;	// IMP=0x000000000011f91f
- (id)initWithCacheObject:(id)arg1;	// IMP=0x000000000011f882
- (id)init;	// IMP=0x000000000011f86e

@end

