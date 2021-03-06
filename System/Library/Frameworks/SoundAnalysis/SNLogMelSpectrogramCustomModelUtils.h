//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNLogMelSpectrogramCustomModelUtils : NSObject
{
}

+ (_Bool)validateModelDescription:(id)arg1 logMelExtractionParameters:(struct SNLogMelParameters)arg2 withHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0000000000070e0a
+ (_Bool)resetLogMelExtractionParameters:(struct SNLogMelParameters *)arg1 overrideWithParameterDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000070d5d
+ (_Bool)overrideLogMelExtractionParameters:(struct SNLogMelParameters *)arg1 withContentsOfParameterDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006fdd2
+ (struct SNLogMelParameters)defaultLogMelExtractionParameters;	// IMP=0x000000000006fda5
+ (CDUnknownBlockType)makeHandlerForInt32ParameterWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006fc51
+ (CDUnknownBlockType)makeHandlerForUInt32ParameterWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006fafd
+ (CDUnknownBlockType)makeHandlerForFloatParameterWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006f993
+ (CDUnknownBlockType)makeHandlerForStringParameterWithChoices:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000006f764

@end

