//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SBPreferenceChangeDodgingModifierEvent
{
    NSString *_identifier;	// 8 = 0x8
    unsigned long long _phase;	// 16 = 0x10
    unsigned long long _style;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004c8512
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)type;	// IMP=0x00000000004c84d4
- (id)initWithIdentifier:(id)arg1 phase:(unsigned long long)arg2 style:(unsigned long long)arg3;	// IMP=0x00000000004c83cb

@end

