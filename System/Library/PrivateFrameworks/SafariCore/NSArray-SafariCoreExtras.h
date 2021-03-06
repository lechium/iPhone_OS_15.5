//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (SafariCoreExtras)
+ (id)safari_arrayWithPropertyListData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000018e9a
+ (id)safari_arrayFromDictionaryOfObjectsByIndex:(id)arg1;	// IMP=0x0000000000016a4d
- (id)safari_longestIncreasingSubsequenceUsingValues:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019458
- (id)safari_splitArrayUsingCondition:(CDUnknownBlockType)arg1;	// IMP=0x000000000001926d
- (id)safari_objectAfter:(id)arg1;	// IMP=0x00000000000191fe
- (id)safari_objectBefore:(id)arg1;	// IMP=0x0000000000019180
- (id)safari_prefixWithMaxLength:(unsigned long long)arg1;	// IMP=0x000000000001913a
- (id)safari_flattenedArray;	// IMP=0x0000000000018f0f
- (id)safari_arrayByAddingObjectsFromArrayIfNotDuplicates:(id)arg1;	// IMP=0x0000000000018e00
- (_Bool)safari_noObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018cc7
- (_Bool)safari_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018b8e
- (_Bool)safari_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018a99
- (id)safari_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018963
- (id)_safari_generateDiffWithLongestCommonSubsequenceLengths:(id)arg1 array:(id)arg2 indexIntoSelf:(unsigned long long)arg3 indexIntoArray:(unsigned long long)arg4;	// IMP=0x0000000000018525
- (id)_safari_computeLengthsOfLongestSubsequencesCommonWithArray:(id)arg1;	// IMP=0x00000000000180c8
- (id)safari_diffWithArray:(id)arg1;	// IMP=0x0000000000017fd4
- (id)safari_minimumUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017f1c
- (id)safari_maximumUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017dfc
- (id)safari_reduceObjectsWithInitialValue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017c2c
- (id)safari_reduceObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017c15
- (id)safari_filterObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017abe
- (id)safari_mapObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017aac
- (id)safari_orderedSetByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017922
- (id)safari_setByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000176b0
- (void)safari_enumerateOutwardFromIndex:(unsigned long long)arg1 otherIndex:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017337
- (void)safari_enumerateOutwardFromIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000171bf
- (void)safari_enumerateZippedValuesWithArray:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017021
- (id)safari_mapAndFilterObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016dc6
- (id)safari_mapAndFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016cfe
- (id)safari_arrayAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000016ca7
- (id)safari_dictionaryAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000016c50
- (id)safari_URLAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000016bf9
- (id)safari_stringAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000016ba2
- (id)safari_numberAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000016b4b
@end

