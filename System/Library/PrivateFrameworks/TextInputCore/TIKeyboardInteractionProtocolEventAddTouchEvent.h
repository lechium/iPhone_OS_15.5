//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSSecureCoding-Protocol.h>
#import <TextInputCore/TIKeyboardInteractionProtocolEvent-Protocol.h>

@class NSString, TIKeyboardTouchEvent;

@interface TIKeyboardInteractionProtocolEventAddTouchEvent : NSObject <TIKeyboardInteractionProtocolEvent, NSSecureCoding>
{
    TIKeyboardTouchEvent *_touchEvent;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029137
- (void).cxx_destruct;	// IMP=0x0000000000029127
@property(readonly, nonatomic) TIKeyboardTouchEvent *touchEvent; // @synthesize touchEvent=_touchEvent;
@property(readonly, copy) NSString *description;
- (void)sendTo:(id)arg1;	// IMP=0x0000000000029091
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029000
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028fdd
- (id)initWithTouchEvent:(id)arg1;	// IMP=0x0000000000028f72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
