//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APUnfairRecursiveLock, NSMutableDictionary;

@interface APExpressionReferenceLibrary : NSObject
{
}

+ (id)sharedLibrary;	// IMP=0x0040000000006ee0
- (void)removeReferences:(id)arg1;	// IMP=0x002000000000806b
- (id)validateAndAddReference:(id)arg1 object:(id)arg2;	// IMP=0x00100000000079ed
- (id)parseReferencesPayload:(id)arg1;	// IMP=0x00100000000071f7
- (id)referenceFromIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000006fef
@property(readonly, nonatomic) NSMutableDictionary *globalReferences; // @dynamic globalReferences;
@property(readonly, nonatomic) APUnfairRecursiveLock *lock; // @dynamic lock;

@end

