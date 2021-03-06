//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COBallot;

__attribute__((visibility("hidden")))
@interface COMeshBaseBallotRequest
{
    COBallot *_ballot;	// 8 = 0x8
    long long _variant;	// 16 = 0x10
    unsigned long long _generation;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000051355
- (void).cxx_destruct;	// IMP=0x00000000000513a1
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
@property(copy, nonatomic) COBallot *ballot; // @synthesize ballot=_ballot;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000051271
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000051184
- (id)initWithBallot:(id)arg1 generation:(unsigned long long)arg2 variant:(long long)arg3;	// IMP=0x0000000000051157
- (id)initWithBallot:(id)arg1 generation:(unsigned long long)arg2;	// IMP=0x00000000000510bc

@end

