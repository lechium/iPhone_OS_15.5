//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@interface TRErrorResponse
{
    NSError *_error;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000199f1
- (void).cxx_destruct;	// IMP=0x0000000000019bf7
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)description;	// IMP=0x0000000000019b08
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000019a6d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000199f9

@end
