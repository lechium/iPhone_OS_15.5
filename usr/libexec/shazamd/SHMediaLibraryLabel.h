//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SHMediaLibraryLabel : NSObject
{
    NSString *_name;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000013793
- (void).cxx_destruct;	// IMP=0x00200000000139a8
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;	// IMP=0x001000000001395a
- (_Bool)isEqualLabel:(id)arg1;	// IMP=0x001000000001388b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000013824
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001379b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000013770
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000136e3
@property(readonly, nonatomic) long long type;
- (id)initWithName:(id)arg1;	// IMP=0x001000000001362d

@end
