//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLitePrefetchRequestCache : NSObject
{
    NSSQLCore *_sqlCore;	// 8 = 0x8
    unsigned long long _length;	// 16 = 0x10
    id *_prefetchRequestsByEntity;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fdee3
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;	// IMP=0x00000000000fdd43
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;	// IMP=0x00000000000fdb67
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;	// IMP=0x00000000000fd7d9
- (void)dealloc;	// IMP=0x00000000000fd753
- (id)initWithSQLCore:(id)arg1;	// IMP=0x00000000000fd6bf

@end
