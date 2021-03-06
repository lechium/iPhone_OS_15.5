//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXDOMModifying-Protocol.h>

@class NSString;
@protocol SXDarkModeConfiguration, SXDarkModePolicyHandler, SXNamespacedObjectFactory;

@interface SXDarkModeModifier : NSObject <SXDOMModifying>
{
    id <SXDarkModePolicyHandler> _policyHandler;	// 8 = 0x8
    id <SXDarkModeConfiguration> _configuration;	// 16 = 0x10
    id <SXNamespacedObjectFactory> _namespacedObjectFactory;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000077da5
@property(readonly, nonatomic) id <SXNamespacedObjectFactory> namespacedObjectFactory; // @synthesize namespacedObjectFactory=_namespacedObjectFactory;
@property(readonly, nonatomic) id <SXDarkModeConfiguration> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <SXDarkModePolicyHandler> policyHandler; // @synthesize policyHandler=_policyHandler;
- (id)invertColor:(id)arg1 defaultColor:(id)arg2;	// IMP=0x0000000000077b33
- (id)invertedDataTableBorderSides:(id)arg1;	// IMP=0x00000000000778a3
- (id)invertedDataTableBorder:(id)arg1;	// IMP=0x00000000000777a8
- (id)invertedDataTableCellStyle:(id)arg1;	// IMP=0x00000000000773fa
- (id)invertedDataTableColumnStyle:(id)arg1;	// IMP=0x000000000007704c
- (id)invertedDataTableRowStyle:(id)arg1;	// IMP=0x0000000000076c9e
- (id)invertedDataTableStyle:(id)arg1;	// IMP=0x000000000007690f
- (id)invertedComponent:(id)arg1 context:(id)arg2;	// IMP=0x0000000000076784
- (id)invertedStrokeStyle:(id)arg1;	// IMP=0x0000000000076689
- (id)invertedBorder:(id)arg1;	// IMP=0x000000000007637e
- (id)invertedComponentShadow:(id)arg1;	// IMP=0x0000000000076283
- (id)invertedLinearGradient:(id)arg1;	// IMP=0x0000000000075f2c
- (id)invertedGradientFill:(id)arg1;	// IMP=0x0000000000075bd5
- (id)invertedTextDecoration:(id)arg1;	// IMP=0x0000000000075ad8
- (id)invertedDropCapStyle:(id)arg1;	// IMP=0x0000000000075954
- (id)invertedTextShadow:(id)arg1;	// IMP=0x0000000000075859
- (id)invertedTextStroke:(id)arg1;	// IMP=0x000000000007575c
- (id)invertedTextStyleForegroundColors:(id)arg1 context:(id)arg2;	// IMP=0x00000000000753c1
- (id)invertedTextStyleBackgroundColors:(id)arg1 context:(id)arg2;	// IMP=0x0000000000075245
- (id)invertedComponentTextStyleForegroundColors:(id)arg1 context:(id)arg2;	// IMP=0x0000000000074d4d
- (id)invertedComponentTextStyleBackgroundColors:(id)arg1 context:(id)arg2;	// IMP=0x0000000000074b0f
- (id)invertedComponentStyle:(id)arg1 context:(id)arg2;	// IMP=0x0000000000074743
- (id)invertedDocumentStyle:(id)arg1 context:(id)arg2;	// IMP=0x000000000007448f
- (void)invertForegroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4;	// IMP=0x00000000000741af
- (void)invertBackgroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4;	// IMP=0x0000000000073fae
- (void)invertForegroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4;	// IMP=0x0000000000073cb2
- (void)invertBackgroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4;	// IMP=0x0000000000073ab1
- (void)invertComponentStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4;	// IMP=0x00000000000738fd
- (void)modifyDOM:(id)arg1 context:(id)arg2;	// IMP=0x0000000000072bc3
- (id)initWithPolicyHandler:(id)arg1 configuration:(id)arg2 namespacedObjectFactory:(id)arg3;	// IMP=0x0000000000072b0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

