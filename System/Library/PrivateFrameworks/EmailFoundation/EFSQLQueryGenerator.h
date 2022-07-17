//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EFSQLQueryGenerator : NSObject
{
}

+ (id)compiledSQLQueryWithPredicateNodes:(id)arg1 selectGenerators:(id)arg2 orderByGenerators:(id)arg3 selectAll:(_Bool)arg4;	// IMP=0x00000000000502c8
+ (id)expressionGeneratorsForSortDescriptors:(id)arg1 propertyMapper:(id)arg2;	// IMP=0x000000000004ff75
+ (id)getChildrenFromPropertyMapper:(id)arg1 previousTable:(id)arg2 previousExpressionGenerator:(id)arg3;	// IMP=0x000000000004f68f
+ (id)selectExpressionGeneratorForReturnObjectKeypath:(id)arg1 propertyMapper:(id)arg2;	// IMP=0x000000000004e87d
+ (id)traverseKeypath:(id)arg1 keyPropertyMapper:(id)arg2 previousExpressionGenerator:(id)arg3;	// IMP=0x000000000004e29c
+ (id)sqlQueryForReturnObjectKeypaths:(id)arg1 query:(id)arg2 propertyMapper:(id)arg3;	// IMP=0x000000000004d94c

@end
