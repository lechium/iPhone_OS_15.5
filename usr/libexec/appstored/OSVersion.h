//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface OSVersion : NSObject
{
    struct _OSVersion _version;	// 8 = 0x8
}

+ (id)anyVersion;	// IMP=0x004000000004ffd0
- (_Bool)isEqual:(id)arg1;	// IMP=0x002000000005032e
- (unsigned long long)hash;	// IMP=0x0010000000050311
- (id)description;	// IMP=0x00100000000502ff
- (_Bool)isEqualToVersion:(id)arg1;	// IMP=0x00100000000502b8
- (long long)compare:(id)arg1;	// IMP=0x0010000000050255
@property(readonly, copy) NSString *canonicalString;
@property(readonly, getter=isAnyVersion) _Bool anyVersion;
- (id)_initWithVersion:(struct _OSVersion)arg1;	// IMP=0x001000000005013d
- (id)initWithString:(id)arg1;	// IMP=0x0010000000050021

@end

