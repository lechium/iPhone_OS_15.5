//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _HDMedicalRecordEntityEncoder
{
    _Bool _skipApplyingConceptIndex;	// 8 = 0x8
}

- (_Bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3 error:(id *)arg4;	// IMP=0x000000000049505b
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;	// IMP=0x0000000000493dde
- (id)createBareObject;	// IMP=0x0000000000493db5
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;	// IMP=0x00000000004938d7
- (id)orderedProperties;	// IMP=0x0000000000493739
- (id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 transaction:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(CDUnknownBlockType)arg6;	// IMP=0x000000000049366e

@end

