//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface ASDRestoreApplicationsRequestResponse
{
    NSArray *_results;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000030ad4
- (void).cxx_destruct;	// IMP=0x0000000000030be5
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000030baa
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000030adc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030a94
- (id)initWithResults:(id)arg1;	// IMP=0x00000000000308fe
- (id)init;	// IMP=0x00000000000308be

// Remaining properties
@property _Bool success; // @dynamic success;

@end
