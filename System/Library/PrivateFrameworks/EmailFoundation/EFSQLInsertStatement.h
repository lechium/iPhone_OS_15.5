//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLInsertStatementValue-Protocol.h>

@class NSMutableArray, NSMutableOrderedSet, NSString;

@interface EFSQLInsertStatement : NSObject <EFSQLInsertStatementValue>
{
    NSString *_table;	// 8 = 0x8
    unsigned long long _conflictResolution;	// 16 = 0x10
    NSMutableArray *_values;	// 24 = 0x18
    NSMutableOrderedSet *_requiredColumns;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004824e
- (id)addValue;	// IMP=0x000000000004808c
- (void)enumerateBindingNamesAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047cd3
- (void)enumerateBindingIndicesAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004791c
- (void)renderStatementWithNamedBindingsInto:(id)arg1;	// IMP=0x00000000000474ce
@property(readonly, copy, nonatomic) NSString *queryString;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0000000000046f4b
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000046dee
- (id)initWithTable:(id)arg1 conflictResolution:(unsigned long long)arg2;	// IMP=0x0000000000046caf
- (id)initWithTable:(id)arg1;	// IMP=0x0000000000046c9a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

