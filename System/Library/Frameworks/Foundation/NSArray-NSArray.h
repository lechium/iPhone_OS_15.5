//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (NSArray)
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000000ca54
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2;	// IMP=0x000000000000c8bf
+ (id)arrayWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c88b
+ (id)arrayWithContentsOfURL:(id)arg1;	// IMP=0x000000000000c85c
+ (id)arrayWithContentsOfFile:(id)arg1;	// IMP=0x000000000000c82d
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x000000000000c2ce
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d17e
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x000000000000cfc4
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x000000000000ce70
- (id)_stringToWrite;	// IMP=0x000000000000ce16
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000cc68
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x000000000000cc31
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x000000000000cbfa
- (id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2;	// IMP=0x000000000000c75e
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 hint:(id)arg3;	// IMP=0x000000000000c436
- (id)sortedArrayHint;	// IMP=0x000000000000c2d6
- (Class)classForCoder;	// IMP=0x000000000000c2bd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000bec0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ba5c
- (id)debugDescription;	// IMP=0x000000000000b85d
- (id)valueForKeyPath:(id)arg1;	// IMP=0x000000000009f098
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000009ef8c
- (id)valueForKey:(id)arg1;	// IMP=0x000000000009ecfa
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;	// IMP=0x000000000009ec56
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;	// IMP=0x000000000009ec14
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;	// IMP=0x000000000009ebd2
- (id)_unionOfSetsForKeyPath:(id)arg1;	// IMP=0x000000000009eb21
- (id)_unionOfArraysForKeyPath:(id)arg1;	// IMP=0x000000000009ea89
- (id)_unionOfObjectsForKeyPath:(id)arg1;	// IMP=0x000000000009e9f1
- (id)_minForKeyPath:(id)arg1;	// IMP=0x000000000009e952
- (id)_maxForKeyPath:(id)arg1;	// IMP=0x000000000009e8b3
- (id)_countForKeyPath:(id)arg1;	// IMP=0x000000000009e87e
- (id)_avgForKeyPath:(id)arg1;	// IMP=0x000000000009e805
- (id)_sumForKeyPath:(id)arg1;	// IMP=0x000000000009e6ce
- (_Bool)_validateValue:(inout id *)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id *)arg4;	// IMP=0x00000000000a2e06
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;	// IMP=0x00000000000a2dc3
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000a2d8f
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000a2d5b
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000a2d27
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000a2cf3
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000000b1f9e
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x00000000000b1f32
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x00000000000b1ec6
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x00000000000b1d9b
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000b1b5f
- (void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void *)arg5;	// IMP=0x00000000000b1a1c
- (id)arrayByApplyingDifference:(id)arg1;	// IMP=0x00000000000dab36
- (id)differenceFromArray:(id)arg1;	// IMP=0x00000000000dab22
- (id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00000000000dab09
- (id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2 usingEquivalenceTest:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d973f
- (id)stringsByAppendingPathComponent:(id)arg1;	// IMP=0x00000000000f6264
- (id)pathsMatchingExtensions:(id)arg1;	// IMP=0x00000000000f6171
- (id)filteredArrayUsingPredicate:(id)arg1;	// IMP=0x00000000001057ab
- (id)sortedArrayUsingDescriptors:(id)arg1;	// IMP=0x0000000000136a71
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00000000001c85a0
@end

