//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStorage/BMStoreEvent-Protocol.h>
#import <BiomeStorage/NSSecureCoding-Protocol.h>

@class BMFrame, BMStreamMetadata, NSData, NSString;
@protocol BMStoreData;

@interface BMStoreEvent : NSObject <BMStoreEvent, NSSecureCoding>
{
    id <BMStoreData> _eventBody;	// 8 = 0x8
    Class _dataType;	// 16 = 0x10
    NSString *_segmentName;	// 24 = 0x18
    unsigned long long _frameOffset;	// 32 = 0x20
    NSData *_eventBodyData;	// 40 = 0x28
    unsigned int _eventBodyDataVersion;	// 48 = 0x30
    unsigned char _error;	// 52 = 0x34
    double _timestamp;	// 56 = 0x38
    BMFrame *_frame;	// 64 = 0x40
    BMStreamMetadata *_metadata;	// 72 = 0x48
    unsigned long long _eventCategory;	// 80 = 0x50
}

+ (id)eventWithEventType:(Class)arg1 eventData:(id)arg2 dataVersion:(unsigned int)arg3;	// IMP=0x0000000000002f4d
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002971
- (void).cxx_destruct;	// IMP=0x0000000000003721
@property(readonly, nonatomic) unsigned long long eventCategory; // @synthesize eventCategory=_eventCategory;
@property(readonly, nonatomic) NSData *eventBodyData; // @synthesize eventBodyData=_eventBodyData;
@property(readonly, nonatomic) BMStreamMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) BMFrame *frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) NSString *segmentName; // @synthesize segmentName=_segmentName;
@property(readonly, nonatomic) unsigned char error; // @synthesize error=_error;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000032c8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002ff8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002b34
- (_Bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;	// IMP=0x0000000000002979
@property(readonly, nonatomic) Class dataType;
- (id)initWithFrame:(id)arg1 segmentName:(id)arg2 frameOffset:(unsigned long long)arg3 eventBodyData:(id)arg4 eventBodyDataVersion:(unsigned int)arg5 dataType:(Class)arg6 eventCategory:(unsigned long long)arg7 timestamp:(double)arg8 metadata:(id)arg9 error:(unsigned char)arg10;	// IMP=0x00000000000027b6
- (id)initWithFrame:(id)arg1 segmentName:(id)arg2 error:(unsigned char)arg3 eventCategory:(unsigned long long)arg4 metadata:(id)arg5 dataType:(Class)arg6;	// IMP=0x00000000000026b5
- (id)initWithFrame:(id)arg1 error:(unsigned char)arg2 metadata:(id)arg3;	// IMP=0x0000000000002690
- (id)initWithFrame:(id)arg1 error:(unsigned char)arg2;	// IMP=0x0000000000002666
- (id)bookmark;	// IMP=0x0000000000002569
@property(readonly, nonatomic) id <BMStoreData> eventBody;
- (id)init;	// IMP=0x000000000000236c
- (id)initWithEventBody:(id)arg1 timestamp:(double)arg2;	// IMP=0x000000000000376a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

