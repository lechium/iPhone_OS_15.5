//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MCNearbyKey : NSObject
{
    unsigned short _character;	// 8 = 0x8
    float _logLikelihood;	// 12 = 0xc
}

@property(readonly, nonatomic) float logLikelihood; // @synthesize logLikelihood=_logLikelihood;
@property(readonly, nonatomic) unsigned short character; // @synthesize character=_character;
- (id)initWithCharacter:(unsigned short)arg1 logLikelihood:(float)arg2;	// IMP=0x000000000001b893

@end
