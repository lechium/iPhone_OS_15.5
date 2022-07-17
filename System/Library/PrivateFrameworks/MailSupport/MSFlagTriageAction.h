//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface MSFlagTriageAction
{
    NSNumber *_flagColor;	// 8 = 0x8
    unsigned long long _cachedFlagState;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000193bf
@property(nonatomic) unsigned long long cachedFlagState; // @synthesize cachedFlagState=_cachedFlagState;
@property(retain, nonatomic) NSNumber *flagColor; // @synthesize flagColor=_flagColor;
- (void)_toggleFlagWithBuilder:(id)arg1;	// IMP=0x00000000000192bc
- (void)_toggleCachedFlagState;	// IMP=0x0000000000019267
- (_Bool)_isFlagged;	// IMP=0x00000000000191f2
- (_Bool)flagState;	// IMP=0x0000000000018f00

@end
