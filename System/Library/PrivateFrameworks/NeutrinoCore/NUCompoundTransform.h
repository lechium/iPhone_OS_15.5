//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface NUCompoundTransform
{
    NSArray *_transforms;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000019f5f7
- (id)description;	// IMP=0x000000000019f5d3
- (CDStruct_14d5dc5e)transformMatrix:(CDStruct_14d5dc5e)arg1;	// IMP=0x000000000019f36b
- (CDStruct_1b6d18a9)transformTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000019f1b8
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;	// IMP=0x000000000019f024
- (id)inverseTransform;	// IMP=0x000000000019ee29
- (id)initWithTransforms:(id)arg1;	// IMP=0x000000000019ea81
- (id)initWithSrcTransforms:(id)arg1 dstTransforms:(id)arg2;	// IMP=0x000000000019e864

@end
