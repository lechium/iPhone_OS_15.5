//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (IntentsFoundation)
+ (id)if_arrayWithObjectIfNonNil:(id)arg1;	// IMP=0x000000000000c234
+ (id)_inf_arrayWithObjectIfNonNil:(id)arg1;	// IMP=0x000000000000c222
- (id)_if_firstObjectMatchingPredicate:(id)arg1;	// IMP=0x000000000000b737
- (void)if_enumerateAsynchronouslyInSequenceOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b579
- (void)if_enumerateAsynchronouslyInSequence:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b4c3
- (void)if_enumerateAsynchronouslyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b01e
- (void)if_enumerateAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b004
- (id)if_objectsNotOfClass:(Class)arg1;	// IMP=0x000000000000afa6
- (id)if_objectsOfClass:(Class)arg1;	// IMP=0x000000000000af48
- (id)if_firstObjectWithIntValue:(int)arg1 forKey:(id)arg2;	// IMP=0x000000000000aed6
- (id)if_firstObjectWithBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000000ae64
- (id)if_firstObjectWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000adf2
- (id)if_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ac9c
- (id)if_objectsWithIntValue:(int)arg1 forKey:(id)arg2;	// IMP=0x000000000000ac2a
- (id)if_objectsWithBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000000abb8
- (id)if_objectsWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000ab46
- (id)if_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a982
- (id)_inf_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a970
- (id)if_arrayByRemovingObjectsInArray:(id)arg1;	// IMP=0x000000000000a90a
- (id)if_arrayByRemovingObject:(id)arg1;	// IMP=0x000000000000a8a4
- (id)if_escapedComponentsJoinedByString:(id)arg1 forLocale:(id)arg2;	// IMP=0x000000000000a7b0
- (void)if_flatMapAsynchronouslyOnQueue:(id)arg1 transform:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a7a1
- (void)if_flatMapAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a78a
- (id)if_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a56f
- (id)_inf_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a55d
- (id)if_compactMapConcurrently:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a550
- (id)if_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a543
- (void)if_mapAsynchronouslyOnQueue:(id)arg1 transform:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a537
- (void)if_mapAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a523
- (id)if_mapConcurrently:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a492
- (id)if_map:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a401
@end

