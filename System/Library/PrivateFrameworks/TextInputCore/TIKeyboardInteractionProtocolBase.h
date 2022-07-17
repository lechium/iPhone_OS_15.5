//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSSecureCoding-Protocol.h>

@class TIKeyboardState;

@interface TIKeyboardInteractionProtocolBase : NSObject <NSSecureCoding>
{
    TIKeyboardState *_keyboardState;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002855e
- (void).cxx_destruct;	// IMP=0x000000000002854e
@property(readonly, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028521
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028490
- (id)initWithKeyboardState:(id)arg1;	// IMP=0x0000000000028425

@end
