//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSDArchivedHint-Protocol.h>

@class NSString, TSTLayoutHint;

@interface TSTArchivedLayoutHint <TSDArchivedHint>
{
    TSTLayoutHint *mHint;	// 8 = 0x8
}

@property(retain, nonatomic) TSTLayoutHint *hint; // @synthesize hint=mHint;
- (id)initWithContext:(id)arg1 hint:(id)arg2;	// IMP=0x00000000003dcc42
- (void)dealloc;	// IMP=0x00000000003dcbb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

