//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@interface _UICommandIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    SEL _action;	// 8 = 0x8
    id _propertyList;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000021ad55
+ (id)identifierWithAction:(SEL)arg1 propertyList:(id)arg2;	// IMP=0x000000000021acf9
- (void).cxx_destruct;	// IMP=0x000000000021b17f
@property(readonly, nonatomic) id propertyList; // @synthesize propertyList=_propertyList;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021b0dc
- (unsigned long long)hash;	// IMP=0x000000000021b0ad
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000021b022
- (id)description;	// IMP=0x000000000021af60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021af55
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021add3
- (id)initWithAction:(SEL)arg1 propertyList:(id)arg2;	// IMP=0x000000000021ad5d

@end

