//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSRelationable-Protocol.h>

@class NSString;

@interface CLSHandoutRecipient <CLSRelationable>
{
    NSString *_classID;	// 8 = 0x8
    NSString *_personID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000157e1
+ (id)relations;	// IMP=0x000000000001fd00
- (void).cxx_destruct;	// IMP=0x00000000000159cb
@property(copy, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(copy, nonatomic) NSString *classID; // @synthesize classID=_classID;
- (id)dictionaryRepresentation;	// IMP=0x00000000000158f4
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015742
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015653
- (_Bool)validateObject:(id *)arg1;	// IMP=0x0000000000015545
- (id)initWithClassID:(id)arg1 personID:(id)arg2;	// IMP=0x000000000001547e
- (id)_init;	// IMP=0x000000000001544f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *parentObjectID; // @dynamic parentObjectID;
@property(readonly) Class superclass;

@end

