//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CXSetVideoPresentationStateCallAction
{
    long long _videoPresentationState;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000047d75
@property(nonatomic) long long videoPresentationState; // @synthesize videoPresentationState=_videoPresentationState;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000047e17
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000047d7d
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x0000000000047cec
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000047ce4
- (id)customDescription;	// IMP=0x0000000000047c6c
- (id)initWithCallUUID:(id)arg1 videoPresentationState:(long long)arg2;	// IMP=0x0000000000047c28

@end

