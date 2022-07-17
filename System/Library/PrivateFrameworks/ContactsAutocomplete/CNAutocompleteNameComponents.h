//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/NSCopying-Protocol.h>

@class NSString;

@interface CNAutocompleteNameComponents : NSObject <NSCopying>
{
    NSString *_firstName;	// 8 = 0x8
    NSString *_lastName;	// 16 = 0x10
    NSString *_nickname;	// 24 = 0x18
    NSString *_nameSuffix;	// 32 = 0x20
}

+ (id)contactKeys;	// IMP=0x000000000001854b
+ (id)nameComponentsWithFirstName:(id)arg1 lastName:(id)arg2 nickname:(id)arg3 nameSuffix:(id)arg4;	// IMP=0x000000000001843d
- (void).cxx_destruct;	// IMP=0x00000000000187cc
@property(readonly) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(readonly) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly) NSString *firstName; // @synthesize firstName=_firstName;
- (unsigned long long)hash;	// IMP=0x00000000000186c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000185f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000185ed

@end
