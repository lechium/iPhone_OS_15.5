//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface NPKButtonListener : NSObject
{
    CDUnknownBlockType _buttonHandler;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000053be5
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(copy, nonatomic) CDUnknownBlockType buttonHandler; // @synthesize buttonHandler=_buttonHandler;
- (CDUnknownBlockType)_handlerQueue_buttonHandler;	// IMP=0x0000000000053b97
- (id)initWithHandlerQueue:(id)arg1;	// IMP=0x0000000000053a49

@end

