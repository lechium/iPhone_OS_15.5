//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAContext;

@interface FBSCAContextSceneLayer
{
    unsigned int _contextID;	// 8 = 0x8
}

+ (id)layerWithCAContext:(id)arg1;	// IMP=0x0000000000019657
@property(readonly, nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
- (_Bool)isCAContextLayer;	// IMP=0x0000000000019b9c
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000019b27
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000019ab6
- (id)_succinctDescription;	// IMP=0x0000000000019a7f
- (id)description;	// IMP=0x0000000000019978
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001986f
- (unsigned long long)hash;	// IMP=0x00000000000197ec
@property(readonly, nonatomic) CAContext *CAContext;
- (id)initWithCAContextID:(unsigned int)arg1 level:(double)arg2;	// IMP=0x00000000000197c4
- (id)initWithCAContext:(id)arg1;	// IMP=0x00000000000196e6
- (id)_initWithCAContext:(id)arg1 contextID:(unsigned int)arg2 fallbackLevel:(double)arg3;	// IMP=0x00000000000196a4

@end

