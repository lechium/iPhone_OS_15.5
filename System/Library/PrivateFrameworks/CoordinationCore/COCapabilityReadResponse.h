//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

__attribute__((visibility("hidden")))
@interface COCapabilityReadResponse
{
    NSSet *_capabilities;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000b20a
- (void).cxx_destruct;	// IMP=0x000000000000b223
@property(readonly, copy, nonatomic) NSSet *capabilities; // @synthesize capabilities=_capabilities;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b16f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000aefe
- (id)initWithCapabilities:(id)arg1;	// IMP=0x000000000000ae84
- (id)init;	// IMP=0x000000000000ae2a

@end

