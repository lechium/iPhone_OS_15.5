//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/EQKitLayoutSchemataSubsuperscript-Protocol.h>

@class NSString;

@interface EQKitMathMLMSubsuperscript <EQKitLayoutSchemataSubsuperscript>
{
}

- (id)schemataSuperscript;	// IMP=0x0000000000030100
- (id)schemataSubscript;	// IMP=0x00000000000300ec
- (id)schemataKernel;	// IMP=0x00000000000300d8
- (id)operatorCore;	// IMP=0x00000000000300b8
- (_Bool)isEmbellishedOperator;	// IMP=0x0000000000030098
- (struct Schemata)layoutSchemata;	// IMP=0x0000000000030080

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

