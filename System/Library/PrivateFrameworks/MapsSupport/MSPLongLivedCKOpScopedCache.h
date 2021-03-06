//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSPLongLivedCKOpCache, NSString;

__attribute__((visibility("hidden")))
@interface MSPLongLivedCKOpScopedCache : NSObject
{
    NSString *_typeName;	// 8 = 0x8
    MSPLongLivedCKOpCache *_cache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007e396
@property(retain, nonatomic) MSPLongLivedCKOpCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
- (_Bool)isCurrentOperationID:(id)arg1;	// IMP=0x000000000007e2fa
- (_Bool)isAwareOfOperationID:(id)arg1;	// IMP=0x000000000007e283
- (_Bool)hasOperationID:(id)arg1;	// IMP=0x000000000007e1eb
- (void)pruneOperationsToIDs:(id)arg1;	// IMP=0x000000000007e179
- (void)removeOperation:(id)arg1;	// IMP=0x000000000007e0ef
- (void)addOperation:(id)arg1;	// IMP=0x000000000007e065
- (id)initWithType:(id)arg1 cache:(id)arg2;	// IMP=0x000000000007dfbc
- (id)initWithType:(id)arg1;	// IMP=0x000000000007df3b

@end

