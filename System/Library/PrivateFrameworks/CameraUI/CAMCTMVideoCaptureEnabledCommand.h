//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMCTMVideoCaptureEnabledCommand
{
    _Bool __enabled;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=_isEnabled) _Bool _enabled; // @synthesize _enabled=__enabled;
- (void)executeWithContext:(id)arg1;	// IMP=0x000000000010d823
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010d7ce
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010d748
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010d6bb
- (id)initWithEnabled:(_Bool)arg1;	// IMP=0x000000000010d65b

@end
