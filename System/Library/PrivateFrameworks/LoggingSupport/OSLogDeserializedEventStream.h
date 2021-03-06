//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSEnumerator, _OSLogEventSerializationMetadata;
@protocol OSLogEventDeserializerDataSourceDelegate;

@interface OSLogDeserializedEventStream
{
    _Bool _hasActivated;	// 8 = 0x8
    _OSLogEventSerializationMetadata *_metadata;	// 16 = 0x10
    id <OSLogEventDeserializerDataSourceDelegate> _dataSourceDelegate;	// 24 = 0x18
    NSArray *_curEventArray;	// 32 = 0x20
    NSEnumerator *_eventDictionaryEnumerator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000041e96
@property(readonly, nonatomic) NSEnumerator *eventDictionaryEnumerator; // @synthesize eventDictionaryEnumerator=_eventDictionaryEnumerator;
@property(readonly, nonatomic) NSArray *curEventArray; // @synthesize curEventArray=_curEventArray;
@property(readonly, nonatomic) id <OSLogEventDeserializerDataSourceDelegate> dataSourceDelegate; // @synthesize dataSourceDelegate=_dataSourceDelegate;
@property(readonly, nonatomic) _OSLogEventSerializationMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool hasActivated; // @synthesize hasActivated=_hasActivated;
- (void)activate;	// IMP=0x0000000000041e41
- (void)activateStreamFromDate:(id)arg1;	// IMP=0x0000000000041d8a
- (void)_updateEventArray;	// IMP=0x0000000000041cb3
- (id)_eventArrayFromData:(id)arg1;	// IMP=0x0000000000041b41
- (void)_iterateThroughEventsWithProxy:(id)arg1 filter:(id)arg2 startingDate:(id)arg3;	// IMP=0x0000000000041812
- (id)_nextEventDictionary;	// IMP=0x0000000000041764
- (id)initWithDataSourceDelegate:(id)arg1;	// IMP=0x000000000004164a
@property(readonly, nonatomic) NSDate *lastDate;
@property(readonly, nonatomic) NSDate *firstDate;

@end

