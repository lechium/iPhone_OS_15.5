//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ConvexFillProcessor
{
}

+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x000000000007931e
+ (_Bool)allowPartialOutputRegion;	// IMP=0x0000000000079316
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x00000000000792f3
+ (_Bool)canReduceOutputChannels;	// IMP=0x00000000000792eb
+ (int)outputFormat;	// IMP=0x00000000000792dc
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000078cfc

@end
