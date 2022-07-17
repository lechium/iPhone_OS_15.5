//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCoding-Protocol.h>
#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@class NSFetchIndexDescription, NSPropertyDescription, NSString;

@interface NSFetchIndexElementDescription : NSObject <NSSecureCoding, NSCoding, NSCopying>
{
    NSPropertyDescription *_property;	// 8 = 0x8
    NSString *_propertyName;	// 16 = 0x10
    unsigned long long _collationType;	// 24 = 0x18
    NSFetchIndexDescription *_indexDescription;	// 32 = 0x20
    struct __indexElementDescriptionFlags {
        unsigned int _ascending:1;
        unsigned int _propertyIsRetained:1;
        unsigned int _unique:1;
        unsigned int _reservedEntityDescription:29;
    } _indexElementDescriptionFlags;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002a549f
@property(readonly, retain) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(readonly, nonatomic) NSFetchIndexDescription *indexDescription;
@property(getter=isAscending) _Bool ascending;
@property unsigned long long collationType;
@property(readonly, retain) NSPropertyDescription *property;
- (id)description;	// IMP=0x00000000002a585b
- (unsigned long long)hash;	// IMP=0x00000000002a5845
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a5745
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a567a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002a54a7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002a53e5
- (void)dealloc;	// IMP=0x00000000002a538a
- (id)initWithProperty:(id)arg1 collationType:(unsigned long long)arg2;	// IMP=0x00000000002a5098

@end
