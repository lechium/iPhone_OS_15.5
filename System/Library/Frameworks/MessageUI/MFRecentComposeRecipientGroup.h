//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRRecentContact;

@interface MFRecentComposeRecipientGroup
{
    CRRecentContact *_recentContact;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000035013
@property(readonly, retain, nonatomic) CRRecentContact *recentContact; // @synthesize recentContact=_recentContact;
- (id)unlocalizedLabel;	// IMP=0x0000000000034ff0
- (id)placeholderName;	// IMP=0x0000000000034f5e
- (id)label;	// IMP=0x0000000000034ecc
- (id)initWithChildren:(id)arg1 displayString:(id)arg2 recentContact:(id)arg3;	// IMP=0x0000000000034e23

@end

