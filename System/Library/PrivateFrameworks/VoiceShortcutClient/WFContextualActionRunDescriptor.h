//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WFContextualAction;

@interface WFContextualActionRunDescriptor
{
    WFContextualAction *_action;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000016160
- (void).cxx_destruct;	// IMP=0x000000000001614d
@property(readonly, nonatomic) WFContextualAction *action; // @synthesize action=_action;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000160c3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016023
- (id)initWithAction:(id)arg1;	// IMP=0x0000000000015f27

@end

