//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBFeedCellExposure : PBCodable <NSCopying>
{
    int _displayRankInSection;	// 8 = 0x8
    NSData *_feedCellHostExposureId;	// 16 = 0x10
    int _feedCellHostType;	// 24 = 0x18
    int _feedCellSection;	// 28 = 0x1c
    NSString *_feedId;	// 32 = 0x20
    int _feedType;	// 40 = 0x28
    NSString *_viewFrameInScreen;	// 48 = 0x30
    _Bool _isUserSubscribedToFeed;	// 56 = 0x38
    struct {
        unsigned int displayRankInSection:1;
        unsigned int feedCellHostType:1;
        unsigned int feedCellSection:1;
        unsigned int feedType:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x00000000000f04d4
@property(retain, nonatomic) NSData *feedCellHostExposureId; // @synthesize feedCellHostExposureId=_feedCellHostExposureId;
@property(retain, nonatomic) NSString *viewFrameInScreen; // @synthesize viewFrameInScreen=_viewFrameInScreen;
@property(nonatomic) int displayRankInSection; // @synthesize displayRankInSection=_displayRankInSection;
@property(nonatomic) _Bool isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000f032d
- (unsigned long long)hash;	// IMP=0x00000000000f0202
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f0008
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000efeb1
- (void)writeTo:(id)arg1;	// IMP=0x00000000000efd8d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000efd80
- (id)dictionaryRepresentation;	// IMP=0x00000000000ef2ff
- (id)description;	// IMP=0x00000000000ef250
@property(readonly, nonatomic) _Bool hasFeedCellHostExposureId;
- (int)StringAsFeedCellHostType:(id)arg1;	// IMP=0x00000000000eefe0
- (id)feedCellHostTypeAsString:(int)arg1;	// IMP=0x00000000000eeeb4
@property(nonatomic) _Bool hasFeedCellHostType;
@property(nonatomic) int feedCellHostType; // @synthesize feedCellHostType=_feedCellHostType;
@property(readonly, nonatomic) _Bool hasViewFrameInScreen;
@property(nonatomic) _Bool hasDisplayRankInSection;
- (int)StringAsFeedCellSection:(id)arg1;	// IMP=0x00000000000eeb70
- (id)feedCellSectionAsString:(int)arg1;	// IMP=0x00000000000eea34
@property(nonatomic) _Bool hasFeedCellSection;
@property(nonatomic) int feedCellSection; // @synthesize feedCellSection=_feedCellSection;
@property(nonatomic) _Bool hasIsUserSubscribedToFeed;
@property(readonly, nonatomic) _Bool hasFeedId;
- (int)StringAsFeedType:(id)arg1;	// IMP=0x00000000000ee664
- (id)feedTypeAsString:(int)arg1;	// IMP=0x00000000000ee4e6
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;

@end

