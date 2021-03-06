//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarDatabase/NSCopying-Protocol.h>
#import <CalendarDatabase/NSSecureCoding-Protocol.h>

@interface CADObjectID : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _temporary;	// 8 = 0x8
    int _entityType;	// 12 = 0xc
    int _entityID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000673cc
@property(readonly, nonatomic, getter=isTemporary) _Bool temporary; // @synthesize temporary=_temporary;
@property(readonly, nonatomic) int entityID; // @synthesize entityID=_entityID;
@property(readonly, nonatomic) int entityType; // @synthesize entityType=_entityType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000067aaa
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000679d0
- (unsigned long long)hash;	// IMP=0x00000000000679a5
- (id)URIRepresentation;	// IMP=0x0000000000067942
- (id)stringRepresentation;	// IMP=0x00000000000678a9
- (id)description;	// IMP=0x0000000000067897
- (id)entityName;	// IMP=0x000000000006788a
- (id)dictionaryRepresentation;	// IMP=0x0000000000067757
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x000000000006763f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000675b7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000067474
- (id)initWithEntityType:(int)arg1 entityID:(int)arg2;	// IMP=0x00000000000673d4

@end

