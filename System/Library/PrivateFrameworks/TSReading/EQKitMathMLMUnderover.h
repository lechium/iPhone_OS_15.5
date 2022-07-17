//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/EQKitLayoutSchemataUnderover-Protocol.h>

@class NSString;

@interface EQKitMathMLMUnderover <EQKitLayoutSchemataUnderover>
{
}

- (id)operatorCore;	// IMP=0x000000000003b31e
- (_Bool)isEmbellishedOperator;	// IMP=0x000000000003b2fe
- (struct Schemata)layoutSchemata;	// IMP=0x000000000003b2e6
- (id)schemataOver;	// IMP=0x000000000003b2d2
- (id)schemataUnder;	// IMP=0x000000000003b2be
- (id)schemataBase;	// IMP=0x000000000003b2aa
- (const void *)mathMLAttributes;	// IMP=0x000000000003b21f
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;	// IMP=0x000000000003b1f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
