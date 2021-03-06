//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>
#import <NotesShared/NSFastEnumeration-Protocol.h>

@class CRDictionary, CRDocument, NSArray, NSHashTable, NSString;

@interface CRSet : NSObject <CRDataType, NSFastEnumeration, CRCoding>
{
    CRDictionary *_dictionary;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001612ff
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) CRDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, copy) NSString *description;
- (id)tombstone;	// IMP=0x000000000016104f
- (void)walkGraph:(CDUnknownBlockType)arg1;	// IMP=0x0000000000160fd0
- (id)deltaSince:(id)arg1 in:(id)arg2;	// IMP=0x0000000000160eae
@property(nonatomic) __weak CRDocument *document;
- (void)mergeWith:(id)arg1;	// IMP=0x0000000000160d32
- (void)realizeLocalChangesIn:(id)arg1;	// IMP=0x0000000000160d2c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000160bf1
- (void)setObject:(id)arg1;	// IMP=0x0000000000160b87
- (void)removeAllObjects;	// IMP=0x0000000000160b36
- (void)removeObject:(id)arg1;	// IMP=0x0000000000160aae
- (void)addObject:(id)arg1;	// IMP=0x00000000001608d5
- (void)setUpdated:(id)arg1;	// IMP=0x00000000001608cf
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000160847
- (void)addObserver:(id)arg1;	// IMP=0x00000000001607bf
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000160744
- (id)anyObject;	// IMP=0x00000000001606a7
@property(readonly, copy) NSArray *allObjects;
@property(readonly) unsigned long long count;
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000016040b
- (id)member:(id)arg1;	// IMP=0x0000000000160373
- (id)initWithCRCoder:(id)arg1 set:(const void *)arg2 elementValueDecoder:(CDUnknownBlockType)arg3;	// IMP=0x00000000001601b4
- (id)initWithCRCoder:(id)arg1 set:(const void *)arg2;	// IMP=0x000000000016003c
- (id)initWithCRCoder:(id)arg1;	// IMP=0x000000000015ff55
- (void)encodeWithCRCoder:(id)arg1 set:(void *)arg2 elementValueCoder:(CDUnknownBlockType)arg3;	// IMP=0x000000000015fe2f
- (void)encodeWithCRCoder:(id)arg1 set:(void *)arg2;	// IMP=0x000000000015fda1
- (void)encodeWithCRCoder:(id)arg1;	// IMP=0x000000000015fbc9
- (id)initWithDocument:(id)arg1;	// IMP=0x000000000015faeb
- (id)init;	// IMP=0x000000000015fad6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

