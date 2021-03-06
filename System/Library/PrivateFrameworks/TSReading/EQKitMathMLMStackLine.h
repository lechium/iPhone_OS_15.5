//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/EQKitLayoutSchemataStackLine-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>

@class NSString;

@interface EQKitMathMLMStackLine <EQKitMathMLNode, EQKitLayoutSchemataStackLine>
{
}

- (unsigned long long)schemataThickness;	// IMP=0x000000000003c884
- (struct Schemata)layoutSchemata;	// IMP=0x000000000003c86c
- (const void *)mathMLAttributes;	// IMP=0x000000000003c7e0
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;	// IMP=0x000000000003c7ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

