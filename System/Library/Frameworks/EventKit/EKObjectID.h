//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/NSCopying-Protocol.h>
#import <EventKit/NSSecureCoding-Protocol.h>

@class CADObjectID, NSDictionary, NSString, NSURL;

@interface EKObjectID : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _temporary;	// 8 = 0x8
    int _entityType;	// 12 = 0xc
    int _rowID;	// 16 = 0x10
}

+ (id)EKObjectIDsFromData:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000dfc5a
+ (id)EKObjectIDsFromData:(id)arg1;	// IMP=0x00000000000dfbec
+ (id)EKObjectIDsFromCADObjectIDs:(id)arg1;	// IMP=0x00000000000df9f5
+ (id)CADObjectIDsFromEKObjectIDs:(id)arg1 withGeneration:(int)arg2;	// IMP=0x00000000000df7f9
+ (id)objectIDWithURL:(id)arg1;	// IMP=0x00000000000dedc2
+ (id)temporaryObjectIDWithEntityType:(int)arg1;	// IMP=0x00000000000ded7f
+ (id)objectIDWithEntityType:(int)arg1 rowID:(int)arg2;	// IMP=0x00000000000ded42
+ (id)objectIDWithCADObjectID:(id)arg1;	// IMP=0x00000000000deca8
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000deca0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000df7ee
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000df75e
- (unsigned long long)hash;	// IMP=0x00000000000df736
@property(readonly, nonatomic) NSURL *URIRepresentation;
@property(readonly, nonatomic) NSString *stringRepresentation;
- (id)description;	// IMP=0x00000000000df628
@property(readonly, nonatomic) _Bool isTemporary;
@property(readonly, nonatomic) CADObjectID *CADObjectID;
- (id)CADObjectIDWithGeneration:(int)arg1;	// IMP=0x00000000000df5b3
@property(readonly, nonatomic) int rowID;
@property(readonly, nonatomic) long long entityType;
@property(readonly, nonatomic) NSString *entityName;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000000df348
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000df2c0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000df218
- (id)initWithEntityType:(int)arg1 rowID:(int)arg2 temporary:(_Bool)arg3;	// IMP=0x00000000000df1c7

@end

