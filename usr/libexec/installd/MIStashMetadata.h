//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MIStashMetadata : NSObject
{
    NSDate *_dateStashed;	// 8 = 0x8
    NSDate *_dateOriginallyInstalled;	// 16 = 0x10
}

+ (id)metadataFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0020000000025173
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000024bd1
- (void).cxx_destruct;	// IMP=0x0020000000025771
@property(retain, nonatomic) NSDate *dateOriginallyInstalled; // @synthesize dateOriginallyInstalled=_dateOriginallyInstalled;
@property(retain, nonatomic) NSDate *dateStashed; // @synthesize dateStashed=_dateStashed;
- (_Bool)serializeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000254d7
- (id)description;	// IMP=0x00100000000250aa
- (unsigned long long)hash;	// IMP=0x001000000002501d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000024e3c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000024d8e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000024ca2
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000024bd9

@end
