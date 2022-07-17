//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSUUID : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000023756d
+ (id)UUID;	// IMP=0x0000000000237243
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002371a2
- (Class)classForCoder;	// IMP=0x0000000000237834
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023763c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000237575
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002374e1
- (struct __CFString *)_cfUUIDString;	// IMP=0x00000000002374b4
@property(readonly, copy) NSString *UUIDString;
- (void)getUUIDBytes:(unsigned char [16])arg1;	// IMP=0x000000000023749b
- (long long)compare:(id)arg1;	// IMP=0x00000000002373ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000237311
- (unsigned long long)hash;	// IMP=0x00000000002372b7
- (id)initWithUUIDBytes:(unsigned char [16])arg1;	// IMP=0x00000000002372af
- (id)initWithUUIDString:(id)arg1;	// IMP=0x00000000002372a7
- (id)init;	// IMP=0x0000000000237255

@end
