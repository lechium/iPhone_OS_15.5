//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WFParameter;

@interface WFStepperParameterComponent
{
    WFParameter *_parameter;	// 8 = 0x8
    CDUnknownBlockType _updateBlock;	// 16 = 0x10
}

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;	// IMP=0x00000000002f03ea
- (void).cxx_destruct;	// IMP=0x00000000002f1585
- (CDUnknownBlockType)updateBlock;	// IMP=0x00000000002f1574
- (id)parameter;	// IMP=0x00000000002f155b
- (void)stepperValueChanged:(id)arg1;	// IMP=0x00000000002f1432

@end

