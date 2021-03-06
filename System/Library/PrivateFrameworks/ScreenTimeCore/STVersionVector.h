//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/NSCopying-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface STVersionVector : NSObject <NSCopying>
{
    NSMutableDictionary *_nodeByIdentifier;	// 8 = 0x8
    NSString *_editorIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006151a
@property(copy, nonatomic) NSString *editorIdentifier; // @synthesize editorIdentifier=_editorIdentifier;
@property(retain, nonatomic) NSMutableDictionary *nodeByIdentifier; // @synthesize nodeByIdentifier=_nodeByIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006139e
- (id)debugDescription;	// IMP=0x0000000000061235
- (id)description;	// IMP=0x0000000000061121
- (_Bool)isEqualToVersionVector:(id)arg1;	// IMP=0x0000000000061107
- (_Bool)isConcurrentWithVersionVector:(id)arg1;	// IMP=0x00000000000610dd
- (_Bool)precedesVersionVector:(id)arg1;	// IMP=0x00000000000610c4
- (void)join:(id)arg1;	// IMP=0x0000000000060d08
- (void)incrementNodeWithIdentifier:(id)arg1;	// IMP=0x0000000000060bed
- (unsigned long long)evaluateCausality:(id)arg1;	// IMP=0x00000000000606f3
@property(readonly, nonatomic) NSArray *nodes;
@property(readonly, copy, nonatomic) NSData *dataRepresentation;
- (id)initWithDataRepresentation:(id)arg1;	// IMP=0x000000000005fffa
- (id)initWithNode:(id)arg1;	// IMP=0x000000000005ff73
- (id)init;	// IMP=0x000000000005ff1d

@end

