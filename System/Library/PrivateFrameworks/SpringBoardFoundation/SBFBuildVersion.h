//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBFBuildVersion : NSObject
{
    NSString *_stringRepresentation;	// 8 = 0x8
    long long _majorBuildNumber;	// 16 = 0x10
    NSString *_majorBuildLetterString;	// 24 = 0x18
    long long _minorBuildNumber;	// 32 = 0x20
    NSString *_minorBuildLetterString;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000078b68
@property(readonly, copy, nonatomic) NSString *minorBuildLetterString; // @synthesize minorBuildLetterString=_minorBuildLetterString;
@property(readonly, nonatomic) long long minorBuildNumber; // @synthesize minorBuildNumber=_minorBuildNumber;
@property(readonly, copy, nonatomic) NSString *majorBuildLetterString; // @synthesize majorBuildLetterString=_majorBuildLetterString;
@property(readonly, nonatomic) long long majorBuildNumber; // @synthesize majorBuildNumber=_majorBuildNumber;
@property(readonly, copy, nonatomic) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
- (id)description;	// IMP=0x0000000000078a41
- (long long)compareBuildVersionString:(id)arg1 withPrecision:(long long)arg2;	// IMP=0x00000000000789be
- (long long)compareBuildVersion:(id)arg1 withPrecision:(long long)arg2;	// IMP=0x0000000000078772
- (unsigned long long)hash;	// IMP=0x000000000007869c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000078566
- (id)initWithString:(id)arg1;	// IMP=0x0000000000078220

@end

