//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDText;

__attribute__((visibility("hidden")))
@interface WMSectionContentMapper
{
    WDText *wdText;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004619c6
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000000ed9a6
- (id)initWithWDText:(id)arg1 parent:(id)arg2;	// IMP=0x00000000000ed91a
- (void)mapTextFrameStyleTo:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000100d03
- (void)mapTextFrameAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001009c6
- (id)paragraphAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ede61
- (void)updateTextFrameState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000edc96

@end

