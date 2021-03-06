//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSQLForeignKey, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLForeignOrderKey
{
    NSString *_name;	// 48 = 0x30
    NSSQLForeignKey *_foreignKey;	// 56 = 0x38
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;	// IMP=0x000000000022dfb9
- (void)dealloc;	// IMP=0x000000000022df68
- (id)name;	// IMP=0x000000000022df57
- (id)foreignKey;	// IMP=0x000000000022df46
- (id)toOneRelationship;	// IMP=0x000000000022df1b
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;	// IMP=0x000000000022dea1
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;	// IMP=0x000000000022de46
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;	// IMP=0x000000000022dcc6

@end

