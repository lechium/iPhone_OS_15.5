//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMBehaviorStorage;

@interface BMBehaviorRetriever : NSObject
{
    BMBehaviorStorage *_storage;	// 8 = 0x8
    unsigned long long _fetchLimit;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000143a8
@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(retain, nonatomic) BMBehaviorStorage *storage; // @synthesize storage=_storage;
- (id)retrieveRulesWithAbsoluteSupport:(unsigned long long)arg1 support:(double)arg2 confidence:(double)arg3 conviction:(double)arg4 lift:(double)arg5 rulePowerFactor:(double)arg6 uniqueDaysLastWeek:(unsigned long long)arg7 uniqueDaysTotal:(unsigned long long)arg8 filters:(id)arg9 error:(id *)arg10;	// IMP=0x000000000001429e
- (id)retrieveRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000141fa
- (id)retrieveRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3;	// IMP=0x0000000000014137
- (id)retrieveRulesWithFilters:(id)arg1;	// IMP=0x000000000001411f
- (id)initWithURL:(id)arg1 taskSpecificItemTypes:(id)arg2;	// IMP=0x0000000000013f2f
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000013eae
- (id)init;	// IMP=0x0000000000013e54

@end

