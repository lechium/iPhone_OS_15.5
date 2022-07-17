//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol DOMEventTarget;

@interface DOMEvent
{
}

- (void)stopImmediatePropagation;	// IMP=0x0000000000042300
- (void)initEvent:(id)arg1 canBubbleArg:(_Bool)arg2 cancelableArg:(_Bool)arg3;	// IMP=0x00000000000421a0
- (void)preventDefault;	// IMP=0x00000000000420b0
- (void)stopPropagation;	// IMP=0x0000000000041fe0
@property _Bool cancelBubble;
@property _Bool returnValue;
@property(readonly) id <DOMEventTarget> srcElement;
- (_Bool)isTrusted;	// IMP=0x0000000000041a70
- (_Bool)defaultPrevented;	// IMP=0x00000000000419a0
@property(readonly) unsigned long long timeStamp;
- (_Bool)composed;	// IMP=0x00000000000417b0
@property(readonly) _Bool cancelable;
@property(readonly) _Bool bubbles;
@property(readonly) unsigned short eventPhase;
@property(readonly) id <DOMEventTarget> currentTarget;
@property(readonly) id <DOMEventTarget> target;
@property(readonly, copy) NSString *type;
- (void)dealloc;	// IMP=0x00000000000411b0
- (void)initEvent:(id)arg1:(_Bool)arg2:(_Bool)arg3;	// IMP=0x00000000000423d0

@end
