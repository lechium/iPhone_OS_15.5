//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AXMLayoutLine
{
    NSMutableArray *_sequences;	// 8 = 0x8
}

+ (id)line:(id)arg1;	// IMP=0x0000000000040f43
- (void).cxx_destruct;	// IMP=0x0000000000041270
- (id)sequences;	// IMP=0x000000000004125b
- (void)addSequence:(id)arg1;	// IMP=0x000000000004123e
- (id)recognizedTextFeatures;	// IMP=0x0000000000041053
- (struct CGRect)normalizedFrame;	// IMP=0x0000000000041008
- (struct CGRect)frame;	// IMP=0x0000000000040fbd

@end
