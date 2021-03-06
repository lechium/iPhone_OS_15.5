//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@interface WFConfirmInteractionDialogResponse <NSSecureCoding>
{
    unsigned long long _interactionResponseCode;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e7df2
@property(readonly, nonatomic) unsigned long long interactionResponseCode; // @synthesize interactionResponseCode=_interactionResponseCode;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e7d5b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e7cca
- (id)description;	// IMP=0x00000000000e7c15
- (_Bool)shouldDismissDialogInTransientMode;	// IMP=0x00000000000e7c0d
- (id)initWithInteractionResponseCode:(unsigned long long)arg1;	// IMP=0x00000000000e7ba5

@end

