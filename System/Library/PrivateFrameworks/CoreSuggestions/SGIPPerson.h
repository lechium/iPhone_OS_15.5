//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSString;

@interface SGIPPerson : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;	// 8 = 0x8
    NSString *_handle;	// 16 = 0x10
    NSString *_handleType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005fe4f
+ (id)personWithIPPerson:(id)arg1;	// IMP=0x000000000005fd1f
- (void).cxx_destruct;	// IMP=0x000000000005fcec
@property(retain, nonatomic) NSString *handleType; // @synthesize handleType=_handleType;
@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005fc33
- (_Bool)isEqualToPerson:(id)arg1;	// IMP=0x000000000005fba4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005fb07
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005fa84
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005f95b
- (unsigned long long)hash;	// IMP=0x000000000005f8fc
- (id)description;	// IMP=0x000000000005f8b4

@end

