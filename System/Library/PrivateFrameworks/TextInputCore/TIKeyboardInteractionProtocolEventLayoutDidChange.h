//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/TIKeyboardInteractionProtocolEvent-Protocol.h>

@class NSString, TIKeyboardLayout;

@interface TIKeyboardInteractionProtocolEventLayoutDidChange <TIKeyboardInteractionProtocolEvent>
{
    TIKeyboardLayout *_keyLayout;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000028f6a
- (void).cxx_destruct;	// IMP=0x0000000000028f57
@property(readonly, nonatomic) TIKeyboardLayout *keyLayout; // @synthesize keyLayout=_keyLayout;
@property(readonly, copy) NSString *description;
- (void)sendTo:(id)arg1;	// IMP=0x0000000000028e96
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028dfb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028d7e
- (id)initWithLayout:(id)arg1 keyboardState:(id)arg2;	// IMP=0x0000000000028d06

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

