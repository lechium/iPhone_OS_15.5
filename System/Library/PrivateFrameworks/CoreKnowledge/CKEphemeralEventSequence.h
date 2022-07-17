//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKEphemeralReadableEventSequence-Protocol.h>
#import <CoreKnowledge/CKEphemeralWritableEventSequence-Protocol.h>

@class MISSING_TYPE;

@interface CKEphemeralEventSequence : NSObject <CKEphemeralReadableEventSequence, CKEphemeralWritableEventSequence>
{
    MISSING_TYPE *queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000052b40
- (id)init;	// IMP=0x0000000000052a70
- (id)last;	// IMP=0x0000000000027c40
- (id)first;	// IMP=0x0000000000027bf0
- (id)eventsWithIdentifier:(id)arg1;	// IMP=0x00000000000274a0
- (id)eventsBetween:(id)arg1 and:(id)arg2;	// IMP=0x0000000000027090
- (void)writeEventsToKnowledgeStreamNamed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000047db0
- (_Bool)appendEvent:(id)arg1;	// IMP=0x00000000000475a0
- (void)removeAllEventsSavedInKnowledgeStreamNamed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000047250
- (void)loadFromKnowledgeStreamNamed:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000046e00

@end
