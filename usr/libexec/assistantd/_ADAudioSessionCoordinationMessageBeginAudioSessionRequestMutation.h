//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAudioSessionCoordinationMessageBeginAudioSessionRequest, MISSING_TYPE, NSString;

@interface _ADAudioSessionCoordinationMessageBeginAudioSessionRequestMutation : NSObject
{
    ADAudioSessionCoordinationMessageBeginAudioSessionRequest *_baseModel;	// 8 = 0x8
    MISSING_TYPE *_effectiveDate;	// 16 = 0x10
    double _expirationDuration;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasEffectiveDate:1;
        unsigned int hasExpirationDuration:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001b962a
- (id)generate;	// IMP=0x00100000001b9538
- (void)setExpirationDuration:(double)arg1;	// IMP=0x00100000001b9529
- (void)setEffectiveDate:(id)arg1;	// IMP=0x00100000001b9509
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00100000001b949e
- (id)init;	// IMP=0x00100000001b948a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

