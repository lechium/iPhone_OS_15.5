//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKDayOccurrenceState;

@interface EKDayOccurrenceContentImageRequest : NSObject
{
    long long _requestId;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    EKDayOccurrenceState *_state;	// 24 = 0x18
    CDUnknownBlockType _resultHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000c8770
@property(readonly, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(retain, nonatomic) EKDayOccurrenceState *state; // @synthesize state=_state;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) long long requestId; // @synthesize requestId=_requestId;
- (id)initWithId:(long long)arg1 options:(unsigned long long)arg2 state:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c866d

@end

