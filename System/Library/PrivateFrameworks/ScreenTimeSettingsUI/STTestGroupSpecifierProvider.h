//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTimer;

__attribute__((visibility("hidden")))
@interface STTestGroupSpecifierProvider
{
    _Bool _isHidden;	// 8 = 0x8
    NSTimer *_timer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008e1ac
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)timerFired:(id)arg1;	// IMP=0x000000000008ddfa
- (void)setIsHidden:(_Bool)arg1;	// IMP=0x000000000008dc4b
- (_Bool)isHidden;	// IMP=0x000000000008dc3b
- (id)init;	// IMP=0x000000000008dbea
- (void)dealloc;	// IMP=0x000000000008dba1

@end

