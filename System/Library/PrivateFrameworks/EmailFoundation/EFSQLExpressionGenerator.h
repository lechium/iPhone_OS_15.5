//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFSQLGeneratorTableRelationship, NSArray, NSString;

@interface EFSQLExpressionGenerator : NSObject
{
    _Bool _includeSourceColumn;	// 8 = 0x8
    EFSQLGeneratorTableRelationship *_tableRelationship;	// 16 = 0x10
    NSArray *_whereExpression;	// 24 = 0x18
    NSArray *_additionalSelectColumns;	// 32 = 0x20
    NSString *_alias;	// 40 = 0x28
    EFSQLExpressionGenerator *_previousExpressionGenerator;	// 48 = 0x30
}

+ (id)tableFromPreviousTable:(id)arg1 propertyMapper:(id)arg2;	// IMP=0x000000000003dc22
- (void).cxx_destruct;	// IMP=0x000000000003e582
@property(readonly, nonatomic) EFSQLExpressionGenerator *previousExpressionGenerator; // @synthesize previousExpressionGenerator=_previousExpressionGenerator;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(nonatomic) _Bool includeSourceColumn; // @synthesize includeSourceColumn=_includeSourceColumn;
@property(readonly, nonatomic) NSArray *additionalSelectColumns; // @synthesize additionalSelectColumns=_additionalSelectColumns;
@property(readonly, nonatomic) NSArray *whereExpression; // @synthesize whereExpression=_whereExpression;
@property(readonly, nonatomic) EFSQLGeneratorTableRelationship *tableRelationship; // @synthesize tableRelationship=_tableRelationship;
- (unsigned long long)hash;	// IMP=0x000000000003e4d7
- (_Bool)isEqualToEFSQLExpressionGenerator:(id)arg1;	// IMP=0x000000000003e414
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003e39d
- (id)columnAlias;	// IMP=0x000000000003e27a
- (id)joinOnGenerator;	// IMP=0x000000000003de93
- (void)assignAliasWithMap:(id)arg1;	// IMP=0x000000000003da81
- (id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3 additionalSelectColumns:(id)arg4 includeSourceColumn:(_Bool)arg5;	// IMP=0x000000000003d969
- (id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3;	// IMP=0x000000000003d944

@end
