//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WFOutputAction
{
}

- (id)outputContentClasses;	// IMP=0x00000000000f28aa
- (_Bool)getInputContentFromVariablesInParameterState:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f27ff
- (id)outputVariableString;	// IMP=0x00000000000f2765
- (_Bool)hasOutputFallback;	// IMP=0x00000000000f26ae
- (id)runningContext;	// IMP=0x00000000000f260b
- (id)runSource;	// IMP=0x00000000000f2595
- (unsigned long long)outputBehavior;	// IMP=0x00000000000f2548
- (_Bool)outputSurfaceIsAvailable;	// IMP=0x00000000000f24d3
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000f234d
- (void)finishRunningWithOutput:(id)arg1 error:(id)arg2;	// IMP=0x00000000000f220a
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x00000000000f1f06

@end

