//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSRelationable-Protocol.h>

@class NSString;

@interface CLSClassMember <CLSRelationable>
{
    _Bool _markedForDeletion;	// 8 = 0x8
    NSString *_personID;	// 16 = 0x10
    unsigned long long _roles;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000177f0
+ (id)objectIDForClassID:(id)arg1 andPersonID:(id)arg2;	// IMP=0x00000000000174fd
+ (id)relations;	// IMP=0x000000000005c53c
- (void).cxx_destruct;	// IMP=0x000000000001791f
@property(nonatomic) _Bool markedForDeletion; // @synthesize markedForDeletion=_markedForDeletion;
@property(nonatomic) unsigned long long roles; // @synthesize roles=_roles;
@property(copy, nonatomic) NSString *personID; // @synthesize personID=_personID;
- (id)dictionaryRepresentation;	// IMP=0x00000000000177f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000017750
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001768c
- (id)initWithClassID:(id)arg1 personID:(id)arg2 roles:(unsigned long long)arg3;	// IMP=0x0000000000017592
- (id)_init;	// IMP=0x0000000000017563

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

