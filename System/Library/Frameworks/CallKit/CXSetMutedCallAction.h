//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CXSetMutedCallAction
{
    _Bool _muted;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000037eef
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000037f90
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000037ef7
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x0000000000037e66
- (id)customDescription;	// IMP=0x0000000000037dee
- (id)initWithCallUUID:(id)arg1 muted:(_Bool)arg2;	// IMP=0x0000000000037dac

@end

