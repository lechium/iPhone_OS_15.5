//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSSQLAttributeExtension-Protocol.h>

@class NSArray, NSSQLAttribute, NSSQLEntity, NSSQLRelationship, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLKeypathTriggerAttributeExtension : NSObject <NSSQLAttributeExtension>
{
    id _objectFromUserInfo;	// 8 = 0x8
    NSString *_keypath;	// 16 = 0x10
    NSArray *_insertSQLStrings;	// 24 = 0x18
    NSArray *_dropSQLStrings;	// 32 = 0x20
    NSArray *_bulkUpdateSQLStrings;	// 40 = 0x28
    NSSQLEntity *_entity;	// 48 = 0x30
    NSSQLAttribute *_attribute;	// 56 = 0x38
    NSSQLRelationship *_countedRelationship;	// 64 = 0x40
}

@property(readonly, nonatomic) NSArray *bulkUpdateSQLStrings; // @synthesize bulkUpdateSQLStrings=_bulkUpdateSQLStrings;
@property(readonly, nonatomic) NSArray *dropSQLStrings; // @synthesize dropSQLStrings=_dropSQLStrings;
@property(readonly, nonatomic) NSArray *insertSQLStrings; // @synthesize insertSQLStrings=_insertSQLStrings;
- (_Bool)isEqualToExtension:(id)arg1;	// IMP=0x000000000024f0bd
- (_Bool)validate:(id *)arg1;	// IMP=0x000000000024cbfc
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000024cadc
- (id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;	// IMP=0x000000000024ca27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
