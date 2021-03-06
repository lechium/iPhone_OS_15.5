//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTablePrinting-Protocol.h>

@class CRKTable, NSArray;

@interface CRKKeyValueTable : NSObject <CRKTablePrinting>
{
    CRKTable *_table;	// 8 = 0x8
    NSArray *_keyValuePairs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009aa92
@property(readonly, copy, nonatomic) NSArray *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;
- (id)tableString;	// IMP=0x000000000009aa38
@property(readonly, nonatomic) CRKTable *table; // @synthesize table=_table;
- (id)crk_JSONRepresentationWithPrettyPrinting:(_Bool)arg1 sortKeys:(_Bool)arg2;	// IMP=0x000000000009a8f3
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000009a80e
- (id)initWithKeyValuePairs:(id)arg1;	// IMP=0x000000000009a79b

@end

