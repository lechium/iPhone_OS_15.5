//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSAction.h>

#import <SpringBoardUIServices/SBUIPresentableButtonEventsAssertion-Protocol.h>

@class NSString;

@interface SBUIPresentableButtonEventsAction : BSAction <SBUIPresentableButtonEventsAssertion>
{
    NSString *_reason;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006a096
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x000000000006a05f
- (void)invalidate;	// IMP=0x0000000000069f9c
@property(readonly, nonatomic) long long presentableButtonEvent;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 debug:(_Bool)arg2;	// IMP=0x0000000000069e6d
- (_Bool)_expectsResponse;	// IMP=0x0000000000069e65
- (void)handleButtonEvent;	// IMP=0x0000000000069dab
- (id)initWithButtonEvent:(long long)arg1 reason:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000699e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

