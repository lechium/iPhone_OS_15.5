//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CDMContextUpdateService
{
    NSString *locale;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001bcda
- (void)doCoreAnalyticsForContextUpdateOutcome:(int)arg1 numTurnsRollback:(int)arg2 success:(_Bool)arg3 locale:(id)arg4;	// IMP=0x000000000001bcc0
- (id)handle:(id)arg1;	// IMP=0x000000000001b078
- (id)setup:(id)arg1;	// IMP=0x000000000001aeca
- (_Bool)isEnabled;	// IMP=0x000000000001aeb1
- (id)handleRequestCommandTypeNames;	// IMP=0x000000000001adf7

@end
