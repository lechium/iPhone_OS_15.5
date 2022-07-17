//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSData, NSString;

@interface NSArray (FezAdditions)
- (id)__imMapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00000000000063f3
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1 filter:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006114
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005e84
- (id)__imArrayByFilteringWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005c24
- (void)__imForEach:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005b4f
- (_Bool)containsObject:(id)arg1 matchingComparison:(SEL)arg2;	// IMP=0x0000000000005b24
- (long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;	// IMP=0x0000000000005a3e
- (_Bool)containsObjectIdenticalTo:(id)arg1;	// IMP=0x0000000000005a1b
- (id)__imFirstObject;	// IMP=0x00000000000059d4
- (id)_copyForEnumerating;	// IMP=0x00000000000059a0
- (_Bool)_hasSameMembers:(id)arg1;	// IMP=0x00000000000058db
- (id)__imDeepCopy;	// IMP=0x000000000000585c
- (_Bool)__imIsMutable;	// IMP=0x0000000000005833
- (id)__imSetFromArray;	// IMP=0x00000000000057e7
- (id)__IMStripPotentialTokenURIs;	// IMP=0x000000000000575e
@property(readonly, nonatomic) NSString *SHA256HexString;
@property(readonly, nonatomic) NSData *SHA256Data;
- (void)_SHA256Bytes:(char *)arg1;	// IMP=0x0000000000015f33
@end
