//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;
@protocol MTLTexture;

@interface AREnvironmentProbeAnchor
{
    id <MTLTexture> _environmentTexture;	// 8 = 0x8
    MISSING_TYPE *_extent;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000052ce
- (void).cxx_destruct;	// IMP=0x000000000000530c
@property(readonly, nonatomic) MISSING_TYPE *extent; // @synthesize extent=_extent;
@property(readonly, nonatomic) id <MTLTexture> environmentTexture; // @synthesize environmentTexture=_environmentTexture;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000052dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000052d6
- (id)initWithName:(id)arg1 transform:(CDStruct_14d5dc5e)arg2 extent: /* Error: Ran out of types for this method. */;	// IMP=0x000000000000527c
- (id)initWithTransform:(CDStruct_14d5dc5e)arg1 extent: /* Error: Ran out of types for this method. */;	// IMP=0x000000000000522a

@end

