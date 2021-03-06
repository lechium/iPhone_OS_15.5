//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class VOSOutputEvent, VOSOutputEventDispatcher;
@protocol VOSHapticPack, VOSSoundPack;

@protocol VOSOutputEventHandler <NSObject>
- (void)dispatcher:(VOSOutputEventDispatcher *)arg1 handleEvent:(VOSOutputEvent *)arg2 soundPack:(id <VOSSoundPack>)arg3 hapticPack:(id <VOSHapticPack>)arg4;
@end

