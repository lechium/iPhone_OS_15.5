//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CXSetHeldCallAction
{
    _Bool _onHold;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000969a
@property(nonatomic, getter=isOnHold) _Bool onHold; // @synthesize onHold=_onHold;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000973b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000096a2
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x0000000000009611
- (id)customDescription;	// IMP=0x0000000000009599
- (id)initWithCallUUID:(id)arg1 onHold:(_Bool)arg2;	// IMP=0x0000000000009557

@end

