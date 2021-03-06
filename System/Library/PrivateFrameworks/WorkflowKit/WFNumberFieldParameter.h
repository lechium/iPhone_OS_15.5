//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFParameterDialogProvider-Protocol.h>

@class NSString;

@interface WFNumberFieldParameter <WFParameterDialogProvider>
{
    _Bool _allowsDecimalNumbers;	// 8 = 0x8
    _Bool _allowsNegativeNumbers;	// 9 = 0x9
    long long _textAlignment;	// 16 = 0x10
}

+ (_Bool)defaultAllowsNegativeNumbers;	// IMP=0x000000000021531b
+ (_Bool)defaultAllowsDecimalNumbers;	// IMP=0x0000000000215313
@property(readonly, nonatomic) _Bool allowsNegativeNumbers; // @synthesize allowsNegativeNumbers=_allowsNegativeNumbers;
@property(readonly, nonatomic) _Bool allowsDecimalNumbers; // @synthesize allowsDecimalNumbers=_allowsDecimalNumbers;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
- (id)parameterStateFromDialogResponse:(id)arg1;	// IMP=0x0000000000215114
- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 prompt:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000214f83
- (_Bool)shouldAlignLabels;	// IMP=0x0000000000214f7b
- (id)defaultSupportedVariableTypes;	// IMP=0x0000000000214f0a
- (id)initWithDefinition:(id)arg1;	// IMP=0x0000000000214d0f
- (Class)singleStateClass;	// IMP=0x0000000000214cfe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

