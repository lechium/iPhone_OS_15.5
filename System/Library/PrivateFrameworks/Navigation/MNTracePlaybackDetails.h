//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Navigation/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface MNTracePlaybackDetails : PBCodable <NSCopying>
{
    double _currentPosition;	// 8 = 0x8
    double _pedestrianTraceStartRelativeTimestamp;	// 16 = 0x10
    double _traceDuration;	// 24 = 0x18
    NSMutableArray *_bookmarks;	// 32 = 0x20
    int _eventType;	// 40 = 0x28
    NSString *_pedestrianTracePath;	// 48 = 0x30
    unsigned int _recordedBookmarkID;	// 56 = 0x38
    NSString *_tracePath;	// 64 = 0x40
    struct {
        unsigned int currentPosition:1;
        unsigned int pedestrianTraceStartRelativeTimestamp:1;
        unsigned int traceDuration:1;
        unsigned int eventType:1;
        unsigned int recordedBookmarkID:1;
    } _has;	// 72 = 0x48
}

+ (Class)bookmarkType;	// IMP=0x000000000002e7ce
- (void).cxx_destruct;	// IMP=0x0000000000030256
@property(nonatomic) double pedestrianTraceStartRelativeTimestamp; // @synthesize pedestrianTraceStartRelativeTimestamp=_pedestrianTraceStartRelativeTimestamp;
@property(retain, nonatomic) NSString *pedestrianTracePath; // @synthesize pedestrianTracePath=_pedestrianTracePath;
@property(nonatomic) unsigned int recordedBookmarkID; // @synthesize recordedBookmarkID=_recordedBookmarkID;
@property(retain, nonatomic) NSMutableArray *bookmarks; // @synthesize bookmarks=_bookmarks;
@property(nonatomic) double currentPosition; // @synthesize currentPosition=_currentPosition;
@property(nonatomic) double traceDuration; // @synthesize traceDuration=_traceDuration;
@property(retain, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002ff39
- (unsigned long long)hash;	// IMP=0x000000000002fb44
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002f942
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002f684
- (void)copyTo:(id)arg1;	// IMP=0x000000000002f4d9
- (void)writeTo:(id)arg1;	// IMP=0x000000000002f2b1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002f2a4
- (id)dictionaryRepresentation;	// IMP=0x000000000002e939
- (id)description;	// IMP=0x000000000002e88a
@property(nonatomic) _Bool hasPedestrianTraceStartRelativeTimestamp;
@property(readonly, nonatomic) _Bool hasPedestrianTracePath;
@property(nonatomic) _Bool hasRecordedBookmarkID;
- (id)bookmarkAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002e7b1
- (unsigned long long)bookmarksCount;	// IMP=0x000000000002e794
- (void)addBookmark:(id)arg1;	// IMP=0x000000000002e72a
- (void)clearBookmarks;	// IMP=0x000000000002e70d
@property(nonatomic) _Bool hasCurrentPosition;
@property(nonatomic) _Bool hasTraceDuration;
@property(readonly, nonatomic) _Bool hasTracePath;
- (int)StringAsEventType:(id)arg1;	// IMP=0x000000000002e52c
- (id)eventTypeAsString:(int)arg1;	// IMP=0x000000000002e47a
@property(nonatomic) _Bool hasEventType;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;

@end

