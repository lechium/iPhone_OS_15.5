//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/EQKitMathMLNode-Protocol.h>

@class EQKitMathMLNode;

@interface EQKitMathMLBinaryNode <EQKitMathMLNode>
{
    EQKitMathMLNode *mFirst;	// 16 = 0x10
    EQKitMathMLNode *mSecond;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x000000000002e765
- (_Bool)isBaseFontNameUsed;	// IMP=0x000000000002e71d
- (const void *)mathMLAttributes;	// IMP=0x000000000002e715
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;	// IMP=0x000000000002e655
- (id)initWithFirst:(id)arg1 second:(id)arg2;	// IMP=0x000000000002e4b5
- (id)init;	// IMP=0x000000000002e49f

@end

