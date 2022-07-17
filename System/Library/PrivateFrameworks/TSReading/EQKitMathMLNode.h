//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/EQKitLayoutNode-Protocol.h>

@class NSString;
@protocol EQKitLayoutNode;

@interface EQKitMathMLNode : NSObject <EQKitLayoutNode>
{
    id <EQKitLayoutNode> mParent;	// 8 = 0x8
}

@property(nonatomic) id <EQKitLayoutNode> parent; // @synthesize parent=mParent;
- (_Bool)isAttributeDefaultInheritableFromStyle:(int)arg1;	// IMP=0x00000000000306a5
- (int)isOperatorPaddingRequired;	// IMP=0x000000000003069a
- (id)operatorCore;	// IMP=0x0000000000030692
- (_Bool)isEmbellishedOperator;	// IMP=0x000000000003068a
- (long long)scriptLevelWithBase:(long long)arg1;	// IMP=0x000000000003067a
- (_Bool)isBaseFontNameUsed;	// IMP=0x0000000000030672
- (_Bool)isSpaceLike;	// IMP=0x000000000003066a
- (_Bool)isNumber;	// IMP=0x0000000000030662
- (id)layoutStyleNode;	// IMP=0x000000000003065a
- (struct Schemata)layoutSchemata;	// IMP=0x0000000000030642

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
