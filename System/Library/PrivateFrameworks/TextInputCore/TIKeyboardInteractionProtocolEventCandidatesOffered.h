//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/TIKeyboardInteractionProtocolEvent-Protocol.h>

@class NSString, TIAutocorrectionList;

@interface TIKeyboardInteractionProtocolEventCandidatesOffered <TIKeyboardInteractionProtocolEvent>
{
    TIAutocorrectionList *_candidates;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002a393
- (void).cxx_destruct;	// IMP=0x000000000002a380
@property(readonly, nonatomic) TIAutocorrectionList *candidates; // @synthesize candidates=_candidates;
@property(readonly, copy) NSString *description;
- (void)sendTo:(id)arg1;	// IMP=0x0000000000029fb0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029f15
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029e98
- (id)initWithCandidatesOffered:(id)arg1 keyboardState:(id)arg2;	// IMP=0x0000000000029e20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
