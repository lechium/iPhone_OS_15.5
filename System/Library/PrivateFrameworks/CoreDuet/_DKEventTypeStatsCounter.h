//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKEventStatsCounterInternalProperty-Protocol.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventTypeStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>
{
    _DKEventStatsCounterInternal *_internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000f68a7
@property(retain) _DKEventStatsCounterInternal *internal; // @synthesize internal=_internal;
- (id)typeValues;	// IMP=0x00000000000f6852
- (id)eventType;	// IMP=0x00000000000f6837
- (id)eventName;	// IMP=0x00000000000f681c

@end

