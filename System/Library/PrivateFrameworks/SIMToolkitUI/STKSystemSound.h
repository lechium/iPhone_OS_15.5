//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SIMToolkitUI/STKSound-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface STKSystemSound <STKSound>
{
    unsigned int _systemSoundID;	// 28 = 0x1c
}

- (void)_reallyStopSound;	// IMP=0x0000000000013b40
- (void)_reallyPlaySound;	// IMP=0x0000000000013a00
- (id)initForSystemSoundID:(unsigned int)arg1 duration:(double)arg2;	// IMP=0x00000000000139be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
