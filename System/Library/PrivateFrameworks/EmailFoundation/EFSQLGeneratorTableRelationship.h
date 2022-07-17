//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/NSCopying-Protocol.h>

@class EFSQLColumnSchema, EFSQLTableSchema;

@interface EFSQLGeneratorTableRelationship : NSObject <NSCopying>
{
    EFSQLTableSchema *_table;	// 8 = 0x8
    EFSQLColumnSchema *_sourceColumn;	// 16 = 0x10
    EFSQLTableSchema *_targetTable;	// 24 = 0x18
    unsigned long long _relationship;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003f323
@property(readonly, nonatomic) unsigned long long relationship; // @synthesize relationship=_relationship;
@property(readonly, nonatomic) EFSQLTableSchema *targetTable; // @synthesize targetTable=_targetTable;
@property(readonly, nonatomic) EFSQLColumnSchema *sourceColumn; // @synthesize sourceColumn=_sourceColumn;
@property(readonly, nonatomic) EFSQLTableSchema *table; // @synthesize table=_table;
- (unsigned long long)hash;	// IMP=0x000000000003f187
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f110
- (_Bool)isEqualToTableRelationship:(id)arg1;	// IMP=0x000000000003e9f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003e9eb
- (id)initWithPropertyMapper:(id)arg1 previousTable:(id)arg2;	// IMP=0x000000000003e5cb

@end
