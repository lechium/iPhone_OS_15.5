//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CXSetTrashedVoicemailAction
{
    _Bool _trashed;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003a87
@property(nonatomic, getter=isTrashed) _Bool trashed; // @synthesize trashed=_trashed;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003b28
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003a8f
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x00000000000039fe
- (id)customDescription;	// IMP=0x0000000000003986
- (id)initWithVoicemailUUID:(id)arg1 trashed:(_Bool)arg2;	// IMP=0x0000000000003944

@end
