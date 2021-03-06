//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/TIKeyboardInteractionProtocolEvent-Protocol.h>

@class NSString;

@interface TIKeyboardInteractionProtocolEventSetClientID <TIKeyboardInteractionProtocolEvent>
{
    NSString *_clientID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000028566
- (void).cxx_destruct;	// IMP=0x0000000000028412
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, copy) NSString *description;
- (void)sendTo:(id)arg1;	// IMP=0x0000000000028351
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000282b6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028239
- (id)initWithClientID:(id)arg1 keyboardState:(id)arg2;	// IMP=0x00000000000281c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

