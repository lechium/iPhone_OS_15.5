//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDSimpleGraphNode, NSString;

@interface HDSimpleGraphRelationship
{
    long long _nameID;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    long long _subjectID;	// 24 = 0x18
    HDSimpleGraphNode *_subject;	// 32 = 0x20
    long long _objectID;	// 40 = 0x28
    HDSimpleGraphNode *_object;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000044b536
@property(readonly, nonatomic) __weak HDSimpleGraphNode *object; // @synthesize object=_object;
@property(readonly, nonatomic) long long objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) __weak HDSimpleGraphNode *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) long long subjectID; // @synthesize subjectID=_subjectID;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long nameID; // @synthesize nameID=_nameID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000044b42c
- (unsigned long long)hash;	// IMP=0x000000000044b3c3
- (id)description;	// IMP=0x000000000044b17c
- (id)initWithRowID:(long long)arg1 nameID:(long long)arg2 name:(id)arg3 subjectID:(long long)arg4 subject:(id)arg5 objectID:(long long)arg6 object:(id)arg7;	// IMP=0x000000000044aecf
- (id)initWithRowID:(long long)arg1;	// IMP=0x000000000044ae55
- (id)init;	// IMP=0x000000000044addb

@end
