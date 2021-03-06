//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CRKClassKitRosterRequirements;

@interface CRKClassKitClassPropertyApplicator : NSObject
{
    id <CRKClassKitRosterRequirements> _requirements;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003ff43
@property(readonly, nonatomic) id <CRKClassKitRosterRequirements> requirements; // @synthesize requirements=_requirements;
- (id)identifiersOfUsers:(id)arg1;	// IMP=0x000000000003ff08
- (_Bool)additionsAndRemovalsIntersect:(id)arg1;	// IMP=0x000000000003fd87
- (void)removeTrustedUser:(id)arg1 fromClass:(id)arg2;	// IMP=0x000000000003fbcd
- (void)addTrustedUser:(id)arg1 toClass:(id)arg2;	// IMP=0x000000000003fa13
- (void)removeUser:(id)arg1 fromClass:(id)arg2;	// IMP=0x000000000003f859
- (void)addUser:(id)arg1 toClass:(id)arg2;	// IMP=0x000000000003f69f
- (id)applyProperties:(id)arg1 toClass:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003eb84
- (id)initWithRequirements:(id)arg1;	// IMP=0x000000000003eb19

@end

