//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CXSetPlayedVoicemailAction
{
    _Bool _played;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001ce35
@property(nonatomic, getter=isPlayed) _Bool played; // @synthesize played=_played;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ced6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001ce3d
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x000000000001cdac
- (id)customDescription;	// IMP=0x000000000001cd34
- (id)initWithVoicemailUUID:(id)arg1 played:(_Bool)arg2;	// IMP=0x000000000001ccf2

@end

