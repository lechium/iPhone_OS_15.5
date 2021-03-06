//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/EQKitLayoutSchemataStack-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>

@class NSArray, NSString;

@interface EQKitMathMLMStack <EQKitMathMLNode, EQKitLayoutSchemataStack>
{
    NSArray *mChildren;	// 16 = 0x10
    int mAlign;	// 24 = 0x18
}

- (_Bool)isBaseFontNameUsed;	// IMP=0x000000000003c10e
- (int)schemataAlign;	// IMP=0x000000000003c0fe
- (id)schemataChildren;	// IMP=0x000000000003c0ed
- (struct Schemata)layoutSchemata;	// IMP=0x000000000003c0d5
- (void)dealloc;	// IMP=0x000000000003c093
- (id)initWithChildren:(id)arg1;	// IMP=0x000000000003bd7c
- (const void *)mathMLAttributes;	// IMP=0x000000000003bcf0
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;	// IMP=0x000000000003bcbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

